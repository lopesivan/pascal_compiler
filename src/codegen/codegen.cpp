#include "codegen.hpp"

void CodeGenerator::generate()
{
  syntax_tree->gen_code(this);
  this->gen_code_head();
  this->gen_code();
  this->gen_data();
}

void CodeGenerator::gen_code_head()
{
  fprintf(code_file, "# Simple Pascal Compiler for Compiler System Design Course.\n");
  fprintf(code_file, "# This is generated mips file from input pascal source file.\n");
  fprintf(code_file, "# To run this file, please use: \"spim -file [filename]\".\n");
  fprintf(code_file, ".text\n");
  fprintf(code_file, ".global %s\n", code_blocks[0]->get_name().c_str());
}

void CodeGenerator::gen_code()
{
  for (int i = 0; i < this->code_blocks.size(); i++)
  {
    fprintf(code_file, "\n%s", code_blocks[i]->generated_code().c_str());
  }
}

void CodeGenerator::gen_data()
{
  fprintf(code_file, "\n.data\n");
  fprintf(code_file, "  __newline__: .asciiz \"\n\"");
  for (int i = 0; i < this->data_blocks.size(); i++)
    fprintf(code_file, "%s\n", data_blocks[i]->generated_data().c_str());
}
