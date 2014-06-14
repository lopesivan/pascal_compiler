#ifndef _TREENODE_
#define _TREENODE_

/**************************************************/
/***********   Syntax tree for parsing ************/
/**************************************************/
# include <string>
# include <vector>
# include "../globals.h"

class TreeNode{
public:
    int getLineno() const{
        return lineno
    };

    void setLineno(int lineno){
        this->lineno = lineno;
    }
private:
    int lineno;
};

/********************* node **********************/

class Type_definition_Node : public TreeNode
{
public:
    Type_definition_Node(const Id_Node* id, Type_decl_Node* type_decl)
        :id(id), type_decl(type_decl){}
private:
    Id_Node* id;
    Type_decl_Node* type_decl;
    /* data */
};

class Name_list_Node : public TreeNode{
    //TODO
};

class Var_decl_Node : public TreeNode
{
public:
    Var_decl_Node(const Name_list_Node* name_list, const Type_decl_Node *type)
        :name_list(name_list), type(type){}
private:
    Name_list_Node * name_list;
    Type_decl_Node * type;
};

/********************* list *********************/
class Const_expr_list_Node : public TreeNode{
public:
    Const_expr_list_Node(const Const_expr_list_Node *prev, 
        const Id_Node* id, const Const_value_Node *const_value)
        :prev(prev), id(id), const_value(const_value){}
    explicit Const_expr_list_Node(const Id_Node* id, const Const_value_Node *const_value)
        :prev(nullptr), id(id), const_value(const_value){}
private:
    Const_expr_list_Node *prev;
    Id_Node* id;
    Const_value_Node *const_value;
};

class Type_decl_list_Node : public TreeNode{
public:
    Type_decl_list_Node(const Type_decl_list_Node* prev, const Type_definition_Node* type_def)
        :prev(prev), type_def(type_def){}
    explicit Type_decl_list_Node(Type_decl_list_Node* type_def)
        :prev(nullptr), type_def(type_def){}
private:
    Type_decl_list_Node* prev;
    Type_definition_Node* type_def;
};

class Name_list_Node : public TreeNode
{
public:
    Name_list_Node(const Name_list_Node *prev, const Id_Node* id)
        :prev(prev), id(id){}
    explicit Name_list_Node(const Id_Node* id)
        :prev(nullptr), id(id){}
private:
    Id_Node* id;
    Name_list_Node *prev;
};

class Var_decl_list_Node : public TreeNode
{
public:
    Var_decl_list_Node(const Var_decl_list_Node* prev, const Var_decl_Node* decl)
        :prev(prev), var_decl(decl){}
    explicit Var_decl_list_Node(const Var_decl_list_Node* decl)
        :prev(nullptr), var_decl(decl){}
private:
    Var_decl_list_Node * prev;
    Var_decl_Node * var_decl;
};



#endif
