#ifndef _CODE_GEN_
#define _CODE_GEN_

#include "code.hpp"

using namespace std;

class CodeGenerator {
public:
  CodeGenerator() {}
  CodeGenerator(TreeNode *syntax_tree, string code_file_name)
  {
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
  void gen_data();
}

#endif
