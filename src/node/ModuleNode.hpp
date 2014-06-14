#ifndef _MODULENODE_HPP_
#define _MODULENODE_HPP_

#include "TreeNode.hpp"

class Val_para_list : public TreeNode{
public:
	Val_para_list(const Name_list_Node *):list(list){}
private:
	Name_list_Node * list;
};

class Var_para_list : public TreeNode{
public:
	Var_para_list(const Name_list_Node *):list(list){}
private:
	Name_list_Node * list;
};

class Para_type_list_Node : public TreeNode{
public:
	Para_type_list_Node(const Var_para_list_Node* var_para_list, 
		const Simple_type_decl_Node *type)
		:var(var), var_para_list(var_para_list), val_para_list(nullptr){}
	Para_type_list_Node(const Val_para_list_Node* val_para_list, 
		const Simple_type_decl_Node *type)
		:var(var), val_para_list(val_para_list), var_para_list(nullptr){}
private:
	Var_para_list_Node *var_para_list;
	Val_para_list_Node *var_para_list;
	Simple_type_decl_Node *type;
};

class Para_decl_list_Node : public TreeNode{
public:
	Para_decl_list_Node(const Para_decl_list_Node *prev, const Para_type_list_Node *type)
		:prev(prev), type(type){}
private:
	Para_decl_list_Node * prev;
	Para_type_list_Node * type;
};

class Parameteres_Node : public TreeNode{
public:
	Parameteres_Node(Para_decl_list_Node * list):list(list){}
private:
	Para_decl_list_Node * list;
};

class Procedure_decl_Node : public TreeNode{
public:
	Procedure_decl_Node(const Id_Node* id, 
		const Parameters_Node* paras, const Routine_Node* routine)
		:id(id), paras(paras), routine(routine){}
private:
	Parameters_Node * paras;
	Routine_Node * routine;
	Id_Node* id;
};

class Function_decl_Node : public TreeNode{
public:
	Function_decl_Node(const Id_Node* id, 
		const Parameters_Node* paras, const Simple_type_decl_Node* ret_type)
		:id(id), paras(paras), ret_type(ret_type){}
private:
	Parameters_Node * paras;
	Simple_type_decl_Node *ret_type;
	Id_Node* id;
};

/********************* part *********************/
class Const_part_Node : public TreeNode{
public:
    explicit Const_part_Node(const Const_Expr_list_Node *const_expr_list)
        :const_expr_list(const_expr_list){}
private:
    Const_Expr_list_Node *const_expr_list;
};

class Var_part_Node : public TreeNode{
public:
    explicit Var_part_Node(const Var_decl_list_Node *list)
        :list(list){}
private:
    Var_decl_list_Node * list;
};

class Routine_part_Node() : public TreeNode{
    //can be null or link with function or procedure
    Routine_part_Node(const Routine_Node *prev, const Function_decl_Node* func)
        :prev(prev), func(func), proc(nullptr){}
    Routine_part_Node(const Routine_Node *prev, const Procedure_decl_Node* proc)
        :prev(prev), proc(proc), func(nullptr){}
    Routine_part_Node(const Function_decl_Node* func)
    	:prev(nullptr), proc(nullptr), func(func){}
    Routine_part_Node(const Procedure_decl_Node* proc): proc(proc){}
private:
    Routine_part_Node * prev;
    Function_decl_Node * func;
    Procedure_decl_Node * proc;
};

class Program_head_Node : public TreeNode{
public:
	Program_head_Node(const Id_Node* id)
		:id(id){}
private:
	Id_Node* id;
};

class Routine_head_Node : public TreeNode{
public:
	Routine_head_Node(Const_part* const_part, Type_part* type_part, 
		Var_part* var_part, Routine_part* routine_part)
		:const_part(const_part), type_part(type_part), 
		var_part(var_part), routine_part(routine_part){}
private:
	Const_part_Node *const_part;
	Type_part_Node *type_part;
	Var_part_Node *var_part;
	Routine_part_Node* routine_part;
};

class Routine_body_Node : public TreeNode{
public:
	explicit Routine_body_Node(const Compound_stmt_Node * stmts)
		:stmts(stmts){}
private:
	Compound_stmt_Node * stmts;
};

class Routine_Node : public TreeNode{
public:
	Routine_Node(Routine_head_Node *head, Routine_body_Node *body)
		:head(head), body(body){}
private:
	Routine_head_Node *head;
	Routine_body_Node *body;
};

class Program_Node : public TreeNode{
public:
	Program_Node(Program_head_Node *head, Routine_Node* routine)
		:head(head), routine(routine){
	}
private:
	Program_head_Node *head;
	Routine_Node *routine;
};

#endif
