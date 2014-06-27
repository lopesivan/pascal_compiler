#ifndef _CODE_GEN_H
#define _CODE_GEN_H

#include "../node/TreeNode.hpp"
#include <vector>
#include <cstdio>
#include <map>

using namespace std;

typedef map<string, string> VariableMap;

class TreeNode;

class CodeBlock {
public:
  VariableMap variable_map;
  int var_count;
  int para_count;
  int temp_var_count;

  CodeBlock(const string& name):label_count(0){
    this->name = name;
    this->code = name + ":\n";
    this->var_count = 0;
    this->para_count = 0;
  }
  ~CodeBlock() {}
  void add_line(const string& line) {code += "  " + line + "\n";}
  string generated_code() { return code; }
  string get_name() { return name; }

  std::string alloc_label(){
    return (name + "_" + to_string(label_count++));
  }
  
private:
  string name;
  string code;
  int label_count;
};

class DataBlock {
public:
  DataBlock(const string& data) {this->data = "  " + data + "\n";}
  ~DataBlock() {}
  const string& generated_data() const{return data;}
private:
  string data;
};

/** 
  * generator for the whole program
  * maintain the code to write
  * the output file handle
  */
class CodeGenerator {
public:
  vector<CodeBlock*> code_blocks; //.text section
  vector<DataBlock*> data_blocks; //.data section

  CodeGenerator(TreeNode* syntax_tree, char* code_file_name)
  {
    this->syntax_tree = syntax_tree;

    this->code_file = fopen(code_file_name, "w");
  }
  ~CodeGenerator()
  {
    fclose(this->code_file);
  }
  void generate();
private:
  TreeNode *syntax_tree;
  FILE* code_file;

  void gen_code_head();
  void gen_code();
  void gen_data();
};

#endif
