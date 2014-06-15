/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PASCAL_TAB_H_INCLUDED
# define YY_YY_PASCAL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER = 259,
    REAL = 260,
    CHAR = 261,
    STRING = 262,
    PROGRAM = 263,
    DOT = 264,
    SEMI = 265,
    COMMA = 266,
    EQUAL = 267,
    CONST = 268,
    ARRAY = 269,
    TYPE = 270,
    LB = 271,
    RB = 272,
    OF = 273,
    RECORD = 274,
    END = 275,
    COLON = 276,
    LP = 277,
    RP = 278,
    DOTDOT = 279,
    MINUS = 280,
    VAR = 281,
    FUNCTION = 282,
    NOT = 283,
    GE = 284,
    GT = 285,
    LE = 286,
    LT = 287,
    PLUS = 288,
    MUL = 289,
    DIV = 290,
    AND = 291,
    MOD = 292,
    UNEQUAL = 293,
    OR = 294,
    ASSIGN = 295,
    P_BEGIN = 296,
    IF = 297,
    ELSE = 298,
    THEN = 299,
    REPEAT = 300,
    UNTIL = 301,
    WHILE = 302,
    DO = 303,
    FOR = 304,
    GOTO = 305,
    CASE = 306,
    TO = 307,
    DOWNTO = 308,
    READ = 309,
    TYPEINTEGER = 310,
    TYPEREAL = 311,
    TYPECHAR = 312,
    TYPESTRING = 313,
    TYPEBOOL = 314,
    P_FALSE = 315,
    P_TRUE = 316,
    PROCEDURE = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 22 "bison/pascal.y" /* yacc.c:1909  */

    TreeNode* tree_node;
    Id_Node*  id_node;
    Program_Node* program_node; 
    Program_head_Node* program_head_node;
    Routine_Node* routine_node;
    Routine_head_Node* routine_head_node;

    Const_part_Node* const_part_node;
    Const_expr_list_Node* const_expr_list_node;
    Const_value_Node* const_value_node;
    int     constInt;
    double  constDouble;
    char    constChar;

    Type_part_Node*         type_part_node;
    Type_decl_list_Node*    type_decl_list_node;
    Type_definition_Node*   type_definition_node;
    Type_decl_Node*         type_decl_node;
    Array_type_decl_Node*   array_type_decl_node;
    Record_type_decl_Node*  record_type_decl_node;
    Field_decl_list_Node*   field_decl_list_node;
    Field_decl_Node*        field_decl_node;
    Simple_type_decl_Node*  simple_type_decl_node;
    Name_list_Node*         name_list_node;
    Var_part_Node*          var_part_node;
    Var_decl_list_Node*     var_decl_list_node;
    Var_decl_Node*          var_decl_node;
    Routine_part_Node*      routine_part_node;
    Function_decl_Node*     function_decl_node;
    Procedure_decl_Node*    procedure_decl_node;
    Parameters_Node*        parameters_node;
    Para_decl_list_Node*    para_decl_list_node;
    Para_type_list_Node*    para_type_list_node;
    Var_para_list_Node*     var_para_list_node;
    Val_para_list_Node*     val_para_list_node;
    Routine_body_Node*      routine_body_node;
    Compound_stmt_Node*     compound_stmt_node;
    Stmt_list_Node*         stmt_list_node;
    Stmt_Node*              stmt_node;
    Non_label_stmt_Node*    non_label_stmt_node;
    Assign_stmt_Node*       assign_stmt_node;
    Proc_stmt_Node*         proc_stmt_node;
    If_stmt_Node*           if_stmt_node;
    Else_clause_Node*       else_clause_node;
    Repeat_stmt_Node*       repeat_stmt_node;
    While_stmt_Node*        while_stmt_node;
    For_stmt_Node*          for_stmt_node;
    Direction_Node*         direction_node;
    Case_stmt_Node*         case_stmt_node;
    Case_expr_list_Node*    case_expr_list_node;
    Case_expr_Node*         case_expr_node;
    Goto_stmt_Node*         goto_stmt_node;
    Expression_list_Node*   expression_list_node;
    Expression_Node*        expression_node;
    Expr_Node*              expr_node;
    Factor_Node*            factor_node;
    Args_list_Node*         args_list_node;


#line 178 "pascal.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PASCAL_TAB_H_INCLUDED  */
