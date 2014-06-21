#include "../node/TreeNode.hpp"
#include "../node/ModuleNode.hpp"
#include "../node/StmtNode.hpp"
#include "../node/ExpNode.hpp"
#include "../node/DeclNode.hpp"
#include "codehelper.h"
#include "codegen.hpp"

int get_block_id(CodeGenerator* cg)
{
  return cg->code_blocks->size() - 1;
}

// Program = Program_head + Routine
void Program_Node::gen_code(CodeGenerator* cg)
{
  int block_id = 0;
  if (this->head)
    block_id = this->head->gen_code(cg);
  if (this->routine)
    this->routine->gen_code(cg, block_id);
}

// Program_head = id
int Program_head_Node::gen_code(CodeGenerator* cg)
{
  cg->code_blocks->push_back(new CodeBlock(this->id->get_name()));
  return get_block_id(cg);
}

// Routine = Routing_head + Routing_body
void Routing_Node::gen_code(CodeGenerator* cg, int block_id)
{
  if (this->head)
    this->head->gen_code(cg, block_id);
  if (this->body)
    this->body->gen_code(cg, block_id);
}

// Routine_head = Const_part + Type_part + Var_part + Routing_part
void Routing_head_Node::gen_code(CodeGenerator* cg, int block_id)
{
  if (this->const_part)
    this->const_part->gen_data(cg);
  if (this->var_part)
    this->var_part->parse_var(cg, block_id);
  if (this->routine_part)
    this->routine_part->gen_code(cg);
}

// Const_part = const_expr_list
void Const_part_Node::gen_data(CodeGenerator* cg)
{
  if (this->const_expr_list)
    this->const_expr_list->gen_data(cg);
}

// Const_expr_list = Const_expr_list | Id Const_value
void Const_expr_list_Node::gen_data(CodeGenerator* cg)
{
  if (this->prev)
    this->prev->gen_data(cg);
  if (this->id)
  {
    string name = this->id->get_name(); 
    string type = this->const_value->get_type();
    string value = this->const_value->get_value();
    cg->data_blocks->push_back(name + ": " + type + " " + value);
  }
}

// Var_part = Var_decl_list
void Var_part_Node::parse_var(cg, block_id)
{
  this->list->parse_var(cg, block_id);
}

// Var_decl_list = Var_decl_list + Var_decl
void Var_decl_list_Node::parse_var(CodeGenerator* cg, int block_id)
{
  if (this->prev)
    this->prev->parse_var(cg, block_id);
  this->name_list->parse_var(cg, block_id);
}

// Var_decl = Name_list
void Var_decl_Node::parse_var(CodeGenerator* cg, int block_id)
{
  this->name_list->parse_var(cg, block_id);
}

// Name_list = Name_list + Id_Node
void Name_list_Node::parse_var(CodeGenerator* cg, int block_id)
{
  if (this->prev)
    this->prev->parse_var(cg, block_id);

  string name = this->id->sym_unit->name;
  string data = name + ": ";
  string type = this->id->sym_unit->type;
  (cg->var_count)++;
  if (block_id == 0)
  {
    // parse global variable
    // Only need to create corresponding data strict.
    if (type == ".asciiz")
      data += ".align 8 asciiz ''";
    else
      data += type + " 0";
  }
  else
  {
    // parse function variable
    // Need to assign register to each variable.
    if (var_id > 8)
      throw VariableException();
    else
      cg->code_blocks[block_id]->variable_map[name] = "s" + to_string(cg->var_count);
  }
}

// Routing_part = Routing_part + Function_decl | Procedure_decl
void Routing_part_Node::gen_code(CodeGenerator* cg)
{
  if (this->prev)
    this->prev->gen_code(cg);
  if (this->isFunction)
    this->func->gen_code(cg);
  else
    this->proc->gen_code(cg);
}

// Function_decl = Id + Parameters + (Return) + Routine
int Function_decl_Node::gen_code(CodeGenerator* cg)
{
  string name = this->id->get_name();
  cg->code_blocks->push_back(new CodeBlock(this->id->get_name()));
  int block_id = get_block_id(cg);
  this->paras->parse_para(cg, block_id);
  this->routine->gen_code(cg, block_id);
  return block_id;
}

// Procedure_decl = Id + Parameters + (Return) + Routine
int Procedure_decl_Node::gen_code(CodeGenerator* cg)
{
  string name = this->id->get_name();
  cg->code_blocks->push_back(new CodeBlock(this->id->get_name()));
  int block_id = get_block_id(cg);
  this->paras->parse_para(cg, block_id);
  this->routine->gen_code(cg, block_id);
  return block_id
}

// Parameters = Para_decl_list
class Parameters_Node::parse_para(CodeGenerator* cg, int block_id)
{
  // Parse Parameter
  this->list->parse_para(cg, block_id);
}

class Para_decl_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
  if (this->prev)
    this->prev->parse_para(cg, block_id);
  this->type->parse_para(cg, block_id);
}

class Para_type_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
  if (isVal)
    this->val_para_list->parse_para(cg, block_id);
  else
    this->var_para_list->parse_para(cg, block_id);
}

class Val_para_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
  this->list->parse_para(cg, block_id);
}

class Var_para_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
  this->list->parse_para(cg, block_id);
}

class Name_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
  if (this->prev)
    this->prev->parse_para(cg, block_id);
  if (cg->code_blocks[block_id] > 4)
    throw VariableException();
  else
  {
    cg->para_count++;
    string name = this->id->sym_unit->name;
    cg->code_blocks[block_id]->variable_map[name] = "a" + to_string(cg->para_count);
  }
}

class Routing_body_Node::gen_code(CodeGenerator* cg, int block_id)
{
  this->stmts->gen_code(cg, block_id);
}

class Compound_stmt_Node::gen_code(CodeGenerator* cg, int block_id)
{
  this->stmts->gen_code(cg, block_id);
}

class Stmt_list_Node::gen_code(CodeGenerator* cg, int block_id)
{
  if (this->prev)
    this->prev->gen_code(cg, block_id);
  if (this->stmt)
    this->stmt->gen_code(cg, block_id);
}

class Stmt_Node::gen_code(CodeGenerator* cg, int block_id)
{
  if (this->hasLabel())
    cg->code_blocks[0]->add_line(this->getLabel());
  // if (this->stmt)
  //   this->stmt->gen_code(CodeGenerator* cg, int block_id);
}

