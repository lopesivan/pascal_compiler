#ifndef _STMTNODE_HPP_
#define _STMTNODE_HPP_

#include "TreeNode.hpp"
class Stmt_Node : public TreeNode{
public:
    Stmt_Node(unsigned label, const Non_label_stmt_Node * stmt)
        :label(label), hasLabel(true), stmt(stmt){}
    Stmt_Node(const Non_label_stmt_Node * stmt)
        :label(0), hasLabel(false), stmt(stmt){}
private:
    unsigned label;
    bool hasLabel;
    Non_label_stmt_Node * stmt;
};

class Non_label_stmt_Node : public TreeNode{
protected:
    Non_label_stmt_Node(){}
};

class Assign_stmt_Node : public Non_label_stmt_Node{
public:
    Assign_stmt_Node(const Expression_Node *expr):expr(expr){}
protected:
    Expression_Node* expr;
};

class Assign_id_stmt_Node : public Assign_stmt_Node{
public:
    Assign_id_stmt_Node(const Id_Node* id, 
        Expression_Node *expr)
        :Assign_stmt_Node(expr), id(id){}
private:
    Id_Node* id;
    
};

class Assign_arr_stmt_Node : public Assign_stmt_Node{
public:
    Assign_arr_stmt_Node(const Id_Node* arr_name, 
        const Expression_Node *expr index, const Expression_Node *expr)
        :Assign_stmt_Node(expr), arr_name(arr_name), index(index){}
private:
    Id_Node* arr_name;
    Expression_Node* index;
};

class Assign_record_stmt_Node : public Assign_stmt_Node{
public:
    Assign_record_stmt_Node(const Id_Node* record_name, 
        const Expression_Node *expr member, const Expression_Node *expr)
        :Assign_stmt_Node(expr), record_name(record_name), member(member){}
private:
    Id_Node* record_name;
    Expression_Node* member;
};

class Args_list_Node : public 
{
public:
    Args_list_Node(const Args_list_Node* prev, const Expression_Node* expr)
        :prev(prev), expr(expr){}
    explicit Args_list_Node(const Expression_Node* expr):prev(prev), expr(expr){}
private:
    Args_list_Node *prev;
    Expression_Node *expr;
};


class Proc_stmt_Node : public Non_label_stmt_Node{
public:
    Proc_stmt_Node(const Id_Node* id, const Args_list_Node* args)
        :id(id), args(args){}
    Proc_stmt_Node(const Id_Node* id)
        :id(id), args(nullptr){}
private:
    Id_Node* id;
    Args_list_Node *args;
};

class Read_stmt_Node : public Proc_stmt_Node{
public:
    Read_stmt_Node(const Factor_Node* factor)
        :Proc_stmt_Node(new Id_Node("read"), nullptr), factor(factor){}
private:
    Factor_Node* factor;
};

class Compound_stmt_Node : public Non_label_stmt_Node{
public:
    Compound_stmt_Node(arguments);
private:

};

class Else_clause_Node : public Non_label_stmt_Node{
public:
    Else_clause_Node(Stmt_Node* stmt):stmt(stmt){}
private:
    Stmt_Node* stmt;
};

class If_stmt_Node : public Non_label_stmt_Node{
public:
    If_stmt_Node(const Expression_Node *exp, const Stmt_Node* stmt, 
        const Else_clause_Node* else_clause):exp(exp), stmt(stmt), else_clause(else_clause){}
private:
    Expression_Node* exp;
    Stmt_Node* stmt;
    Else_clause_Node* else_clause;
};

class Repeat_stmt_Node : public Non_label_stmt_Node{
public:
    Repeat_stmt_Node(const Stmt_list_Node* stmts, const Expression_Node* expr)
        :stmts(stmts), expr(expr){}
private:
    Stmt_list_Node* stmts;
    Expression_Node* expr;
};

class While_stmt_Node : public Non_label_stmt_Node{
public:
    While_stmt_Node(const Expression_Node* expr, const Stmt_Node* stmt)
        :expr(expr), stmt(stmt){}
private:
    Stmt_Node* stmt;
    Expression_Node* expr;
};

class Direction_Node : public TreeNode{
public:
    Direction_Node(bool up):up(up){}
private:
    bool up;
};

class For_stmt_Node : public Non_label_stmt_Node{
public:
    For_stmt_Node(const Id_Node* id, const Expression_Node* id_exp,
        const Direction_Node* direct, const Expression_Node* exp, const Stmt_Node *stmt)
        :id(id), id_exp(id_exp), direct(direct), exp(exp), stmt(stmt){}
private:
    Id_Node *id;
    Expression_Node *id_exp;
    Direction_Node *direct;
    Expression_Node *exp;
    Stmt_Node *stmt;
};

class Case_expr_Node : public TreeNode{
protected:
    Case_expr_Node(const Stmt_Node* stmt):stmt(stmt){}
protected:
    Stmt_Node * stmt;
};

class Case_const_val_expr_Node : public Case_expr_Node{
public:
    Case_const_val_expr_Node(const Const_value_Node* const_val, const Stmt_Node* stmt)
        :const_val(const_val), Case_expr_Node(stmt){}
private:
    Const_value_Node * const_val;
};

class Case_id_expr_Node : public Case_expr_Node{
public:
    Case_id_expr_Node(const Id_Node* id, const Stmt_Node* stmt)
        :id(id), Case_expr_Node(stmt){}
private:
    Id_Node * id;
};


class Case_expr_list_Node : public TreeNode{
public:
    Case_expr_list_Node(const Case_expr_list_Node *prev, const Case_expr_Node *node)
        :prev(prev), node(node){}
    explicit Case_expr_list_Node(const Case_expr_Node *node):prev(nullptr), node(node){}
private:
    Case_expr_list_Node * prev;
    Case_expr_Node * node;
};

class Case_stmt_Node : public Non_label_stmt_Node{
public:
    Case_stmt_Node(const Expression_Node *expr, const Case_expr_list_Node *list)
        :expr(expr), list(list){}
private:
    Expression_Node *expr;
    Case_expr_list_Node *list;
};

class Goto_stmt_Node : public Non_label_stmt_Node{
public:
    Goto_stmt_Node(int label): label(label){}
private:
    int label;
};

class Stmt_list_Node : public TreeNode{
public:
    Stmt_list_Node(const Stmt_list_Node * prev, const Stmt_Node * stmt)
        :prev(prev), stmt(stmt){}
    Stmt_list_Node(const Stmt_Node * stmt):prev(nullptr), stmt(stmt){}
private:
    Stmt_list_Node * prev;
    Stmt_Node * stmt;
};

class Compound_stmt_Node : public TreeNode{
public:
    Compound_stmt_Node(arguments);

private:
    Stmt_list_Node * list;
};

#endif