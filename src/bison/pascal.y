%{
#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */

%}


%token  ID
%token  INTEGER
%token  REAL
%token  CHAR
%token  STRING
%token PROGRAM DOT SEMI COMMA EQUAL CONST ARRAY TYPE LB RB OF RECORD END COLON LP RP DOTDOT MINUS VAR FUNCTION NOT GE GT LE LT
%token PLUS MUL DIV AND MOD UNEQUAL OR ASSIGN P_BEGIN IF ELSE THEN REPEAT UNTIL WHILE DO FOR GOTO CASE TO DOWNTO READ
%token TYPEINTEGER TYPEREAL TYPECHAR TYPESTRING TYPEBOOL FALSE TRUE PROCEDURE 


%%
program   : program_head  routine  DOT
               { $$ = newModuleNode(ProgramK);
                 $$->child[0] = $1;
                 $$->child[1] = $2;
                 $$->lineno=lineno;
               }
          ;
program_head  : PROGRAM  ID  
                { $$->attr.name = copyString(tokenString);
                }
                SEMI
              ;

routine : routine_head  routine_body
              { $$ = newModuleNode(RoutineK);
                $$->child[0] = $1;
                $$->child[1] = $2;
                $$->lineno=lineno;
              } 
              |{$$=NULL;}
              ;
routine_head : const_part  type_part  var_part  routine_part
              {
                $$ = newModuleNode(Routine_headK);
                $$->child[0]=$1;
                $$->child[1]=$2;
                $$->child[2]=$3;
                $$->child[3]=$4;
                $$->lineno=lineno;
              };
const_part : CONST  const_expr_list  { $$ = $2;}
              |{$$=NULL;}
              ;
const_expr_list : const_expr_list  ID  
                      { savedName = copyString(tokenString);
                        savedLineNo = lineno; 
                      }
                  EQUAL const_value SEMI
                      {TreeNode * t=$1;
                           if(t!=NULL)
                           {    while(t->sibling!=NULL)
                                   t=t->sibling;
                                t->sibling=newStmtNode(EqualK);
                                t->sibling->child[0]=$5;
                                t->sibling->attr.name = savedName;
                                t->sibling->lineno =savedLineNo;
                                $$ =$1;
                           }
                           else
                           {
                                $$ =$1;
                           }
                      }
		|  ID { savedName = copyString(tokenString);savedLineNo = lineno;}
                   EQUAL  const_value  SEMI
                      { $$ =newStmtNode(EqualK);
                        $$->child[0]=$4;
                        $$->attr.name = savedName;
                        $$->lineno =savedLineNo;
                      }
                ;
const_value   :  INTEGER  
                    { $$ =newExpNode(ConstIntK);
                      $$->attr.int_val=atoi(tokenString);
                      $$->lineno =lineno;
                    }
              |  REAL
                    { $$ =newExpNode(ConstDoubleK);
                      $$->attr.double_val=atof(tokenString);
                      $$->lineno =lineno;
                    } 
              |  CHAR  
                    { $$ =newExpNode(ConstCharK);
                      $$->attr.char_val=tokenString;
                      $$->lineno =lineno;
                    }
              |  STRING  
                    { $$ =newExpNode(ConstStrK);
                      $$->attr.string_val=malloc((strlen(tokenString)+1)*sizeof(char));
                      strcpy($$->attr.string_val,tokenString);
                      $$->lineno =lineno;
                    }
              ;
type_part : TYPE type_decl_list { $$ = $2;}
              | {$$=NULL} ;
type_decl_list : type_decl_list  type_definition  
                 { TreeNode * t = $1;
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = $2;
                     $$ = $1; }
                     else $$ = $2;
                 }
              |  type_definition { $$ = $1; }
              ;
type_definition : ID { savedName = copyString(tokenString);
                         savedLineNo = lineno; }
                   EQUAL  type_decl  SEMI
                   { $$ =newStmtNode(EqualK);
                     $$->child[0]=$4;
                     $$->attr.name = savedName;
                     $$->lineno =savedLineNo;  
                   };
type_decl    : simple_type_decl {$$=$1;}  
             |  array_type_decl  {$$=$1;}
             |  record_type_decl {$$=$1;};
array_type_decl : ARRAY  LB  simple_type_decl  RB  OF  type_decl
                   { $$ =newDeclNode(ArrayK);
                     $$->child[0]=$3;
                     $$->child[1]=$6;
                     $$->lineno =lineno;
                   };
record_type_decl : RECORD  field_decl_list  END{$$=$2;};
field_decl_list : field_decl_list  field_decl
                   {TreeNode* t = $1;
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = $2;
                              $$ = $1; 
                        }
                        else $$ = $2;
                   }  
                |  field_decl{$$=$1;};
field_decl : name_list  COLON  type_decl  SEMI
              { $$ =newDeclNode(FieldK);
                $$->child[0]=$1;
                $$->child[1]=$3;
                $$->lineno =lineno;
              };
simple_type_decl : TYPEINTEGER{$$->type=Int;}  
                |  TYPEREAL{$$->type=Double;}
                |  TYPECHAR{$$->type=Char;}
                |  TYPESTRING{$$->type=String;}
                |  TYPEBOOL {$$->type=Bool;}
                |  ID  { $$ = newExpNode(IdK);
                         $$->attr.name =copyString(tokenString);
                         $$->lineno = lineno;
                       }
                |  LP  name_list  RP{$$=$2;}  
                |  const_value  DOTDOT  const_value
                   {
                     $$ =newDeclNode(SimpleK);
                     $$->child[0]=$1;
                     $$->child[1]=$3;
                     $$->lineno =lineno;
                   }  
                |  MINUS  const_value  DOTDOT  const_value
                   {
                     $$ =newDeclNode(SimpleK);
                     $$->child[2]=$1;
                     $$->child[3]=$3;
                     $$->lineno =lineno;
                   } 
                |  MINUS  const_value  DOTDOT  MINUS  const_value
                   {
                     $$ =newDeclNode(SimpleK);
                     $$->child[4]=$1;
                     $$->child[5]=$3;
                     $$->lineno =lineno;
                   } 
                |  ID { savedName = copyString(tokenString);
                         savedLineNo = lineno; } 
                   DOTDOT  ID
                   {
                     $$ =newDeclNode(SimpleK);
                     $$->attr.name=savedName;
                     $$->child[6]->attr.name=copyString(tokenString);
                     $$->lineno =savedLineNo;
                   } 
                ;
name_list : name_list  COMMA  ID 
             { TreeNode* t = $1;
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling=newExpNode(IdK);
                     t->sibling->attr.name=copyString(tokenString);
                     $$ = $1; 
                   }
                   else 
                   {
                     $$ = newExpNode(IdK);
		     $$->attr.name=copyString(tokenString);
                   }
             }
             |  ID { $$ = newExpNode(IdK);
                  $$->attr.name =copyString(tokenString);
                  $$->lineno = lineno;
                }
             ;
var_part : VAR  var_decl_list {$$=$2;} 
             |  {$$=NULL};
var_decl_list : var_decl_list  var_decl
                {TreeNode* t = $1;
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = $2;
                              $$ = $1; 
                        }
                        else $$ = $2;
                   }  
             |  var_decl{$$=$1;};
var_decl : name_list  COLON  type_decl  SEMI
             { $$ =newDeclNode(FieldK);
               $$->child[0]=$1;
               $$->child[1]=$3;
               $$->lineno =lineno;
             };
routine_part : routine_part  function_decl 
                {TreeNode* t = $1;
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = $2;
                              $$ = $1; 
                        }
                        else $$ = $2;
                   }   
             |  routine_part  procedure_decl
                {TreeNode* t = $1;
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = $2;
                              $$ = $1; 
                        }
                        else $$ = $2;
                   }  
             |  function_decl {$$=$1;} 
             |  procedure_decl{$$=$1;};
function_decl : FUNCTION  ID 
                 { savedName = copyString(tokenString);
                   savedLineNo = lineno; 
                 }
                 parameters  COLON  simple_type_decl
                 { $$ = newModuleNode(FunctionK);
                   $$->child[0] = $4;
                   $$->child[1] = $6;
                   $$->attr.name=savedName;
                   $$->lineno=savedLineNo;
                 };
procedure_decl :PROCEDURE ID 
                 { savedName = copyString(tokenString);
                   savedLineNo = lineno; 
                 }
                 parameters  SEMI  routine  SEMI
                 { $$ = newModuleNode(ProcedureK);
                   $$->child[0] = $4;
                   $$->child[1] = $6;
                   $$->attr.name=savedName;
                   $$->lineno=savedLineNo;
                 };
parameters : LP  para_decl_list  RP  {$$=$2;}
                |{$$=NULL};
para_decl_list : para_decl_list  SEMI  para_type_list
                   {TreeNode* t = $1;
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = $2;
                              $$ = $1; 
                        }
                        else $$ = $2;
                   };
para_type_list : var_para_list COLON  simple_type_decl
                  { $$ =newDeclNode(ParaK);
                    $$->child[0]=$1;
                    $$->child[2]=$3;
                    $$->lineno =lineno;
                  }
              |  val_para_list  COLON  simple_type_decl
                  { $$ =newDeclNode(ParaK);
                    $$->child[1]=$1;
                    $$->child[2]=$3;
                    $$->lineno =lineno;
                  }; 
var_para_list : VAR  name_list {$$=$2;};
val_para_list : name_list {$$=$1;};
routine_body : compound_stmt {$$=$1;};
compound_stmt : P_BEGIN  stmt_list  END {$$=$2;};
stmt_list : stmt_list  stmt  SEMI 
              { TreeNode* t = $1;
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = $2;
                     $$ = $1; }
                     else $$ = $2;
                 }
              |  {$$=NULL};
stmt : INTEGER  COLON  non_label_stmt  
         { $$ = newStmtNode(LabelK);
           $$->child[0] = $3;
           $$->attr.goto_label=$1->attr.int_val;
           $$->lineno = savedLineNo;
         }
        |  non_label_stmt{$$=$1;};
non_label_stmt : assign_stmt {$$=$1;}
                | proc_stmt {$$=$1;}
                | compound_stmt{$$=$1;} 
                | if_stmt {$$=$1;}
                | repeat_stmt  {$$=$1;}
                | while_stmt  {$$=$1;}
                | for_stmt {$$=$1;}
                | case_stmt  {$$=$1;}
                | goto_stmt  {$$=$1;}
                ;
assign_stmt : ID { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
               ASSIGN  expression
                 { $$ = newStmtNode(AssignK);
                   $$->child[0] = $4;
                   $$->attr.name = savedName;
                   $$->lineno = savedLineNo;
                 }
           | ID { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
             LB expression RB ASSIGN expression
                { $$ = newStmtNode(AssignK);
                  $$->attr.name = savedName;
                  $$->child[1] = $4;
                  $$->child[2] = $7;
                  $$->lineno = savedLineNo;
                }
           | ID  { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
             DOT  
             ID { $$ = newStmtNode(AssignK);
                  $$->attr.name = savedName;
                  $$->child[3]=newExpNode(IdK);
                  $$->child[3]->attr.name = copyString(tokenString);
                  $$->lineno =lineno;
                  }
            ASSIGN  expression
                { 
                  $$->child[4] = $7;
                  $$->lineno = savedLineNo;
                };
proc_stmt : ID{$$=newExpNode(IdK);$$->attr.name = copyString(tokenString);$$->lineno=lineno;}
          |  ID  { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
             LP  args_list  RP
             {$$ = newStmtNode(ProcK);
              $$->attr.name = savedName;
              $$->child[1]=$3;
              $$->lineno = savedLineNo;
             }
          |  READ  LP  factor  RP ;

if_stmt : IF  expression  THEN  stmt  else_clause
                { $$ = newStmtNode(IfK);
                   $$->child[0] = $2;
                   $$->child[1] = $4;
                   $$->child[2] = $5;
                   $$->lineno=lineno;
                };
else_clause : ELSE stmt {$$ = $2}| ;
repeat_stmt : REPEAT  stmt_list  UNTIL  expression
                { $$ = newStmtNode(RepeatK);
                  $$->child[0] = $2;
                  $$->child[1] = $4;
                  $$->lineno=lineno;
                }
            ;
while_stmt : WHILE  expression  DO stmt
                { $$ = newStmtNode(WhileK);
                  $$->child[0] = $2;
                  $$->child[1] = $4;
                  $$->lineno=lineno;
                }
            ;
for_stmt : FOR  ID { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
            ASSIGN  expression  direction  expression  DO stmt
                { $$ = newStmtNode(ForK);
                  $$->attr.name = savedName;
                  $$->child[0] = $5;
                  $$->child[1] = $6;
                  $$->child[2] = $7;
                  $$->child[3] = $9; 
                  $$->lineno=savedLineNo;
                }
            ;
direction : TO {$$->attr.direction=1}
          | DOWNTO{$$->attr.direction=0};
case_stmt : CASE expression OF case_expr_list  END
                { $$ = newStmtNode(CaseK);
                  $$->child[0] = $2;
                  $$->child[1] = $4;
                  $$->lineno=lineno;
                }
            ;
case_expr_list : case_expr_list  case_expr  
                  { TreeNode* t = $1;
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = $2;
                     $$ = $1; }
                     else $$ = $2;
                  }
                  |  case_expr{$$=$1;};
case_expr : const_value  COLON  stmt  SEMI
                { $$ = newExpNode(Case_expK);
                  $$->child[0] = $1;
                  $$->child[1] = $3;
                  $$->lineno=lineno;
                }
          |  ID  { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
             COLON  stmt  SEMI
                { $$ = newExpNode(Case_expK);
                  $$->attr.name = savedName;
                  $$->child[2] = $4;
                  $$->lineno = savedLineNo;
                };
goto_stmt : GOTO  INTEGER
                { $$ = newStmtNode(GotoK);
                  $$->attr.goto_label = $2->attr.int_val;
                  $$->lineno = lineno;
                };
expression_list : expression_list  COMMA  expression 
                   { TreeNode* t = $1;
                     if (t != NULL)
                     { while (t->sibling != NULL)
                          t = t->sibling;
                       t->sibling = $3;
                       $$ = $1; }
                       else $$ = $3;
                   }
                   |expression{$$=$1;};
expression : expression  GE  expr  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = GE;
                   $$->lineno = lineno;
                 }
           |  expression  GT  expr 
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = GT;
                   $$->lineno = lineno;
                 } 
           |  expression  LE  expr
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = LE;
                   $$->lineno = lineno;
                 }
           |  expression  LT  expr 
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = LT;
                   $$->lineno = lineno;
                 }
           |  expression  EQUAL  expr  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = EQUAL;
                   $$->lineno = lineno;
                 }
           |  expression  UNEQUAL  expr  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = UNEQUAL;
                   $$->lineno = lineno;
                 }
           |  expr {$$ = $1;}
           ;
expr       : expr  PLUS  term  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = PLUS;
                   $$->lineno = lineno;
                 }
           |  expr  MINUS  term 
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = MINUS;
                   $$->lineno = lineno;
                 }
           |  expr  OR  term  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = OR;
                   $$->lineno = lineno;
                 }
           |  term { $$ = $1;}
           ;
term       : term  MUL  factor  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = MUL;
                   $$->lineno = lineno;
                 }
           |  term  DIV  factor  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = DIV;
                   $$->lineno = lineno;
                 }
           |  term  MOD  factor  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = MOD;
                   $$->lineno = lineno;
                 }
           |  term  AND factor  
                 { $$ = newExpNode(OpK);
                   $$->child[0] = $1;
                   $$->child[1] = $3;
                   $$->attr.op = AND;
                   $$->lineno = lineno;
                 }
           |  factor { $$ = $1;}
           ;
factor     : ID { $$ = newExpNode(IdK);
                  $$->attr.name =copyString(tokenString);
                  $$->lineno = lineno;
                }
           |  const_value  
                  {$$ = $1;}
           |  LP  expression  RP
                  {$$ = $1;}
           |  NOT  factor 
                  {$$ = $2;} 
           |  MINUS  factor
                  {$$ = $2;}  
           |  ID  { savedName = copyString(tokenString);
                   savedLineNo = lineno;}
              LB  expression  RB
                {$$= newExpNode(FactorK);
                 $$->attr.name =savedName;
                 $$->child[0]=$4;
                 $$->lineno =savedLineNo;
                }
           |  ID  { savedName = copyString(tokenString);
                   savedLineNo = lineno;}
              DOT  ID
                {$$=newExpNode(FactorK);
                 $$->attr.name =savedName;
                 $$->child[1]=newExpNode(IdK);
                 $$->child[1]->attr.name=copyString(tokenString);
                 $$->lineno =savedLineNo;
                }
           ;
args_list  :  args_list  COMMA  expression 
              {  TreeNode* t = $1;
                    if (t != NULL)
                    {  while (t->sibling != NULL)
                         t = t->sibling;
                       t->sibling = $3;
                        $$ = $1; 
                    }
                    else $$ = $3;
              }
           |  expression{$$=$1;};

%%

int yyerror(char * message){ 
  fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

// static int yylex(void)
// { return getToken(); }

TreeNode * parse(void){
  yyparse();
  return savedTree;
}
