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
		this->head->build_symbol_table();
	}
	if (this->routine != nullptr) {
		this->routine->build_symbol_table();	
	}
	return "";
}

std::string Program_head_Node::build_symbol_table(std::string type) {
	if (this->id != nullptr) {
		st->st_insert(this->id->get_name(), this->id->getLineno(), 0, "program_name");
	}
	return "";
}






//1. program routine
std::string Routine_Node::build_symbol_table(std::string type) {
	if (this->head != nullptr) {
		this->head->build_symbol_table();
	}
	if (this->body != nullptr) {
		this->body->build_symbol_table();	//todo
	}
	return "";
}



// 2. program routine_head
std::string Routine_head_Node::build_symbol_table(std::string type) {
	if (this->const_part != nullptr) {
		this->const_part->build_symbol_table();
	}
	if (this->type_part != nullptr) {
		this->type_part->build_symbol_table();	
	}
	if (this->var_part != nullptr) {
		this->var_part->build_symbol_table();
	}
	if (this->routine_part != nullptr) {
		this->routine_part->build_symbol_table();	//todo
	}
	return "";
}



// 3. routine_head_node
std::string Const_part_Node::build_symbol_table(std::string type) {
	if (this->const_expr_list != nullptr) {
		this->const_expr_list->build_symbol_table();
	}
	return "";
}


std::string Const_expr_list_Node::build_symbol_table(std::string type) {
	st->st_insert(this->id->get_name(), this->id->getLineno(), 0, "const");

	if (this->prev != nullptr) {
		this->prev->build_symbol_table();
	}
	return "";
}

std::string Type_part_Node::build_symbol_table(std::string type) {	
	if (this->list != nullptr) {
		this->list->build_symbol_table();
	}
	return "";
}


std::string Type_decl_list_Node::build_symbol_table(std::string type) {	//Treenode
	if (this->prev != nullptr) {
		this->prev->build_symbol_table();
	}

	if (this->type_def != nullptr) {
		this->type_def->build_symbol_table();	//todo
	}
	return "";
}

std::string Type_definition_Node::build_symbol_table(std::string type) { 	//Treenode
	std::string type_name = " ";
	// auto type_def_node = dynamic_cast<Program_Node*>(do_parse());
	// if (this->type_decl != nullptr) {
	// 	type_name = this->type_decl->build_symbol_table();	//type_defination_node
	// }
	//?????????????????????????? TODO
	if (this->id != nullptr) {
		st->st_insert(this->id->get_name(), this->id->getLineno(), 0, type_name); 
	}
	return type_name;
}


std::string Var_part_Node::build_symbol_table(std::string type) {
	if (this->list != nullptr) {
		this->list->build_symbol_table();
	}
	return "";
}


std::string Var_decl_list_Node::build_symbol_table(std::string type) {
	if (this->var_decl != nullptr) {
		this->var_decl->build_symbol_table();
	}

	if (this->prev != nullptr) {
		this->prev->build_symbol_table();
	}
	return "";
}

//var_decl_node -> name_list_node, type_decl_node
std::string Var_decl_Node::build_symbol_table(std::string type) {
	std::string var_type = " ";
	// if (this->type != nullptr) {
	// 	var_type = this->type->build_symbol_table();
	// }						//??????????TODO

	if (this->name_list != nullptr) {
		this->name_list->build_symbol_table(var_type);
	}
	return "";
}




std::string Name_list_Node::build_symbol_table(std::string type) {	//Treenode
	if (this->prev != nullptr) {
		this->prev->build_symbol_table(type);
	}

	if (this->id != nullptr) {
		st->st_insert(this->id->get_name(), this->id->getLineno(), 0, type);
	}
	return "";
}





std::string Routine_part_Node::build_symbol_table(std::string type) {
	if (this->prev != nullptr) {
		this->prev->build_symbol_table();
	}
	if (this->get_isfunction()) {
		this->func->build_symbol_table();
	} else {
		this->proc->build_symbol_table();
	}
	return "";
}


std::string Function_decl_Node::build_symbol_table(std::string type) {
	if (this->id != nullptr) {
		st->st_insert(this->id->get_name(), this->id->getLineno(), 0, "function");
		//create new table
		symboltable *new_st = new symboltable();
		new_st->forward = st;
		st->st_func_proc(this->id->get_name(), new_st);
		st = new_st;
	}

	if (this->paras != nullptr) {
		this->paras->build_symbol_table();
	}

	// if (this->ret_type != nullptr) {
	// 	this->ret_type->build_symbol_table();		//???TODO
	// }
	if (this->routine != nullptr) {
		this->routine->build_symbol_table();
	}

	//point back to old table
	st = st->forward;
	return "";
}


std::string Parameters_Node::build_symbol_table(std::string type) {
	if (this->list != nullptr) {
		this->list->build_symbol_table();
	}
	return "";
}

std::string Para_decl_list_Node::build_symbol_table(std::string type) {
	if (this->prev != nullptr) {
		this->prev->build_symbol_table();
	}
	if (this->type != nullptr) {
		this->type->build_symbol_table();
	}
	return "";
}


std::string Para_type_list_Node::build_symbol_table(std::string type) {
	std::string type_name = " ";
	if (this->isVal) {
		// type_name = this->type->build_symbol_table();	//??????TODO
		// this->val_para_list->build_symbol_table(type_name);
	} else {
		// type_name = this->type->build_symbol_table();		//??????TODO
		// this->val_para_list->build_symbol_table(type_name);		
	}
	return "";
	//??????????????????????/TODO
}

std::string Var_para_list_Node::build_symbol_table(std::string type) {
	if (this->list !=nullptr) {
		this->list->build_symbol_table();
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
		this->paras->build_symbol_table();
	}

	if (this->routine != nullptr) {
		this->routine->build_symbol_table();
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

std::string Compound_stmt_Node::build_symbol_table(std::string type) {
	if (this->stmts != nullptr) {
		this->stmts->build_symbol_table();
	}
	return "";
}

std::string Stmt_list_Node::build_symbol_table(std::string type) {
	if (this->prev != nullptr) {
		this->prev->build_symbol_table();
	}

	if (this->stmt != nullptr) {
		this->stmt->build_symbol_table();
	}
	return "";
}


std::string Stmt_Node::build_symbol_table(std::string type) {
	if (this->get_hasLable()) {
		// this->stmt->build_symbol_table();
	} else {
		// this->stmt->build_symbol_table();
	}						//?????????????????????????TODO
}


