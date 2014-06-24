#include "../globals.h"
#include "codegen.hpp"

namespace {
    std::string build_instr(const std::string& op, 
            const std::string& dest, const std::string& op1, std::string op2 = ""){
        return op + " " + dest + ", " + op1 
            + ((op2 == "") ? "" : ", " + op2);
    }
}

int get_block_id(CodeGenerator* cg)
{
    return cg->code_blocks.size() - 1;
}

string alloc_temp_var(CodeBlock* cb)
{
    cb->temp_var_count++;
#ifdef DEBUG
    printf("Alloc temp var t%d\n", cb->temp_var_count);
#endif
    return "$t" + to_string(cb->temp_var_count);
}

int free_temp_var(CodeBlock* cb)
{
    cb->temp_var_count--;
}

// Program = Program_head + Routine
int Program_Node::gen_code(CodeGenerator* cg)
{
    int block_id = 0;
    if (this->head)
        block_id = this->head->gen_code(cg);
    printf("block_id = %d\n", block_id);
    if (this->routine)
        this->routine->gen_code(cg, block_id);
    return block_id;
}

// Program_head = id
int Program_head_Node::gen_code(CodeGenerator* cg)
{
    cg->code_blocks.push_back(new CodeBlock("main"));
    return get_block_id(cg);
}

// Routine = Routine_head + Routine_body
void Routine_Node::gen_code(CodeGenerator* cg, int block_id)
{
    if (this->head)
        this->head->gen_code(cg, block_id);
    if (this->body)
        this->body->gen_code(cg, block_id);
}

// Routine_head = Const_part + Type_part + Var_part + Routine_part
void Routine_head_Node::gen_code(CodeGenerator* cg, int block_id)
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
        string value = this->const_value->get_val();
        cg->data_blocks.push_back(new DataBlock(name + ": " + type + " " + value));
#ifdef DEBUG
        printf("Const: %s", cg->data_blocks[cg->data_blocks.size()-1]->generated_data().c_str());
#endif
    }
}

// Var_part = Var_decl_list
void Var_part_Node::parse_var(CodeGenerator* cg, int block_id)
{
    this->list->parse_var(cg, block_id);
}

// Var_decl_list = Var_decl_list + Var_decl
void Var_decl_list_Node::parse_var(CodeGenerator* cg, int block_id)
{
    if (this->prev)
        this->prev->parse_var(cg, block_id);
    this->var_decl->parse_var(cg, block_id);
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
    (cg->code_blocks[block_id]->var_count)++;
    if (block_id == 0)
    {
        // parse global variable
        // Only need to create corresponding data strict.
        if (type.compare(".asciiz") == 0)
            data += ".align 8 asciiz ''";
        else
            data += type + " 0";
        cg->data_blocks.push_back(new DataBlock(data));
#ifdef DEBUG
        printf("this->id->sym_unit = %p\n", this->id->sym_unit);
        printf("this->id->sym_unit->type = %s\n", this->id->sym_unit->type.c_str());
        printf("Var: %s", cg->data_blocks[cg->data_blocks.size()-1]->generated_data().c_str());
#endif
    }
    else
    {
        // parse function variable
        // Need to assign register to each variable.
        cg->code_blocks[block_id]->variable_map[name] = "$s" + to_string(cg->code_blocks[block_id]->var_count);
    }
}

// Routine_part = Routine_part + Function_decl | Procedure_decl
int Routine_part_Node::gen_code(CodeGenerator* cg)
{
    if (this->prev)
        this->prev->gen_code(cg);
    if (this->isFunction)
        this->func->gen_code(cg);
    else
        this->proc->gen_code(cg);
    return 0;
}

// Function_decl = Id + Parameters + (Return) + Routine
int Function_decl_Node::gen_code(CodeGenerator* cg)
{
    string name = this->id->get_name();
    cg->code_blocks.push_back(new CodeBlock(this->id->get_name()));
    int block_id = get_block_id(cg);
    this->paras->parse_para(cg, block_id);
    this->routine->gen_code(cg, block_id);
    return block_id;
}

// Procedure_decl = Id + Parameters + (Return) + Routine
int Procedure_decl_Node::gen_code(CodeGenerator* cg)
{
    string name = this->id->get_name();
    cg->code_blocks.push_back(new CodeBlock(this->id->get_name()));
    int block_id = get_block_id(cg);
    this->paras->parse_para(cg, block_id);
    this->routine->gen_code(cg, block_id);
    return block_id;
}

// Parameters = Para_decl_list
void Parameters_Node::parse_para(CodeGenerator* cg, int block_id)
{
    // Parse Parameter
    this->list->parse_para(cg, block_id);
}

void Para_decl_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
    if (this->prev)
        this->prev->parse_para(cg, block_id);
    this->type->parse_para(cg, block_id);
}

void Para_type_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
    if (isVal)
        this->val_para_list->parse_para(cg, block_id);
    else
        this->var_para_list->parse_para(cg, block_id);
}

void Val_para_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
    this->list->parse_para(cg, block_id);
}

void Var_para_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
    this->list->parse_para(cg, block_id);
}

void Name_list_Node::parse_para(CodeGenerator* cg, int block_id)
{
    if (this->prev)
        this->prev->parse_para(cg, block_id);
    cg->code_blocks[block_id]->para_count++;
    string name = this->id->sym_unit->name;
    cg->code_blocks[block_id]->variable_map[name] = "$a" + to_string(cg->code_blocks[block_id]->para_count);
}

void Routine_body_Node::gen_code(CodeGenerator* cg, int block_id)
{
    this->stmts->gen_code(cg, block_id);
}

void Compound_stmt_Node::gen_code(CodeGenerator* cg, int block_id)
{
    this->stmts->gen_code(cg, block_id);
}

void Stmt_list_Node::gen_code(CodeGenerator* cg, int block_id)
{
    if (this->prev)
        this->prev->gen_code(cg, block_id);
    if (this->stmt)
        this->stmt->gen_code(cg, block_id);
}

void Stmt_Node::gen_code(CodeGenerator* cg, int block_id)
{
    if (this->has_label())
        cg->code_blocks[0]->add_line(this->get_label());
    this->stmt->gen_code(cg, block_id);
}

void Write_stmt_Node::gen_code(CodeGenerator* cg, int block_id){
    string temp_var_reg = alloc_temp_var(cg->code_blocks[block_id]);
    CodeBlock* cb = cg->code_blocks[block_id];
    
    // write variable
    if(expression->get_attr_type() == "integer"){
        cb->add_line("li $v0, 1");//print int
    }else
        cb->add_line("li $v0, 4");//print string

    this->expression->gen_compute_code(cb, temp_var_reg);
    cb->add_line("move $a0, " + temp_var_reg);
    free_temp_var(cb);

    cb->add_line("syscall");
}

void Writeln_stmt_Node::gen_code(CodeGenerator* cg, int block_id)
{
#ifdef DEBUG
    printf("Generate code for writeln\n");
    printf("expression's attr_type: %s\n", expression->get_attr_type().c_str());
#endif
    string temp_var_reg = alloc_temp_var(cg->code_blocks[block_id]);
    CodeBlock* cb = cg->code_blocks[block_id];
    
    // write variable
    if(expression->get_attr_type() == "integer"){
        cb->add_line("li $v0, 1");//print int
    }else
        cb->add_line("li $v0, 4");//print string

    this->expression->gen_compute_code(cb, temp_var_reg);
    cb->add_line("move $a0, " + temp_var_reg);
    free_temp_var(cb);

    cb->add_line("syscall");
    
    // write new line
    cb->add_line("li $v0, 4");
    cb->add_line("la $a0, __newline__");
    cb->add_line("syscall");
}

void Read_stmt_Node::gen_code(CodeGenerator* cg, int block_id){
    CodeBlock* cb = cg->code_blocks[block_id];

    const auto &type = id->sym_unit->type;
    printf("read_stmt type: %s\n", type.c_str());
    if(type == ".word"){
        cb->add_line("li $v0, 5");
    }else if(type == ".asciiz"){
        cb->add_line("li $v0, 8");
    }
    cb->add_line("syscall");
    cb->add_line(build_instr("sw", "$v0", id->get_name()));
    //TODO: only var available here, as to function variable are not done
}

//float all go die -_-#
void Expression_Node::gen_compute_code(CodeBlock* cb, string result_reg)
{
    if(type == NONE){//expr
        expr->gen_compute_code(cb, result_reg);
    }else{//compare expression
        auto regL = alloc_temp_var(cb);
        auto regR = alloc_temp_var(cb);
        expression->gen_compute_code(cb, regL);
        expr->gen_compute_code(cb, regR);
        switch(type){
            case LT:
                cb->add_line(build_instr("slt", result_reg, regR, regL));
                break;
            case GE:
                cb->add_line(build_instr("sge", result_reg, regR, regL));
                break;
            case GT:
                cb->add_line(build_instr("sgt", result_reg, regR, regL));
                break;
            case LE:
                cb->add_line(build_instr("sle", result_reg, regR, regL));
                break;
        }
        free_temp_var(cb);
        free_temp_var(cb);//free regL and regR
    }
}

void Expr_Node::gen_compute_code(CodeBlock* cb, string result_reg)
{
    if(type == NONE){//is a factor
        factor->gen_compute_code(cb, result_reg);
    }else{ //arithmetic operation
        auto regL = alloc_temp_var(cb);
        auto regR = alloc_temp_var(cb);
        expr_lhs->gen_compute_code(cb, regL);
        expr_rhs->gen_compute_code(cb, regR);
        switch(type){
            case SUB:
                cb->add_line(build_instr("sub", result_reg, regL, regR));
                break;
            case ADD:
                cb->add_line(build_instr("add", result_reg, regL, regR));
                break;
            case AND:
                cb->add_line(build_instr("and", result_reg, regL, regR));
                break;
            case OR:
                cb->add_line(build_instr("or", result_reg, regL, regR));
                break;
            case MUL:
                cb->add_line(build_instr("mul", result_reg, regL, regR));
                break;
            case DIV:
                cb->add_line(build_instr("div", result_reg, regL, regR));
                break;
            case MOD:
                cb->add_line(build_instr("rem", result_reg, regL, regR));
                break;
        }
        free_temp_var(cb);
        free_temp_var(cb);//free regL and regR
    }
}

void Factor_unary_Node::gen_compute_code(CodeBlock* cb, string result_reg){
    auto reg = alloc_temp_var(cb);
    factor->gen_compute_code(cb, reg);
    switch(type){
        case NOT:
            cb->add_line(build_instr("not", result_reg, reg));
            break;
        case MINUS:
            cb->add_line(build_instr("sub", result_reg, "$zero", reg));
            break;
    }
    free_temp_var(cb);
} 

void Factor_id_Node::gen_compute_code(CodeBlock* cb, string result_reg)
{
#ifdef DEBUG
    printf("Generate code for Factor_id\n");
    printf("this->id = %p\n", this->id);
    printf("Factor type is %s\n", this->id->sym_unit->type.c_str());
#endif
    if (this->id->sym_unit->type == "const")
        cb->add_line(build_instr("la", result_reg, this->id->get_name()));
    else if(this->id->sym_unit->type == ".word"){
        cb->add_line(build_instr("lw", result_reg, this->id->get_name()));
    }else if(this->id->sym_unit->type == "float"){//TODO result_reg
        cb->add_line("lwcZ " + result_reg + " " + this->id->get_name());
    }
}

void ConstInt_Node::gen_compute_code(CodeBlock* cb, string result_reg){
    cb->add_line(build_instr("li", result_reg, to_string(val)));
}
