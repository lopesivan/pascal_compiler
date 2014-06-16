#ifndef _MODULENODE_HPP_
#define _MODULENODE_HPP_

#include "TreeNode.hpp"

class Val_para_list_Node : public TreeNode{
public:
	explicit Val_para_list_Node(Name_list_Node *list):list(list){}
private:
	Name_list_Node * list;
};

class Var_para_list_Node : public TreeNode{
public:
	explicit Var_para_list_Node(Name_list_Node *list):list(list){}
private:
	Name_list_Node * list;
};

class Simple_type_decl_Node;
class Para_type_list_Node : public TreeNode{
public:
	Para_type_list_Node(Var_para_list_Node* var_para_list, 
		Simple_type_decl_Node *type)
		:isVal(false), var_para_list(var_para_list), type(type){}
	Para_type_list_Node(Val_para_list_Node* val_para_list, 
		Simple_type_decl_Node *type)
		:isVal(true), val_para_list(val_para_list), type(type){}
private:
    bool isVal;
    union{
    	Var_para_list_Node *var_para_list;
    	Val_para_list_Node *val_para_list;
    };
	Simple_type_decl_Node *type;
};

class Para_decl_list_Node : public TreeNode{
public:
	Para_decl_list_Node(Para_decl_list_Node *prev, Para_type_list_Node *type)
		:prev(prev), type(type){}
private:
	Para_decl_list_Node * prev;
	Para_type_list_Node * type;
};

class Parameters_Node : public TreeNode{
public:
	Parameters_Node(Para_decl_list_Node * list):list(list){}
private:
	Para_decl_list_Node * list;
};

class Routine_Node;
class Procedure_decl_Node : public TreeNode{
public:
	Procedure_decl_Node(Id_Node* id, Parameters_Node* paras, 
            Routine_Node* routine):id(id), paras(paras), routine(routine){}
private:
	Id_Node* id;
	Parameters_Node * paras;
	Routine_Node * routine;
};

class Function_decl_Node : public TreeNode{
public:
	Function_decl_Node(Id_Node* id, 
		Parameters_Node* paras, Simple_type_decl_Node* ret_type, Routine_Node* routine)
		:id(id), paras(paras), ret_type(ret_type), routine(routine){}
private:
	Id_Node* id;
	Parameters_Node * paras;
	Simple_type_decl_Node *ret_type;
	Routine_Node* routine;
};

/********************* part *********************/
class Const_expr_list_Node;
class Const_part_Node : public TreeNode{
public:
    explicit Const_part_Node(Const_expr_list_Node *const_expr_list)
        :const_expr_list(const_expr_list){}
private:
    Const_expr_list_Node *const_expr_list;
};

class Var_part_Node : public TreeNode{
public:
    explicit Var_part_Node(Var_decl_list_Node *list)
        :list(list){}
private:
    Var_decl_list_Node * list;
};

class Routine_part_Node : public TreeNode{
public:
    //can be null or link with function or procedure
    Routine_part_Node(Routine_part_Node *prev, Function_decl_Node* func)
        :prev(prev), func(func), isFunction(true){}
    Routine_part_Node(Routine_part_Node *prev, Procedure_decl_Node* proc)
        :prev(prev), proc(proc), isFunction(false){}
    Routine_part_Node(Function_decl_Node* func)
    	:prev(nullptr), func(func), isFunction(true){}
    Routine_part_Node(Procedure_decl_Node* proc)
    	:prev(nullptr), proc(proc), isFunction(false){}
private:
    Routine_part_Node * prev;
    union{
    	Function_decl_Node * func;
    	Procedure_decl_Node * proc;
    };
    bool isFunction;
};

class Program_head_Node : public TreeNode{
public:
	Program_head_Node(Id_Node* id)
		:id(id){}
private:
	Id_Node* id;
};

class Type_part_Node;
class Routine_head_Node : public TreeNode{
public:
	Routine_head_Node(Const_part_Node* const_part, Type_part_Node* type_part, 
		Var_part_Node* var_part, Routine_part_Node* routine_part)
		:const_part(const_part), type_part(type_part), 
		var_part(var_part), routine_part(routine_part){}
private:
	Const_part_Node *const_part;
	Type_part_Node *type_part;
	Var_part_Node *var_part;
	Routine_part_Node* routine_part;
};

class Compound_stmt_Node;
class Routine_body_Node : public TreeNode{
public:
	explicit Routine_body_Node(Compound_stmt_Node * stmts)
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
