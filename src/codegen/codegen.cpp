#include "codegen.hpp"

void CodeGenerator:generate()
{
  syntax_tree->gen_code(&this);
  this->gen_code_head();
  this->gen_code();
  this->code_file << "\n"
  this->gen_data();
}

void CodeGenerator:gen_code_head()
{
  this->code_file << "# Simple Pascal Compiler for Compiler System Design Course." << endl;
  this->code_file << "# This is generated mips file from input pascal source file." << endl;
  this->code_file << "# To run this file, please use: \"spim -file [filename]\"." << endl;
  this->code_file << ".text" << endl;
  this->code_file << ".global " << (this->code_blocks[0]).get_name() << endl;
}

void CodeGenerator:gen_code()
{
  for (int i = 0; i < this->code_blocks.size(); i++)
  {
    this->code_file << "\n";
    this->code_file << (this->code_blocks[i]).generated_code();
  }
}

void CodeGenerator:gen_data()
{
  this->code_file << ".data" << endl;
  for (int i = 0; i < this->data_blocks.size(); i++)
  {
    this->code_file << (this->data_blocks[i]).generated_data();
  }
}
