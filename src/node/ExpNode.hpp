#ifndef _EXPNODE_H_
#define _EXPNODE_H_

#include "TreeNode.hpp"

class Id_Node : public TreeNode{
public:
	Id_Node(const std::string& name) : name(name){}
private:
	std::string name;
};

class Const_value_Node : public Factor_Node{
protected:
    Const_value_Node();
};

class ConstInt_Node : public Const_value_Node{
public:
    ConstInt_Node(int val): val(val){}
private:
    int val;
};

class ConstDouble_Node : public Const_value_Node{
public:
    ConstDouble_Node(double val): val(val){}
private:
    double val;
};

class ConstChar_Node : public Const_value_Node{
public:
    ConstChar_Node(char val): val(val){}
private:
    char val;
};

class ConstStr_Node : public Const_value_Node{
public:
    ConstStr_Node(const std::string& val): val(val){}
private:
    std::string val;
};

class Factor_Node : public TreeNode{
protected:
    Factor_Node(){}
};

class Factor_id_Node : public Factor_Node{
public:
    Factor_id_Node(const Id_Node* id):id(id){}
private:
    Id_Node *id;
};

class Factor_unary_Node : public Factor_Node{
public:
    Factor_unary_Node(Type type, const Factor_Node *factor): type(type), factor(factor){}
    enum Type {NOT, MINUS};
private:
    Type type;
    Factor_Node *factor;
};

class Factor_arr_Node : public Factor_Node{
public:
    Factor_arr_Node(const Id_Node *id, const Expression_Node *index)
        :id(id), index(index){}
private:
    Id_Node *id;
    Expression_Node *index;
};

class Factor_record_Node : public Factor_Node{
public:
    Factor_record_Node(const Id_Node *record, const Expression_Node *member)
        :record(record), member(member){}
private:
    Id_Node *record;
    Id_Node *member;
};

class Expr_Node : public TreeNode{
    //Expr and Term
public:
    enum Op_type {AND, OR, ADD, SUB, MUL, DIV, MOD, NONE};
    Expr_Node(Op_type type, const Expr_Node *expr, const Factor_Node *factor)
        :type(type), expr(expr), factor(factor){}
    explicit Expr_Node(const Factor_Node *factor)
        :type(NONE), expr(nulllptr), factor(factor){}
private:
    Op_type type;
    Expr_Node* expr; //may be null
    Factor_Node* factor;
};

class Expression_Node : public Factor_Node{
public:
    enum Cmp_type{GE, GT, LE, LT, EQ, NEQ, NONE};
public:
    Expression_Node(const Expression_Node* expression, const Cmp_type type,
        const Expr_Node* expr):type(type), expression(expression), expr(expr){}
    Expression_Node(const Expr_Node* expr)
        :type(NONE), expression(nulllptr), expr(expr){}
private:
    Cmp_type type;
    Expression_Node* expression;//may be null, first evaluate
    Expr_Node* expr;
};

class Expression_list_Node : public TreeNode{
public:
    Expression_list_Node(const Expression_list_Node* prev, const Expression_Node* node)
        :prev(prev), node(node){}
    explicit Expression_list_Node(const Expression_Node* node):prev(nulllptr), node(node){}
private:
    Expression_list_Node* prev;
    Expression_Node* node;
};

#endif