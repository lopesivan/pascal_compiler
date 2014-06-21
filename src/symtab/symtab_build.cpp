#include "symboltable.h"

#include "../node/TreeNode.hpp"
#include "../node/DeclNode.hpp"
#include "../node/ExpNode.hpp"
#include "../node/ModuleNode.hpp"
#include "../node/StmtNode.hpp"

/*ModuleNode*/


//1. program head
std::string Program_Node::build_symbol_table(std::string type) {
	if (this->head != nullptr) {
		this->head->build_symbol_table("");
	}

	if (this->routine != nullptr) {
		this->routine->build_symbol_table("");
	}
	return "";
}

std::string Program_head_Node::build_symbol_table(std::string type) {
	if (this->id != nullptr) {
		// st->st_insert(this->id->get_name(), this->id->getLineno(), 0, "program_id");
		//insert program head for fun
	}
	return "";
}


//1. program routine
std::string Routine_Node::build_symbol_table(std::string type) {
	if (this->head != nullptr) {
		this->head->build_symbol_table("");
	}
	if (this->body != nullptr) {
		this->body->build_symbol_table("");	
	}
	return "";
}

// 2. program routine_head
std::string Routine_head_Node::build_symbol_table(std::string type) {
	if (this->const_part != nullptr) {
		this->const_part->build_symbol_table("");
	}
	if (this->type_part != nullptr) {
		this->type_part->build_symbol_table("");	
	}
	if (this->var_part != nullptr) {
		this->var_part->build_symbol_table("");
	}
	if (this->routine_part != nullptr) {
		this->routine_part->build_symbol_table("");
	}
	return "";
}


// 3. routine_head_node
std::string Const_part_Node::build_symbol_table(std::string type) {
	if (this->const_expr_list != nullptr) {
		this->const_expr_list->build_symbol_table("");
	}
	return "";
}


std::string Const_expr_list_Node::build_symbol_table(std::string type) {
	st->st_insert(this->id->get_name(), this->id->getLineno(), 0, "const");

	if (this->prev != nullptr) {
		this->prev->build_symbol_table("");
	}
	return "";
}

std::string Type_part_Node::build_symbol_table(std::string type) {	
	if (this->list != nullptr) {
		this->list->build_symbol_table("");
	}
	return "";
}


std::string Type_decl_list_Node::build_symbol_table(std::string type) {	//Treenode
	if (this->prev != nullptr) {
		this->prev->build_symbol_table("");
	}

	if (this->type_def != nullptr) {
		this->type_def->build_symbol_table("");	//todo
	}
	return "";
}

std::string Type_definition_Node::build_symbol_table(std::string type) { 	//Treenode
	std::string type_name;
	if (this->id != nullptr) {
		table_unit *p = st->st_insert(this->id->get_name(), this->id->getLineno(), 0, type_name); 
		this->id->sym_unit = p;
		type_name = this->id->get_name();
	}

	if (this->type_decl != nullptr) {
		this->type_decl->build_symbol_table(type_name);
	}

	return "";
}


std::string Var_part_Node::build_symbol_table(std::string type) {
	if (this->list != nullptr) {
		this->list->build_symbol_table("");
	}
	return "";
}


std::string Var_decl_list_Node::build_symbol_table(std::string type) {
	if (this->var_decl != nullptr) {
		this->var_decl->build_symbol_table("");
	}

	if (this->prev != nullptr) {
		this->prev->build_symbol_table("");
	}
	return "";
}


std::string Var_decl_Node::build_symbol_table(std::string type) {	//OK
	std::string v_name;
	if (this->name_list != nullptr) {
		this->name_list->build_symbol_table("");
	}
	Name_list_Node *p= this->name_list;
	while (p->prev != nullptr) {
		if (this->type != nullptr) {
			this->type->build_symbol_table(p->id->get_name());
		}
		p = p->prev;
	}
	if (this->type != nullptr) {
		this->type->build_symbol_table(p->id->get_name());
	}
	return "";
}




std::string Name_list_Node::build_symbol_table(std::string type) {	//OK
	if (this->prev != nullptr) {
		this->prev->build_symbol_table(type);
	}

	if (this->id != nullptr) {
		table_unit *p = st->st_insert(this->id->get_name(), this->id->getLineno(), 0, "");
		this->id->sym_unit = p; //reverse-link
	}
	return "";
}





std::string Routine_part_Node::build_symbol_table(std::string type) {
	if (this->prev != nullptr) {
		this->prev->build_symbol_table("");
	}
	if (this->get_isfunction()) {
		this->func->build_symbol_table("");
	} else {
		this->proc->build_symbol_table("");
	}
	return "";
}


std::string Function_decl_Node::build_symbol_table(std::string type) {
	if (this->id != nullptr) {
		st->st_insert(this->id->get_name(), this->id->getLineno(), 0, "function");
		//create new table
		symboltable *new_st = new symboltable();
		printf("%p", new_st);
		puts("");
		new_st->forward = st;
		st->st_func_proc(this->id->get_name(), new_st);
		st = new_st;
	}

	if (this->paras != nullptr) {
		this->paras->build_symbol_table("");
	}

	if (this->ret_type != nullptr) {
		this->ret_type->build_symbol_table("");		
	}
	if (this->routine != nullptr) {
		this->routine->build_symbol_table("");
	}

	//point back to old table
	st = st->forward;
	return "";
}


std::string Parameters_Node::build_symbol_table(std::string type) {
	if (this->list != nullptr) {
		this->list->build_symbol_table("");
	}
	return "";
}

std::string Para_decl_list_Node::build_symbol_table(std::string type) {
	if (this->prev != nullptr) {
		this->prev->build_symbol_table("");
	}
	if (this->type != nullptr) {
		this->type->build_symbol_table("");
	}
	return "";
}


std::string Para_type_list_Node::build_symbol_table(std::string type) {
	std::string type_name = " ";
	if (this->isVal) {
		this->val_para_list->get_list()->build_symbol_table();
		Name_list_Node *p = this->val_para_list->get_list();

		while (p->prev != nullptr) {
			this->val_para_list->build_symbol_table(p->id->get_name());
			table_unit *t = st->st_lookup(p->id->get_name());
			t->isref = 1;
			p = p->prev;
		}
		this->val_para_list->build_symbol_table(p->id->get_name());
	} else {
		this->var_para_list->get_list()->build_symbol_table();
		Name_list_Node *p = this->var_para_list->get_list();

		while (p->prev != nullptr) {
			this->var_para_list->build_symbol_table(p->id->get_name());
			table_unit *t = st->st_lookup(p->id->get_name());
			t->isref = 0;
			p = p->prev;
		}
		this->var_para_list->build_symbol_table(p->id->get_name());
	}
	return "";
}

std::string Var_para_list_Node::build_symbol_table(std::string type) {
	if (this->list != nullptr) {
		this->list->build_symbol_table("");
	}
	return "";
}


std::string Val_para_list_Node::build_symbol_table(std::string type) {
	if (this->list != nullptr) {
		this->list->build_symbol_table("");
	}
	return "";
}


std::string Procedure_decl_Node::build_symbol_table(std::string type) {
	if (this->id != nullptr) {
		st->st_insert(this->id->get_name(), this->id->getLineno(), 0, "procedure");
		//create new table
		symboltable *new_st = new symboltable();
		new_st->forward = st;
		st->st_func_proc(this->id->get_name(), new_st);
		st = new_st;

	}

	if (this->paras != nullptr) {
		this->paras->build_symbol_table("");
	}

	if (this->routine != nullptr) {
		this->routine->build_symbol_table("");
	}
	//back
	st = st->forward;
	return "";
}


std::string Routine_body_Node::build_symbol_table(std::string type) {
	if (this->stmts != nullptr) {
		this->stmts->build_symbol_table();
	}
	return "";
}



std::string Stmt_Node::build_symbol_table(std::string type) {
	puts("---stmt_in---");
	if (this->get_hasLable()) {
		puts("how to deal with label");
		this->stmt->build_symbol_table(type);
	} else {
		this->stmt->build_symbol_table(type);
	}						
	return "";
}


//================stmt node=======================
std::string Assign_stmt_Node::build_symbol_table(std::string type) {
	puts("===assign===");
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	return "";
}


std::string Assign_id_stmt_Node::build_symbol_table(std::string type) {
	puts("===assign_id===");
	std::string type_name;
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	if (this->id != nullptr) {
		//check this->id type;
		//make index
	}
	return "";
}

std::string Assign_arr_stmt_Node::build_symbol_table(std::string type) {
	puts("===assign_arr===");
	std::string type_name;	//arr_name, index, expr,
	if (this->arr_name != nullptr) {
		//check this->id type;
	}
	if (this->index != nullptr) {
		this->index->build_symbol_table("");
	}
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	return "";
}


std::string Assign_record_stmt_Node::build_symbol_table(std::string type) {
	puts("===assign_rec===");
	if (this->record_name != nullptr) {
		//check
		//make
	}
	if (this->member != nullptr) {
		//check
		//make
	}
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	return "";
}


std::string Proc_stmt_Node::build_symbol_table(std::string type) {
	puts("===proc_stmt_node===");
	if (this->id != nullptr) {
		//check
		//make
	}
	if (this->args != nullptr) {
		//check
		//make
	}
	return "";
}


std::string Read_stmt_Node::build_symbol_table(std::string type) {
	puts("===read===");
	if (this->factor != nullptr) {
		this->factor->build_symbol_table("");
	}
	return "";
}

std::string Compound_stmt_Node::build_symbol_table(std::string type) {
	puts("===Compound===");
	if (this->stmts != nullptr) {
		puts("---Compound_stmt_Node---");
		this->stmts->build_symbol_table("");
	}
	return "";
}

std::string Else_clause_Node::build_symbol_table(std::string type) {
	puts("===else===");
	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table("");
	}
	return "";
}

std::string If_stmt_Node::build_symbol_table(std::string type) {
	puts("===if_stmt===");
	if (this->exp != nullptr) {
		this->exp->build_symbol_table("");
	}
	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table("");
	}
	if (this->else_clause != nullptr) {
		this->stmt->build_symbol_table("");
	}
	return "";
}

std::string Repeat_stmt_Node::build_symbol_table(std::string type) {
	puts("===repeat===");
	if (this->stmts != nullptr) {
		this->stmts->build_symbol_table("");
	}
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	return "";
}

std::string While_stmt_Node::build_symbol_table(std::string type) {
	puts("===while===");
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table("");
	}
	return "";
}

std::string For_stmt_Node::build_symbol_table(std::string type) {
	puts("===for===");
	if (this->id != nullptr) {
		//check
		//make
	}
	if (this->id_exp != nullptr) {
		this->id_exp->build_symbol_table("");
	}
	if (this->exp != nullptr) {
		this->exp->build_symbol_table("");
	}
	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table("");
	}
	return "";
}


std::string Case_expr_Node::build_symbol_table(std::string type) {
	puts("===case_expr===");
	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table();
	}
	return "";
}

std::string Case_const_val_expr_Node::build_symbol_table(std::string type) {
	puts("===case const===");
	//ignore const_val, for no id
	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table("");
	}
	return "";
}

std::string Case_id_expr_Node::build_symbol_table(std::string type) {
	puts("===case id===");
	if (this->id != nullptr) {
		//check
		//make
	}

	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table("");
	}
	return "";
}

std::string Case_expr_list_Node::build_symbol_table(std::string type) {
	puts("===case expr===");
	if (this->prev != nullptr) {
		this->prev->build_symbol_table("");
	}
	if (this->node != nullptr) {
		this->node->build_symbol_table("");
	}
	return "";
}


std::string Case_stmt_Node::build_symbol_table(std::string type) {
	puts("===case stmt===");
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	if (this->list != nullptr) {
		this->list->build_symbol_table("");
	}
	return "";
}

std::string Goto_stmt_Node::build_symbol_table(std::string type) {
	return "";
}

std::string Stmt_list_Node::build_symbol_table(std::string type) {
	puts("===stmt list===");
	if (this->prev != nullptr) {
		this->prev->build_symbol_table("");
	}

	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table("");
	}
	return "";
}

// //============ end of === stmt node===============


// //==================Exp Node======================
std::string Const_value_Node::build_symbol_table(std::string type) {
	return "";
}
std::string Expression_Node::build_symbol_table(std::string type) {
	//Cmp_type is compare_operator, ignore;
	puts("***expression_node***");
	if (this->expression != nullptr) {
		this->expression->build_symbol_table("");
	}
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	return "";
}

std::string Expr_Node::build_symbol_table(std::string type) {
	// ignore op_type
	puts("***expr_node***");
	printf("%p, %p, %p", this->expr_lhs, this->expr_rhs, this->factor);
	// printf("%d", this->getLineno());
	puts("");
	
	if (this->type != NONE) {
		if (this->expr_lhs != nullptr) {
			this->expr_lhs->build_symbol_table("");
		}
		if (this->expr_rhs != nullptr){	//union
			this->expr_rhs->build_symbol_table("");
		}
	} else {
		printf("type: %d", this->type);puts("");
		if (this->factor != nullptr) {
			this->factor->build_symbol_table("");
		}
	}
	return "";
}

std::string Factor_id_Node::build_symbol_table(std::string type) {
	puts("Factor_id_Node");
	if (this->id != nullptr) {
		//check id
	}
	return "";
}

std::string Factor_unary_Node::build_symbol_table(std::string type) {
	puts("Factor_unary_Node");
	//ignore type, for {NOT, MINUS}
	if (this->factor != nullptr) {
		this->factor->build_symbol_table("");
	}
	return "";
}

std::string Func_call_Node::build_symbol_table(std::string type) {
	puts("Func_call_Node");
	if (this->id != nullptr) {
		//st_check
	}
	if (this->args != nullptr) {
		//if id_check-->so do it;
		this->args->build_symbol_table("");
	}
	return "";
}

std::string Factor_arr_Node::build_symbol_table(std::string type) {
	puts("Factor_arr_Node");
	if (this->id != nullptr) {
		//st_check
	}
	if (this->index != nullptr) {
		this->index->build_symbol_table("");
	}
	return "";
}

std::string Factor_record_Node::build_symbol_table(std::string type) {
	puts("Factor_record_Node");
	if (this->record != nullptr) {
		//st_check	whether member in 
		//make_index
	}
	if (this->record != nullptr) {
		//st_check
		//make_index
	}
	return "";
}


// //===============end of exp node===================



//  ======================  args  ====================
std::string Args_list_Node::build_symbol_table(std::string type) {
	puts("Args_list_Node");
	if (this->prev != nullptr) {
		this->prev->build_symbol_table("");
	}
	if (this->expr != nullptr) {
		this->expr->build_symbol_table("");
	}
	return "";
}
//=======================end of args =================




//==============type declaim ====================
std::string Array_type_decl_Node::build_symbol_table(std::string type) {
	std::string type_name;
	std::string type_range;
	if (this->type != nullptr) {
		type_name = this->type->build_symbol_table(type);
	}
	if (this->range != nullptr) {
		type_range = this->range->build_symbol_table(type);
	}
	
	return type_name;
}

std::string Field_decl_Node::build_symbol_table(std::string type) {
	std::string type_name;
	if (this->name_list != nullptr) {
		this->name_list->build_symbol_table(type_name);
	}

	if (this->type != nullptr) {
		this->type->build_symbol_table(type);		//record type_name
	}
	return "";
}


std::string Field_decl_list_Node::build_symbol_table(std::string type) {
	if (this->prev != nullptr) {
		this->prev->build_symbol_table(type);
	}
	if (this->decl != nullptr) {
		this->decl->build_symbol_table(type);
	}
	return "";
}


std::string Record_type_decl_Node::build_symbol_table(std::string type) {
	if (this->list != nullptr) {
		this->list->build_symbol_table(type);
	}
	return "";
}

std::string System_type_decl_Node::build_symbol_table(std::string type) {
	Type sys_type = this->getType();
	table_unit * t_unit = st->st_lookup(type);
	if (t_unit != nullptr) {
		if (sys_type == INT) 	t_unit->type = ".byte";
		if (sys_type == REAL) 	t_unit->type = ".float";
		if (sys_type == ENUM) 	t_unit->type = ".enum";
		if (sys_type == CHAR) 	t_unit->type = ".byte";
		if (sys_type == STRING) t_unit->type = ".asciiz";
		if (sys_type == BOOL) 	t_unit->type = ".bool";
		puts("system_type_ok!!!");
		puts(type.c_str());
	}
	return "";
}

std::string Alias_type_decl_Node::build_symbol_table(std::string type) {
	std::string type_name;
	if (this->id != nullptr) {
		type_name = this->id->get_name();
		table_unit *t = st->st_lookup(type);
		t->type = type_name;
	}
	return "";
}

std::string Enum_type_decl_Node::build_symbol_table(std::string type) {
	if (this->name_list != nullptr) {
		this->name_list->build_symbol_table(type);
	}
	return "";
}



std::string Subrange_const_value_type_decl_Node::build_symbol_table(std::string type) {
	int low = this->lowerBound->get_value();
	if (this->isLowerNeg) low = -low;
	int up = this->upperBound->get_value();
	if (this->isUpperNeg) up = - up;
	table_unit *t = st->st_lookup(type);
	t->array_start = low;
	t->volumn = up - low + 1;
	t->isarray = 1;
	return "";
}

std::string Subrange_id_type_decl_Node::build_symbol_table(std::string type) {
	// I've work over 7 hours, but did not finish... T_T//
	return "";
}
//================end of declaim ================