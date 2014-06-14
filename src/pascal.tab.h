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
    ID = 258,
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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PASCAL_TAB_H_INCLUDED  */
