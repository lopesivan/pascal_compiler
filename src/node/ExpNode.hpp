#ifndef _EXPNODE_H_
#define _EXPNODE_H_

#include "TreeNode.hpp"

class Id_Node : public TreeNode{
public:
	Id_Node(const std::string& name) : name(name){}
private:
	std::string name;
};

class Factor_Node : public TreeNode{
protected:
    Factor_Node(){}
};

class Const_value_Node : public Factor_Node{
protected:
    Const_value_Node(){}
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

class ConstBool_Node : public Const_value_Node{
public:
    ConstBool_Node(bool val): val(val){}
private:
    bool val;
};

class ConstStr_Node : public Const_value_Node{
public:
    ConstStr_Node(const std::string& val): val(val){}
private:
    std::string val;
};


class Factor_id_Node : public Factor_Node{
public:
    Factor_id_Node(Id_Node* id):id(id){}
private:
    Id_Node *id;
};

class Factor_unary_Node : public Factor_Node{
public:
    enum Type {NOT, MINUS};
public:
    Factor_unary_Node(Type type, Factor_Node *factor): type(type), factor(factor){}
private:
    Type type;
    Factor_Node *factor;
};

class Expression_Node;
class Factor_arr_Node : public Factor_Node{
public:
    Factor_arr_Node(Id_Node *id, Expression_Node *index)
        :id(id), index(index){}
private:
    Id_Node *id;
    Expression_Node *index;
};

class Factor_record_Node : public Factor_Node{
public:
    Factor_record_Node(Id_Node *record, Id_Node *member)
        :record(record), member(member){}
private:
    Id_Node *record;
    Id_Node *member;
};

class Expr_Node : public TreeNode{
    //Expr and Term
public:
    enum Op_type {AND, OR, ADD, SUB, MUL, DIV, MOD, NONE};
public:
    //exp op exp
    Expr_Node(Expr_Node *expr_lhs, Op_type type, Expr_Node *expr_rhs)
        :type(type), expr_lhs(expr_lhs), expr_rhs(expr_rhs){}

    //factor
    explicit Expr_Node(Factor_Node *factor)
        :type(NONE), factor(factor){}
private:
    Op_type type;
    union{
        struct{
            Expr_Node* expr_lhs;
            Expr_Node* expr_rhs;    
        };
        Factor_Node* factor;
    };
};

class Expression_Node : public Factor_Node{
public:
    enum Cmp_type{GE, GT, LE, LT, EQ, NEQ, NONE};
public:
    Expression_Node(Expression_Node* expression, Cmp_type type,
        Expr_Node* expr):type(type), expression(expression), expr(expr){}
    Expression_Node(Expr_Node* expr)
        :type(NONE), expression(nullptr), expr(expr){}
private:
    Cmp_type type;
    Expression_Node* expression;//may be null, first evaluate
    Expr_Node* expr;
};

class Expression_list_Node : public TreeNode{
public:
    Expression_list_Node(Expression_list_Node* prev, Expression_Node* node)
        :prev(prev), node(node){}
    explicit Expression_list_Node(Expression_Node* node):prev(nullptr), node(node){}
private:
    Expression_list_Node* prev;
    Expression_Node* node;
};

#endif