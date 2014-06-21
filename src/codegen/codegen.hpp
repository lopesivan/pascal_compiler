#ifndef _CODE_GEN_
#define _CODE_GEN_

#include "../globals.h"
#include <vector>
#include <iostream>
#include <map>

using namespace std;

class CodeGenerator {
public:
  vector<CodeBlock*> *code_blocks;
  vector<DataBlock*> *data_blocks;

  CodeGenerator(TreeNode *syntax_tree, string code_file_name)
  {
    this->code_blocks = new vector<CodeBlock*>();
    this->data_blocks = new vector<DataBlock*>();
    this->syntax_tree = syntax_tree;
    this->code_file.open(code_file_name, ifstream::out);
  }
  ~CodeGenerator()
  {
    code_file.close();
  }
  void generate();
private:
  TreeNode *syntax_tree;
  ofstream code_file;

  void gen_code_head();
  void gen_code();
  void gen_data();
}

typedef VariableMap map<string, string>
class CodeBlock {
public:
  VariableMap *variable_map;
  int var_count;
  int para_count;
  CodeBlock(string name) {
    this->name = name;
    this->code = name + ":\n";
    this->variable_map = new VariableMap();
    this->var_count = 0;
    this->para_count = 0;
  }
  ~CodeBlock() {}
  void add_line(string line) {code += "  " + line + "\n";}
  string generated_code() {return code;}
private:
  string name;
  string code;
}

class DataBlock {
public 
  CodeBlock(string data) {this->data = "  " + data + "\n";}
  ~CodeBlock() {}
  string generated_data() {return data;}
private:
  string data;
}

class VariableException() {};

#endif
