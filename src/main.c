//#define SCAN_DEBUG
//#define PARSE_DEBUG

#include "globals.h"
#include "pascal.tab.h"

extern FILE* yyin;

FILE * source;  //input source code
FILE * listing = stdout; //used to output debug info

symboltable* st = new symboltable();//external symboltable operator

extern TreeNode * do_parse(void);
extern int yy_flex_debug;

int main( int argc, char * argv[] ){
  int i;
  char pgm[120]; /* source code file name */
  if (argc != 2){ 
    fprintf(stderr,"usage: %s <filename>\n",argv[0]);
    exit(1);
  }
  strcpy(pgm,argv[1]);
  if (strchr (pgm, '.') == NULL)
     strcat(pgm,".pas");
  source = fopen(pgm,"r");
  if (source == NULL){
    fprintf(stderr,"File %s not found\n",pgm);
    exit(1);
  }
  yyin = source;
  listing = stdout; /* send listing to screen */
  fprintf(listing,"\nPASCAL COMPILATION: %s\n",pgm);
  
  //scan begin
#ifdef SCAN_DEBUG
  yy_flex_debug = 1;
#endif

#ifdef PARSE_DEBUG
  yydebug = 1;
#endif
  
  auto syntaxTree = dynamic_cast<Program_Node*>(do_parse());
  syntaxTree->build_symbol_table("");
  puts("=========symtab debug============");
  for (i=0; i<SIZE; i++) {
    if (st->units[i].use == 1) {
      puts("=======================");
      printf("%s", st->units[i].name.c_str()); puts("");
      printf("%s", st->units[i].type.c_str()); puts("");
    }
  }
  puts("=========symtab debug  end========");
  fclose(source);
  return 0;
}