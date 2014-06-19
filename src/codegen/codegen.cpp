#include "codegen.cpp"
#include <iostream>

void CodeGenerator:generate()
{

}

void CodeGenerator:gen_code_head()
{
  this->syntax_tree << "# Simple Pascal Compiler for Compiler System Design Course." << endl;
  this->syntax_tree << "# This is generated mips file from input pascal source file." << endl;
  this->syntax_tree << "# To run this file, please use: \"spim -file [filename]\"." << endl;
  this->syntax_tree << ".text" << endl;
  this->syntax_tree << ".global main" << endl;
}

void CodeGenerator:gen_data()
