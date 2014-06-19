/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "bison/pascal.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include <cstdio>
#include <string>
#include <cstring>
#include "node/ModuleNode.hpp"
#include "node/DeclNode.hpp"
#include "node/ExpNode.hpp"
#include "node/StmtNode.hpp"

/* stores syntax tree for later return */
static TreeNode * savedTree = nullptr;

extern int lineno;
extern int yylineno;
extern int yylex(void);
extern void yyerror(const char *message);
extern char* yytext;

/* Line 371 of yacc.c  */
#line 89 "pascal.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "pascal.tab.h".  */
#ifndef YY_YY_PASCAL_TAB_H_INCLUDED
# define YY_YY_PASCAL_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     INTEGER = 259,
     REAL = 260,
     CHAR = 261,
     P_TRUE = 262,
     P_FALSE = 263,
     STRING = 264,
     PROGRAM = 265,
     DOT = 266,
     SEMI = 267,
     COMMA = 268,
     EQUAL = 269,
     CONST = 270,
     ARRAY = 271,
     TYPE = 272,
     LB = 273,
     RB = 274,
     OF = 275,
     RECORD = 276,
     END = 277,
     COLON = 278,
     LP = 279,
     RP = 280,
     DOTDOT = 281,
     MINUS = 282,
     VAR = 283,
     FUNCTION = 284,
     NOT = 285,
     GE = 286,
     GT = 287,
     LE = 288,
     LT = 289,
     PLUS = 290,
     MUL = 291,
     DIV = 292,
     AND = 293,
     MOD = 294,
     UNEQUAL = 295,
     OR = 296,
     ASSIGN = 297,
     P_BEGIN = 298,
     IF = 299,
     ELSE = 300,
     THEN = 301,
     REPEAT = 302,
     UNTIL = 303,
     WHILE = 304,
     DO = 305,
     FOR = 306,
     GOTO = 307,
     CASE = 308,
     TO = 309,
     DOWNTO = 310,
     READ = 311,
     TYPEINTEGER = 312,
     TYPEREAL = 313,
     TYPECHAR = 314,
     TYPESTRING = 315,
     TYPEBOOL = 316,
     PROCEDURE = 317
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 24 "bison/pascal.y"

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
    bool    constBool;
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



/* Line 387 of yacc.c  */
#line 256 "pascal.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PASCAL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 284 "pascal.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   535

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     9,    13,    16,    17,    22,    25,
      26,    32,    37,    39,    41,    43,    45,    47,    49,    52,
      53,    56,    58,    63,    65,    67,    69,    76,    80,    83,
      85,    90,    92,    94,    96,    98,   100,   102,   106,   110,
     115,   121,   125,   129,   131,   134,   135,   138,   140,   145,
     148,   151,   153,   155,   156,   165,   172,   176,   177,   180,
     184,   186,   190,   194,   197,   199,   201,   205,   209,   210,
     214,   216,   218,   220,   222,   224,   226,   228,   230,   232,
     234,   236,   240,   247,   253,   257,   262,   267,   273,   276,
     277,   282,   287,   296,   298,   300,   306,   309,   311,   316,
     321,   324,   328,   332,   336,   340,   344,   348,   350,   352,
     356,   360,   364,   366,   368,   372,   376,   380,   384,   386,
     388,   390,   392,   396,   399,   402,   407,   411,   416,   420,
     422,   426
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      65,     0,    -1,     3,    -1,    66,    67,    11,    -1,    10,
      64,    12,    -1,    68,    93,    -1,    -1,    69,    72,    82,
      85,    -1,    15,    70,    -1,    -1,    70,    64,    14,    71,
      12,    -1,    64,    14,    71,    12,    -1,     4,    -1,     5,
      -1,     6,    -1,     9,    -1,     7,    -1,     8,    -1,    17,
      73,    -1,    -1,    73,    74,    -1,    74,    -1,    64,    14,
      75,    12,    -1,    80,    -1,    76,    -1,    77,    -1,    16,
      18,    80,    19,    20,    75,    -1,    21,    78,    22,    -1,
      78,    79,    -1,    79,    -1,    81,    23,    75,    12,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      64,    -1,    24,    81,    25,    -1,    71,    26,    71,    -1,
      27,    71,    26,    71,    -1,    27,    71,    26,    27,    71,
      -1,    64,    26,    64,    -1,    81,    13,    64,    -1,    64,
      -1,    28,    83,    -1,    -1,    83,    84,    -1,    84,    -1,
      81,    23,    75,    12,    -1,    85,    86,    -1,    85,    87,
      -1,    86,    -1,    87,    -1,    -1,    29,    64,    88,    23,
      80,    12,    67,    12,    -1,    62,    64,    88,    12,    67,
      12,    -1,    24,    89,    25,    -1,    -1,    24,    25,    -1,
      89,    12,    90,    -1,    90,    -1,    91,    23,    80,    -1,
      92,    23,    80,    -1,    28,    81,    -1,    81,    -1,    94,
      -1,    43,    95,    22,    -1,    95,    96,    12,    -1,    -1,
       4,    23,    97,    -1,    97,    -1,    98,    -1,    99,    -1,
      94,    -1,   100,    -1,   102,    -1,   103,    -1,   104,    -1,
     106,    -1,   109,    -1,     1,    -1,    64,    42,   110,    -1,
      64,    18,   110,    19,    42,   110,    -1,    64,    11,    64,
      42,   110,    -1,    64,    24,    25,    -1,    64,    24,   114,
      25,    -1,    56,    24,   113,    25,    -1,    44,   110,    46,
      96,   101,    -1,    45,    96,    -1,    -1,    47,    95,    48,
     110,    -1,    49,   110,    50,    96,    -1,    51,    64,    42,
     110,   105,   110,    50,    96,    -1,    54,    -1,    55,    -1,
      53,   110,    20,   107,    22,    -1,   107,   108,    -1,   108,
      -1,    71,    23,    96,    12,    -1,    64,    23,    96,    12,
      -1,    52,     4,    -1,   110,    31,   111,    -1,   110,    32,
     111,    -1,   110,    33,   111,    -1,   110,    34,   111,    -1,
     110,    14,   111,    -1,   110,    40,   111,    -1,   111,    -1,
       1,    -1,   111,    35,   112,    -1,   111,    27,   112,    -1,
     111,    41,   112,    -1,   112,    -1,     1,    -1,   112,    36,
     113,    -1,   112,    37,   113,    -1,   112,    39,   113,    -1,
     112,    38,   113,    -1,   113,    -1,     1,    -1,    64,    -1,
      71,    -1,    24,   110,    25,    -1,    30,   113,    -1,    27,
     113,    -1,    64,    18,   110,    19,    -1,    64,    11,    64,
      -1,    64,    24,   114,    25,    -1,    64,    24,    25,    -1,
       1,    -1,   114,    13,   110,    -1,   110,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   153,   153,   157,   163,   167,   170,   174,   179,   182,
     185,   189,   194,   201,   205,   209,   214,   217,   222,   226,
     228,   232,   237,   242,   243,   244,   246,   251,   256,   260,
     265,   270,   274,   278,   282,   286,   290,   294,   298,   302,
     307,   311,   316,   319,   324,   327,   330,   333,   335,   340,
     344,   348,   352,   356,   358,   363,   368,   372,   373,   375,
     379,   384,   388,   393,   398,   403,   408,   413,   416,   418,
     421,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   437,   441,   445,   450,   454,   458,   462,   467,   471,
     475,   480,   485,   490,   494,   499,   504,   507,   511,   515,
     520,   534,   538,   542,   546,   550,   554,   558,   562,   566,
     570,   574,   578,   581,   585,   589,   593,   597,   601,   605,
     609,   613,   617,   621,   625,   629,   633,   637,   641,   645,
     648,   652
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "REAL", "CHAR",
  "P_TRUE", "P_FALSE", "STRING", "PROGRAM", "DOT", "SEMI", "COMMA",
  "EQUAL", "CONST", "ARRAY", "TYPE", "LB", "RB", "OF", "RECORD", "END",
  "COLON", "LP", "RP", "DOTDOT", "MINUS", "VAR", "FUNCTION", "NOT", "GE",
  "GT", "LE", "LT", "PLUS", "MUL", "DIV", "AND", "MOD", "UNEQUAL", "OR",
  "ASSIGN", "P_BEGIN", "IF", "ELSE", "THEN", "REPEAT", "UNTIL", "WHILE",
  "DO", "FOR", "GOTO", "CASE", "TO", "DOWNTO", "READ", "TYPEINTEGER",
  "TYPEREAL", "TYPECHAR", "TYPESTRING", "TYPEBOOL", "PROCEDURE", "$accept",
  "id", "program", "program_head", "routine", "routine_head", "const_part",
  "const_expr_list", "const_value", "type_part", "type_decl_list",
  "type_definition", "type_decl", "array_type_decl", "record_type_decl",
  "field_decl_list", "field_decl", "simple_type_decl", "name_list",
  "var_part", "var_decl_list", "var_decl", "routine_part", "function_decl",
  "procedure_decl", "parameters", "para_decl_list", "para_type_list",
  "var_para_list", "val_para_list", "routine_body", "compound_stmt",
  "stmt_list", "stmt", "non_label_stmt", "assign_stmt", "proc_stmt",
  "if_stmt", "else_clause", "repeat_stmt", "while_stmt", "for_stmt",
  "direction", "case_stmt", "case_expr_list", "case_expr", "goto_stmt",
  "expression", "expr", "term", "factor", "args_list", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    67,    67,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    71,    71,    72,    72,
      73,    73,    74,    75,    75,    75,    76,    77,    78,    78,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    85,
      85,    85,    85,    85,    86,    87,    88,    88,    88,    89,
      89,    90,    90,    91,    92,    93,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    99,    99,    99,   100,   101,   101,
     102,   103,   104,   105,   105,   106,   107,   107,   108,   108,
     109,   110,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     114,   114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     2,     0,     4,     2,     0,
       5,     4,     1,     1,     1,     1,     1,     1,     2,     0,
       2,     1,     4,     1,     1,     1,     6,     3,     2,     1,
       4,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       5,     3,     3,     1,     2,     0,     2,     1,     4,     2,
       2,     1,     1,     0,     8,     6,     3,     0,     2,     3,
       1,     3,     3,     2,     1,     1,     3,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     5,     3,     4,     4,     5,     2,     0,
       4,     4,     8,     1,     1,     5,     2,     1,     4,     4,
       2,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     1,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     3,     2,     2,     4,     3,     4,     3,     1,
       3,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     9,     2,     0,     1,     0,     0,     0,
      19,     4,     0,     8,     3,    68,     5,    65,     0,    45,
       0,     0,     0,     0,    18,    21,     0,    53,    12,    13,
      14,    16,    17,    15,     0,     0,    80,     0,    66,     0,
      68,     0,     0,     0,     0,     0,     0,    73,     0,    70,
      71,    72,    74,    75,    76,    77,    78,    79,     0,    20,
      43,     0,    44,    47,     0,     0,     7,    51,    52,    11,
       0,     0,   108,     0,     0,     0,   120,   121,     0,   107,
     112,   118,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,    67,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,     0,     0,    24,    25,    23,     0,     0,
      46,    57,    57,    49,    50,    10,    69,     0,   129,   124,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,   131,     0,    81,     0,
       0,    29,     0,     0,     0,     0,     0,    22,    42,     0,
       0,     0,     0,   122,   126,     0,   128,     0,   113,   105,
     101,   102,   103,   104,   106,    89,   119,   110,   109,   111,
     114,   115,   117,   116,    90,    91,     0,     0,     0,     0,
      97,    86,     0,     0,     0,    85,     0,    27,    28,     0,
      37,     0,    41,    38,    48,    58,     0,    64,     0,    60,
       0,     0,     0,     9,   125,   127,     0,    87,    93,    94,
       0,     0,     0,    95,    96,    83,     0,   130,     0,     0,
       0,    39,    63,     0,    56,     0,     0,     0,     0,    88,
       0,     0,     0,    82,     0,    30,    40,    59,    61,    62,
       9,    55,     0,    99,    98,    26,     0,    92,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    76,     2,     3,     8,     9,    10,    13,    77,    19,
      24,    25,   104,   105,   106,   150,   151,   107,    61,    27,
      62,    63,    66,    67,    68,   161,   208,   209,   210,   211,
      16,    47,    22,    48,    49,    50,    51,    52,   217,    53,
      54,    55,   220,    56,   189,   190,    57,   146,    79,    80,
      81,   147
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -207
static const yytype_int16 yypact[] =
{
      30,    24,     4,   103,  -207,    55,  -207,    24,    62,    39,
      75,  -207,    71,    24,  -207,  -207,  -207,  -207,    24,    67,
     520,    86,   236,    87,    24,  -207,    24,   -20,  -207,  -207,
    -207,  -207,  -207,  -207,    97,   520,  -207,    89,  -207,   381,
    -207,   381,    24,   113,   381,   104,    27,  -207,   125,  -207,
    -207,  -207,  -207,  -207,  -207,  -207,  -207,  -207,   118,  -207,
    -207,    45,    24,  -207,    24,    24,   -20,  -207,  -207,  -207,
     139,   290,   365,   381,   390,   390,    95,  -207,    65,    19,
     129,  -207,   260,    16,    99,  -207,   222,   390,    24,   381,
     344,   381,  -207,   134,    24,    24,   520,  -207,  -207,  -207,
    -207,  -207,   121,   127,   143,  -207,  -207,  -207,    24,   118,
    -207,   136,   136,  -207,  -207,  -207,  -207,   430,  -207,  -207,
    -207,    24,   381,   353,   418,   418,   418,   418,   418,   418,
     271,   427,   427,   427,   390,   390,   390,   390,   381,   271,
     381,   508,   144,   145,   446,  -207,   435,     9,   435,   241,
      17,  -207,    49,    18,   155,    24,   520,  -207,  -207,   173,
       7,   163,   177,  -207,  -207,   457,  -207,    46,   135,    19,
      19,    19,    19,    19,    19,   146,  -207,   129,   129,   129,
    -207,  -207,  -207,  -207,   435,  -207,   168,   169,   171,   501,
    -207,  -207,   381,   154,   381,  -207,   178,  -207,  -207,   118,
    -207,   494,  -207,  -207,  -207,  -207,    24,   190,     1,  -207,
     181,   184,   241,    68,  -207,  -207,   271,  -207,  -207,  -207,
     381,   271,   271,  -207,  -207,   435,   381,   435,   189,   198,
     520,  -207,   190,     8,  -207,   241,   241,   200,   201,  -207,
     130,   202,   204,   435,   118,  -207,  -207,  -207,  -207,  -207,
      68,  -207,   271,  -207,  -207,  -207,   205,  -207,  -207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,    -1,  -207,  -207,  -206,  -207,  -207,  -207,    -6,  -207,
    -207,   194,  -108,  -207,  -207,  -207,    69,  -147,   -76,  -207,
    -207,   164,  -207,   159,   161,   116,  -207,    -2,  -207,  -207,
    -207,   224,   212,  -106,   170,  -207,  -207,  -207,  -207,  -207,
    -207,  -207,  -207,  -207,  -207,    70,  -207,   -36,   406,     0,
     -59,   137
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -120
static const yytype_int16 yytable[] =
{
       5,   159,   196,    78,     6,    83,    12,   238,    86,    64,
       4,     4,    21,   233,    34,   119,   120,    23,   152,   153,
       4,    46,   194,    23,   175,    60,   234,     4,   142,    70,
     124,   108,   205,   185,   195,   206,   206,   117,    88,   197,
       1,    84,    65,   200,   256,    89,   131,   125,   126,   127,
     128,    90,   103,   144,   132,   148,   129,   102,   108,   194,
     133,    60,   108,   111,   112,   237,   139,    11,   109,    91,
      46,   215,   199,    14,   152,   180,   181,   182,   183,   124,
      -6,    46,    15,     7,   207,    20,   165,   143,   248,   249,
     154,   229,    18,    60,    60,    26,   125,   126,   127,   128,
      35,    58,   184,   103,   186,   129,   121,   158,   102,    69,
     239,   130,    71,   122,    -6,   241,   242,    85,     7,   123,
     164,     4,    28,    29,    30,    31,    32,    33,    87,    46,
     232,   177,   178,   179,    93,   188,   255,    92,    46,    94,
     187,   140,    95,   103,   124,    96,   257,   155,   102,    60,
     203,   115,   149,   156,   202,   157,   225,   207,   227,    60,
     160,   125,   126,   127,   128,   134,   135,   136,   137,   191,
     129,  -119,  -119,  -119,  -119,    97,    98,    99,   100,   101,
     252,   201,   124,   188,   240,   204,   212,   192,   187,   213,
     243,   216,   221,   103,   222,   231,   226,   228,   102,   125,
     126,   127,   128,   108,   235,    60,   103,   236,   129,   244,
     245,   102,   250,   251,   253,    46,   254,   258,    59,   198,
      46,    46,   218,   219,   246,   113,   110,   114,   162,   103,
     103,   247,    60,    17,   102,   102,   124,    36,   103,     4,
      37,   116,   141,   102,     4,    28,    29,    30,    31,    32,
      33,    46,    82,   125,   126,   127,   128,     0,    38,   224,
     167,    36,   129,     4,    37,    95,     0,     0,    96,     0,
       0,     0,    36,     0,     4,    37,     0,     0,     0,    15,
      39,     0,     0,    40,     0,    41,     0,    42,    43,    44,
       0,    36,    45,     4,     0,     0,     0,     0,    97,    98,
      99,   100,   101,    15,    39,     0,     0,    40,   138,    41,
       0,    42,    43,    44,    15,    39,    45,     0,    40,     0,
      41,     0,    42,    43,    44,     0,     0,    45,     0,     0,
       0,     0,     0,    15,    39,     0,     0,    40,     0,    41,
       0,    42,    43,    44,     0,    72,    45,     4,    28,    29,
      30,    31,    32,    33,    72,     0,     4,    28,    29,    30,
      31,    32,    33,     0,     0,     0,     0,     0,    73,   145,
       0,    74,     0,     0,    75,     0,     0,    73,   166,     0,
      74,     0,    72,    75,     4,    28,    29,    30,    31,    32,
      33,   118,  -113,     4,    28,    29,    30,    31,    32,    33,
    -113,  -119,  -119,  -119,  -119,    73,  -113,     0,    74,     0,
       0,    75,     0,     0,    73,     0,     0,    74,     0,   168,
      75,     4,    28,    29,    30,    31,    32,    33,   176,     0,
       4,    28,    29,    30,    31,    32,    33,     0,     0,     0,
       0,     0,    73,     0,   124,    74,     0,     0,    75,   124,
       0,    73,     0,     0,    74,   163,     0,    75,     0,     0,
     124,   125,   126,   127,   128,   193,   125,   126,   127,   128,
     129,   124,     0,     0,     0,   129,   214,   125,   126,   127,
     128,     0,     0,     0,     0,     0,   129,     0,   125,   126,
     127,   128,     0,     0,     0,     0,     0,   129,    28,    29,
      30,    31,    32,    33,     4,    28,    29,    30,    31,    32,
      33,     4,    28,    29,    30,    31,    32,    33,     0,     0,
       0,   230,     0,   223,    28,    29,    30,    31,    32,    33,
     169,   170,   171,   172,   173,   174
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-207)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,   109,   149,    39,     0,    41,     7,   213,    44,    29,
       3,     3,    13,    12,    20,    74,    75,    18,    94,    95,
       3,    22,    13,    24,   130,    26,    25,     3,    87,    35,
      14,    13,    25,   139,    25,    28,    28,    73,    11,    22,
      10,    42,    62,    25,   250,    18,    27,    31,    32,    33,
      34,    24,    58,    89,    35,    91,    40,    58,    13,    13,
      41,    62,    13,    64,    65,   212,    50,    12,    23,    42,
      71,    25,    23,    11,   150,   134,   135,   136,   137,    14,
      12,    82,    43,    15,   160,    14,   122,    88,   235,   236,
      96,   199,    17,    94,    95,    28,    31,    32,    33,    34,
      14,    14,   138,   109,   140,    40,    11,   108,   109,    12,
     216,    46,    23,    18,    11,   221,   222,     4,    15,    24,
     121,     3,     4,     5,     6,     7,     8,     9,    24,   130,
     206,   131,   132,   133,    16,   141,   244,    12,   139,    21,
     141,    42,    24,   149,    14,    27,   252,    26,   149,   150,
     156,    12,    18,    26,   155,    12,   192,   233,   194,   160,
      24,    31,    32,    33,    34,    36,    37,    38,    39,    25,
      40,    36,    37,    38,    39,    57,    58,    59,    60,    61,
      50,    26,    14,   189,   220,    12,    23,    42,   189,    12,
     226,    45,    23,   199,    23,   201,    42,    19,   199,    31,
      32,    33,    34,    13,    23,   206,   212,    23,    40,    20,
      12,   212,    12,    12,    12,   216,    12,    12,    24,   150,
     221,   222,    54,    55,   230,    66,    62,    66,   112,   235,
     236,   233,   233,     9,   235,   236,    14,     1,   244,     3,
       4,    71,    20,   244,     3,     4,     5,     6,     7,     8,
       9,   252,    40,    31,    32,    33,    34,    -1,    22,   189,
     123,     1,    40,     3,     4,    24,    -1,    -1,    27,    -1,
      -1,    -1,     1,    -1,     3,     4,    -1,    -1,    -1,    43,
      44,    -1,    -1,    47,    -1,    49,    -1,    51,    52,    53,
      -1,     1,    56,     3,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    43,    44,    -1,    -1,    47,    48,    49,
      -1,    51,    52,    53,    43,    44,    56,    -1,    47,    -1,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,    49,
      -1,    51,    52,    53,    -1,     1,    56,     3,     4,     5,
       6,     7,     8,     9,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    24,    25,
      -1,    27,    -1,    -1,    30,    -1,    -1,    24,    25,    -1,
      27,    -1,     1,    30,     3,     4,     5,     6,     7,     8,
       9,     1,    27,     3,     4,     5,     6,     7,     8,     9,
      35,    36,    37,    38,    39,    24,    41,    -1,    27,    -1,
      -1,    30,    -1,    -1,    24,    -1,    -1,    27,    -1,     1,
      30,     3,     4,     5,     6,     7,     8,     9,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    14,    27,    -1,    -1,    30,    14,
      -1,    24,    -1,    -1,    27,    25,    -1,    30,    -1,    -1,
      14,    31,    32,    33,    34,    19,    31,    32,    33,    34,
      40,    14,    -1,    -1,    -1,    40,    19,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,     4,     5,
       6,     7,     8,     9,     3,     4,     5,     6,     7,     8,
       9,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    27,    -1,    22,     4,     5,     6,     7,     8,     9,
     124,   125,   126,   127,   128,   129
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    65,    66,     3,    64,     0,    15,    67,    68,
      69,    12,    64,    70,    11,    43,    93,    94,    17,    72,
      14,    64,    95,    64,    73,    74,    28,    82,     4,     5,
       6,     7,     8,     9,    71,    14,     1,     4,    22,    44,
      47,    49,    51,    52,    53,    56,    64,    94,    96,    97,
      98,    99,   100,   102,   103,   104,   106,   109,    14,    74,
      64,    81,    83,    84,    29,    62,    85,    86,    87,    12,
      71,    23,     1,    24,    27,    30,    64,    71,   110,   111,
     112,   113,    95,   110,    64,     4,   110,    24,    11,    18,
      24,    42,    12,    16,    21,    24,    27,    57,    58,    59,
      60,    61,    64,    71,    75,    76,    77,    80,    13,    23,
      84,    64,    64,    86,    87,    12,    97,   110,     1,   113,
     113,    11,    18,    24,    14,    31,    32,    33,    34,    40,
      46,    27,    35,    41,    36,    37,    38,    39,    48,    50,
      42,    20,   113,    64,   110,    25,   110,   114,   110,    18,
      78,    79,    81,    81,    71,    26,    26,    12,    64,    75,
      24,    88,    88,    25,    64,   110,    25,   114,     1,   111,
     111,   111,   111,   111,   111,    96,     1,   112,   112,   112,
     113,   113,   113,   113,   110,    96,   110,    64,    71,   107,
     108,    25,    42,    19,    13,    25,    80,    22,    79,    23,
      25,    26,    64,    71,    12,    25,    28,    81,    89,    90,
      91,    92,    23,    12,    19,    25,    45,   101,    54,    55,
     105,    23,    23,    22,   108,   110,    42,   110,    19,    75,
      27,    71,    81,    12,    25,    23,    23,    80,    67,    96,
     110,    96,    96,   110,    20,    12,    71,    90,    80,    80,
      12,    12,    50,    12,    12,    75,    67,    96,    12
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 153 "bison/pascal.y"
    {
    (yyval.id_node) = new Id_Node(yytext);
}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 157 "bison/pascal.y"
    {
              (yyval.program_node) = new Program_Node((yyvsp[(1) - (3)].program_head_node), (yyvsp[(2) - (3)].routine_node));
              (yyval.program_node)->setLineno(lineno);
              savedTree = (yyval.program_node);
          }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 163 "bison/pascal.y"
    {
                    (yyval.program_head_node) = new Program_head_Node((yyvsp[(2) - (3)].id_node));
                }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 167 "bison/pascal.y"
    { 
              (yyval.routine_node) = new Routine_Node((yyvsp[(1) - (2)].routine_head_node), (yyvsp[(2) - (2)].routine_body_node));
              (yyval.routine_node)->setLineno(lineno);
          }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 170 "bison/pascal.y"
    {//empty
              (yyval.routine_node) = nullptr;
          }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 174 "bison/pascal.y"
    {
                   (yyval.routine_head_node) = new Routine_head_Node((yyvsp[(1) - (4)].const_part_node), (yyvsp[(2) - (4)].type_part_node), (yyvsp[(3) - (4)].var_part_node), (yyvsp[(4) - (4)].routine_part_node));
                   (yyval.routine_head_node)->setLineno(lineno);
               }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 179 "bison/pascal.y"
    {
                 (yyval.const_part_node) = new Const_part_Node((yyvsp[(2) - (2)].const_expr_list_node));
             }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 182 "bison/pascal.y"
    {(yyval.const_part_node) = nullptr;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 185 "bison/pascal.y"
    {
                      (yyval.const_expr_list_node) = new Const_expr_list_Node((yyvsp[(1) - (5)].const_expr_list_node), (yyvsp[(2) - (5)].id_node), (yyvsp[(4) - (5)].const_value_node));
                      (yyval.const_expr_list_node)->setLineno(lineno);
                  }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 189 "bison/pascal.y"
    { 
    (yyval.const_expr_list_node) = new Const_expr_list_Node((yyvsp[(1) - (4)].id_node), (yyvsp[(3) - (4)].const_value_node));
    (yyval.const_expr_list_node)->setLineno(lineno);
}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 194 "bison/pascal.y"
    {
                  /* const_value can be ConstInt_Node or else
                     but all is Const_value_Node
                   */
                  (yyval.const_value_node) = new ConstInt_Node((yyvsp[(1) - (1)].constInt));
                  (yyval.const_value_node)->setLineno(lineno);
              }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 201 "bison/pascal.y"
    { 
    (yyval.const_value_node) = new ConstDouble_Node((yyvsp[(1) - (1)].constDouble));
    (yyval.const_value_node)->setLineno(lineno);
}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 205 "bison/pascal.y"
    {
    (yyval.const_value_node) = new ConstChar_Node((yyvsp[(1) - (1)].constChar));
    (yyval.const_value_node)->setLineno(lineno);
}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 209 "bison/pascal.y"
    {
    (yyval.const_value_node) = new ConstStr_Node(std::string(yytext[1], strlen(yytext) - 2));
    //strip ""
    (yyval.const_value_node)->setLineno(lineno);
}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 214 "bison/pascal.y"
    {
    (yyval.const_value_node) = new ConstBool_Node((yyvsp[(1) - (1)].constBool));
    (yyval.const_value_node)->setLineno(lineno);
}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 217 "bison/pascal.y"
    {
    (yyval.const_value_node) = new ConstBool_Node((yyvsp[(1) - (1)].constBool));
    (yyval.const_value_node)->setLineno(lineno);
}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 222 "bison/pascal.y"
    {
               (yyval.type_part_node) = new Type_part_Node((yyvsp[(2) - (2)].type_decl_list_node));
               (yyval.type_part_node)->setLineno(lineno);
           }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 226 "bison/pascal.y"
    {(yyval.type_part_node) = nullptr;}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 228 "bison/pascal.y"
    {
                      (yyval.type_decl_list_node) = new Type_decl_list_Node((yyvsp[(1) - (2)].type_decl_list_node), (yyvsp[(2) - (2)].type_definition_node));
                      (yyval.type_decl_list_node)->setLineno(lineno);
                  }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 232 "bison/pascal.y"
    {
    (yyval.type_decl_list_node) = new Type_decl_list_Node((yyvsp[(1) - (1)].type_definition_node));
    (yyval.type_decl_list_node)->setLineno(lineno);
}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 237 "bison/pascal.y"
    { 
                      (yyval.type_definition_node) = new Type_definition_Node((yyvsp[(1) - (4)].id_node), (yyvsp[(3) - (4)].type_decl_node));
                      (yyval.type_definition_node)->setLineno(lineno);  
                  }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 242 "bison/pascal.y"
    {(yyval.type_decl_node) = (yyvsp[(1) - (1)].simple_type_decl_node);}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 243 "bison/pascal.y"
    {(yyval.type_decl_node) = (yyvsp[(1) - (1)].array_type_decl_node);}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 244 "bison/pascal.y"
    {(yyval.type_decl_node) = (yyvsp[(1) - (1)].record_type_decl_node);}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 246 "bison/pascal.y"
    { 
                      (yyval.array_type_decl_node) = new Array_type_decl_Node((yyvsp[(3) - (6)].simple_type_decl_node), (yyvsp[(6) - (6)].type_decl_node));
                      (yyval.array_type_decl_node)->setLineno(lineno);
                  }
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 251 "bison/pascal.y"
    {
                       (yyval.record_type_decl_node) = new Record_type_decl_Node((yyvsp[(2) - (3)].field_decl_list_node));
                       (yyval.record_type_decl_node)->setLineno(lineno);
                   }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 256 "bison/pascal.y"
    {
                      (yyval.field_decl_list_node) = new Field_decl_list_Node((yyvsp[(1) - (2)].field_decl_list_node), (yyvsp[(2) - (2)].field_decl_node));
                      (yyval.field_decl_list_node)->setLineno(lineno);
                  }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 260 "bison/pascal.y"
    {
    (yyval.field_decl_list_node) = new Field_decl_list_Node((yyvsp[(1) - (1)].field_decl_node));
    (yyval.field_decl_list_node)->setLineno(lineno);
}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 265 "bison/pascal.y"
    {
                 (yyval.field_decl_node) = new Field_decl_Node((yyvsp[(1) - (4)].name_list_node), (yyvsp[(3) - (4)].type_decl_node));
                 (yyval.field_decl_node)->setLineno(lineno);
             }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 270 "bison/pascal.y"
    {
                       (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::INT);
                       (yyval.simple_type_decl_node)->setLineno(lineno);
                   }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 274 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::REAL);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 278 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::CHAR);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 282 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::STRING);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 286 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::BOOL);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 290 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new Alias_type_decl_Node((yyvsp[(1) - (1)].id_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 294 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new Enum_type_decl_Node((yyvsp[(2) - (3)].name_list_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 298 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(false, (yyvsp[(1) - (3)].const_value_node), false, (yyvsp[(3) - (3)].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 303 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(true, (yyvsp[(2) - (4)].const_value_node), false, (yyvsp[(4) - (4)].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 308 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(true, (yyvsp[(2) - (5)].const_value_node), true, (yyvsp[(5) - (5)].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 311 "bison/pascal.y"
    {
    (yyval.simple_type_decl_node) = new Subrange_id_type_decl_Node((yyvsp[(1) - (3)].id_node), (yyvsp[(3) - (3)].id_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 316 "bison/pascal.y"
    {
                (yyval.name_list_node) = new Name_list_Node((yyvsp[(1) - (3)].name_list_node), (yyvsp[(3) - (3)].id_node));
                (yyval.name_list_node)->setLineno(lineno);
            }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 319 "bison/pascal.y"
    { 
                (yyval.name_list_node) = new Name_list_Node((yyvsp[(1) - (1)].id_node));
                (yyval.name_list_node)->setLineno(lineno);
            }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 324 "bison/pascal.y"
    {
               (yyval.var_part_node) = new Var_part_Node((yyvsp[(2) - (2)].var_decl_list_node));
               (yyval.var_part_node)->setLineno(lineno);
           }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 327 "bison/pascal.y"
    { (yyval.var_part_node) = nullptr;
           }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 330 "bison/pascal.y"
    {
                    (yyval.var_decl_list_node) = new Var_decl_list_Node((yyvsp[(1) - (2)].var_decl_list_node), (yyvsp[(2) - (2)].var_decl_node));
                }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 333 "bison/pascal.y"
    { (yyval.var_decl_list_node) = new Var_decl_list_Node((yyvsp[(1) - (1)].var_decl_node));}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 335 "bison/pascal.y"
    {
               (yyval.var_decl_node) = new Var_decl_Node((yyvsp[(1) - (4)].name_list_node), (yyvsp[(3) - (4)].type_decl_node));
               (yyval.var_decl_node)->setLineno(lineno);
           }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 340 "bison/pascal.y"
    {
                   (yyval.routine_part_node) = new Routine_part_Node((yyvsp[(1) - (2)].routine_part_node), (Function_decl_Node*)(yyvsp[(2) - (2)].function_decl_node));
                   (yyval.routine_part_node)->setLineno(lineno);
               }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 344 "bison/pascal.y"
    {
    (yyval.routine_part_node) = new Routine_part_Node((yyvsp[(1) - (2)].routine_part_node), (Procedure_decl_Node*)(yyvsp[(2) - (2)].procedure_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 348 "bison/pascal.y"
    {
    (yyval.routine_part_node) = new Routine_part_Node((Function_decl_Node*)(yyvsp[(1) - (1)].function_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 352 "bison/pascal.y"
    {
    (yyval.routine_part_node) = new Routine_part_Node((Procedure_decl_Node*)(yyvsp[(1) - (1)].procedure_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 356 "bison/pascal.y"
    {(yyval.routine_part_node) = nullptr;}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 358 "bison/pascal.y"
    {
                    (yyval.function_decl_node) = new Function_decl_Node((yyvsp[(2) - (8)].id_node), (yyvsp[(3) - (8)].parameters_node), (yyvsp[(5) - (8)].simple_type_decl_node), (yyvsp[(7) - (8)].routine_node));
                    (yyval.function_decl_node)->setLineno(lineno);
                }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 363 "bison/pascal.y"
    { 
                    (yyval.procedure_decl_node) = new Procedure_decl_Node((yyvsp[(2) - (6)].id_node), (yyvsp[(3) - (6)].parameters_node), (yyvsp[(5) - (6)].routine_node));
                    (yyval.procedure_decl_node)->setLineno(lineno);
                }
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 368 "bison/pascal.y"
    {
                 (yyval.parameters_node) = new Parameters_Node((yyvsp[(2) - (3)].para_decl_list_node));
                 (yyval.parameters_node) -> setLineno(lineno);
             }
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 372 "bison/pascal.y"
    {(yyval.parameters_node) = nullptr;}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 373 "bison/pascal.y"
    {(yyval.parameters_node) = nullptr;}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 375 "bison/pascal.y"
    {
                     (yyval.para_decl_list_node) = new Para_decl_list_Node((yyvsp[(1) - (3)].para_decl_list_node), (yyvsp[(3) - (3)].para_type_list_node));
                     (yyval.para_decl_list_node)->setLineno(lineno);
                 }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 379 "bison/pascal.y"
    {
    (yyval.para_decl_list_node) = new Para_decl_list_Node((yyvsp[(1) - (1)].para_type_list_node));
    (yyval.para_decl_list_node)->setLineno(lineno);
}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 384 "bison/pascal.y"
    { 
                     (yyval.para_type_list_node) = new Para_type_list_Node((yyvsp[(1) - (3)].var_para_list_node), (yyvsp[(3) - (3)].simple_type_decl_node));
                     (yyval.para_type_list_node)->setLineno(lineno);
                }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 388 "bison/pascal.y"
    { 
    (yyval.para_type_list_node) = new Para_type_list_Node((yyvsp[(1) - (3)].val_para_list_node), (yyvsp[(3) - (3)].simple_type_decl_node));
    (yyval.para_type_list_node)->setLineno(lineno);
}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 393 "bison/pascal.y"
    {
                    (yyval.var_para_list_node) = new Var_para_list_Node((yyvsp[(2) - (2)].name_list_node));
                    (yyval.var_para_list_node)->setLineno(lineno);
                }
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 398 "bison/pascal.y"
    {
                    (yyval.val_para_list_node) = new Val_para_list_Node((yyvsp[(1) - (1)].name_list_node));
                    (yyval.val_para_list_node)->setLineno(lineno);
                }
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 403 "bison/pascal.y"
    {
                   (yyval.routine_body_node) = new Routine_body_Node((yyvsp[(1) - (1)].compound_stmt_node));
                   (yyval.routine_body_node)->setLineno(lineno);
               }
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 408 "bison/pascal.y"
    {
                    (yyval.compound_stmt_node) = new Compound_stmt_Node((yyvsp[(2) - (3)].stmt_list_node));
                    (yyval.compound_stmt_node)->setLineno(lineno);
                }
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 413 "bison/pascal.y"
    { 
                (yyval.stmt_list_node) = new Stmt_list_Node((yyvsp[(1) - (3)].stmt_list_node), (yyvsp[(2) - (3)].stmt_node));
                (yyval.stmt_list_node)->setLineno(lineno);  
            }
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 416 "bison/pascal.y"
    {(yyval.stmt_list_node) = nullptr;}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 418 "bison/pascal.y"
    { 
           (yyval.stmt_node) = new Stmt_Node((yyvsp[(1) - (3)].constInt), (yyvsp[(3) - (3)].non_label_stmt_node));
           (yyval.stmt_node)->setLineno(lineno); 
       }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 421 "bison/pascal.y"
    {
           (yyval.stmt_node) = new Stmt_Node((yyvsp[(1) - (1)].non_label_stmt_node));
           (yyval.stmt_node)->setLineno(lineno);
       }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 426 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].assign_stmt_node);}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 427 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].proc_stmt_node);}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 428 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].compound_stmt_node);}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 429 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].if_stmt_node);}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 430 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].repeat_stmt_node);}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 431 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].while_stmt_node);}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 432 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].for_stmt_node);}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 433 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].case_stmt_node);}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 434 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = (yyvsp[(1) - (1)].goto_stmt_node);}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 435 "bison/pascal.y"
    {(yyval.non_label_stmt_node) = nullptr;}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 437 "bison/pascal.y"
    { 
                  (yyval.assign_stmt_node) = new Assign_id_stmt_Node((yyvsp[(1) - (3)].id_node), (yyvsp[(3) - (3)].expression_node));
                  (yyval.assign_stmt_node)->setLineno(lineno);
              }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 441 "bison/pascal.y"
    {
    (yyval.assign_stmt_node) = new Assign_arr_stmt_Node((yyvsp[(1) - (6)].id_node), (yyvsp[(3) - (6)].expression_node), (yyvsp[(6) - (6)].expression_node));
    (yyval.assign_stmt_node)->setLineno(lineno);
}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 445 "bison/pascal.y"
    { 
    (yyval.assign_stmt_node) = new Assign_record_stmt_Node((yyvsp[(1) - (5)].id_node), (yyvsp[(3) - (5)].id_node), (yyvsp[(5) - (5)].expression_node));
    (yyval.assign_stmt_node)->setLineno(lineno);
}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 450 "bison/pascal.y"
    {
                (yyval.proc_stmt_node) = new Proc_stmt_Node((yyvsp[(1) - (3)].id_node));
                (yyval.proc_stmt_node)->setLineno(lineno);
            }
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 454 "bison/pascal.y"
    {
    (yyval.proc_stmt_node) = new Proc_stmt_Node((yyvsp[(1) - (4)].id_node), (yyvsp[(3) - (4)].args_list_node));
    (yyval.proc_stmt_node)->setLineno(lineno);
}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 458 "bison/pascal.y"
    {
    (yyval.proc_stmt_node) = new Read_stmt_Node((yyvsp[(3) - (4)].factor_node));
}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 462 "bison/pascal.y"
    { 
              (yyval.if_stmt_node) = new If_stmt_Node((yyvsp[(2) - (5)].expression_node), (yyvsp[(4) - (5)].stmt_node), (yyvsp[(5) - (5)].else_clause_node));
              (yyval.if_stmt_node)->setLineno(lineno);
          }
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 467 "bison/pascal.y"
    {
                  (yyval.else_clause_node) = new Else_clause_Node((yyvsp[(2) - (2)].stmt_node));
                  (yyval.else_clause_node)->setLineno(lineno);
              }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 471 "bison/pascal.y"
    {
    (yyval.else_clause_node) = nullptr;
}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 475 "bison/pascal.y"
    { 
                  (yyval.repeat_stmt_node) = new Repeat_stmt_Node((yyvsp[(2) - (4)].stmt_list_node), (yyvsp[(4) - (4)].expression_node));
                  (yyval.repeat_stmt_node)->setLineno(lineno);
              }
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 480 "bison/pascal.y"
    {
                 (yyval.while_stmt_node) = new While_stmt_Node((yyvsp[(2) - (4)].expression_node), (yyvsp[(4) - (4)].stmt_node));
                 (yyval.while_stmt_node)->setLineno(lineno);
             }
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 485 "bison/pascal.y"
    { 
               (yyval.for_stmt_node) = new For_stmt_Node((yyvsp[(2) - (8)].id_node), (yyvsp[(4) - (8)].expression_node), (yyvsp[(5) - (8)].direction_node), (yyvsp[(6) - (8)].expression_node), (yyvsp[(8) - (8)].stmt_node));
               (yyval.for_stmt_node)->setLineno(lineno);
           }
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 490 "bison/pascal.y"
    {
                (yyval.direction_node) = new Direction_Node(true);
                (yyval.direction_node)->setLineno(lineno);
            }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 494 "bison/pascal.y"
    {
    (yyval.direction_node) = new Direction_Node(false);
    (yyval.direction_node)->setLineno(lineno);
}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 499 "bison/pascal.y"
    { 
                (yyval.case_stmt_node) = new Case_stmt_Node((yyvsp[(2) - (5)].expression_node), (yyvsp[(4) - (5)].case_expr_list_node));
                (yyval.case_stmt_node)->setLineno(lineno);
            }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 504 "bison/pascal.y"
    { 
                     (yyval.case_expr_list_node) = new Case_expr_list_Node((yyvsp[(1) - (2)].case_expr_list_node), (yyvsp[(2) - (2)].case_expr_node));
                 }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 507 "bison/pascal.y"
    {
    (yyval.case_expr_list_node) = new Case_expr_list_Node((yyvsp[(1) - (1)].case_expr_node));
}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 511 "bison/pascal.y"
    { 
                (yyval.case_expr_node) = new Case_const_val_expr_Node((yyvsp[(1) - (4)].const_value_node), (yyvsp[(3) - (4)].stmt_node));
                (yyval.case_expr_node)->setLineno(lineno);
            }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 515 "bison/pascal.y"
    {
    (yyval.case_expr_node) = new Case_id_expr_Node((yyvsp[(1) - (4)].id_node), (yyvsp[(3) - (4)].stmt_node));
    (yyval.case_expr_node)->setLineno(lineno);
}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 520 "bison/pascal.y"
    { 
                (yyval.goto_stmt_node) = new Goto_stmt_Node((yyvsp[(2) - (2)].constInt));
                (yyval.goto_stmt_node)->setLineno(lineno);
            }
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 534 "bison/pascal.y"
    {
                 (yyval.expression_node) = new Expression_Node((yyvsp[(1) - (3)].expression_node), Expression_Node::GE, (yyvsp[(3) - (3)].expr_node));
                 (yyval.expression_node)->setLineno(lineno);
             }
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 538 "bison/pascal.y"
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[(1) - (3)].expression_node), Expression_Node::GT, (yyvsp[(3) - (3)].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 542 "bison/pascal.y"
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[(1) - (3)].expression_node), Expression_Node::LE, (yyvsp[(3) - (3)].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 546 "bison/pascal.y"
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[(1) - (3)].expression_node), Expression_Node::LT, (yyvsp[(3) - (3)].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
    break;

  case 105:
/* Line 1792 of yacc.c  */
#line 550 "bison/pascal.y"
    {
    (yyval.expression_node) = new Expression_Node((yyvsp[(1) - (3)].expression_node), Expression_Node::EQ, (yyvsp[(3) - (3)].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
    break;

  case 106:
/* Line 1792 of yacc.c  */
#line 554 "bison/pascal.y"
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[(1) - (3)].expression_node), Expression_Node::NEQ, (yyvsp[(3) - (3)].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 558 "bison/pascal.y"
    {
    (yyval.expression_node) = new Expression_Node((yyvsp[(1) - (1)].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 562 "bison/pascal.y"
    {
    (yyval.expression_node) = nullptr;
}
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 566 "bison/pascal.y"
    {
           (yyval.expr_node) = new Expr_Node((yyvsp[(1) - (3)].expr_node), Expr_Node::ADD, (yyvsp[(3) - (3)].expr_node));
           (yyval.expr_node)->setLineno(lineno);
       }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 570 "bison/pascal.y"
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[(1) - (3)].expr_node), Expr_Node::SUB, (yyvsp[(3) - (3)].expr_node));
    (yyval.expr_node)->setLineno(lineno);
}
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 574 "bison/pascal.y"
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[(1) - (3)].expr_node), Expr_Node::OR, (yyvsp[(3) - (3)].expr_node));
    (yyval.expr_node)->setLineno(lineno);
}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 578 "bison/pascal.y"
    {
  (yyval.expr_node) = (yyvsp[(1) - (1)].expr_node);
}
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 581 "bison/pascal.y"
    {
  (yyval.expr_node) = nullptr;
}
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 585 "bison/pascal.y"
    {
           (yyval.expr_node) = new Expr_Node((yyvsp[(1) - (3)].expr_node), Expr_Node::MUL, new Expr_Node((yyvsp[(3) - (3)].factor_node)));
           (yyval.expr_node)->setLineno(lineno);
       }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 589 "bison/pascal.y"
    { 
    (yyval.expr_node) = new Expr_Node((yyvsp[(1) - (3)].expr_node), Expr_Node::DIV, new Expr_Node((yyvsp[(3) - (3)].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 593 "bison/pascal.y"
    { 
    (yyval.expr_node) = new Expr_Node((yyvsp[(1) - (3)].expr_node), Expr_Node::MOD, new Expr_Node((yyvsp[(3) - (3)].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 597 "bison/pascal.y"
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[(1) - (3)].expr_node), Expr_Node::AND, new Expr_Node((yyvsp[(3) - (3)].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 601 "bison/pascal.y"
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[(1) - (1)].factor_node));
    (yyval.expr_node)->setLineno(lineno);
}
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 605 "bison/pascal.y"
    {
    (yyval.expr_node) = nullptr;
}
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 609 "bison/pascal.y"
    {
              (yyval.factor_node) = new Factor_id_Node((yyvsp[(1) - (1)].id_node));
              (yyval.factor_node)->setLineno(lineno);
          }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 613 "bison/pascal.y"
    {
    (yyval.factor_node) = (yyvsp[(1) - (1)].const_value_node);
    //const_val is factor
}
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 617 "bison/pascal.y"
    {
    (yyval.factor_node) = (yyvsp[(2) - (3)].expression_node);
    //expression is factor
}
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 621 "bison/pascal.y"
    {
    (yyval.factor_node) = new Factor_unary_Node(Factor_unary_Node::NOT, (yyvsp[(2) - (2)].factor_node));
    (yyval.factor_node)->setLineno(lineno);
}
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 625 "bison/pascal.y"
    {
    (yyval.factor_node) = new Factor_unary_Node(Factor_unary_Node::MINUS, (yyvsp[(2) - (2)].factor_node));
    (yyval.factor_node)->setLineno(lineno);
}
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 629 "bison/pascal.y"
    {
    (yyval.factor_node) = new Factor_arr_Node((yyvsp[(1) - (4)].id_node), (yyvsp[(3) - (4)].expression_node));
    (yyval.factor_node)->setLineno(lineno);
}
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 633 "bison/pascal.y"
    {
    (yyval.factor_node) = new Factor_record_Node((yyvsp[(1) - (3)].id_node), (yyvsp[(3) - (3)].id_node));
    (yyval.factor_node)->setLineno(lineno);
}
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 637 "bison/pascal.y"
    {
    (yyval.factor_node) = new Func_call_Node((yyvsp[(1) - (4)].id_node), (yyvsp[(3) - (4)].args_list_node));
    (yyval.factor_node)->setLineno(lineno);
}
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 641 "bison/pascal.y"
    {
    (yyval.factor_node) = new Func_call_Node((yyvsp[(1) - (3)].id_node));
    (yyval.factor_node)->setLineno(lineno);
}
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 645 "bison/pascal.y"
    {(yyval.factor_node) = nullptr;}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 648 "bison/pascal.y"
    {
                  (yyval.args_list_node) = new Args_list_Node((yyvsp[(1) - (3)].args_list_node), (yyvsp[(3) - (3)].expression_node));
                  (yyval.args_list_node)->setLineno(lineno);
              }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 652 "bison/pascal.y"
    {
    (yyval.args_list_node) = new Args_list_Node((yyvsp[(1) - (1)].expression_node));
    (yyval.args_list_node)->setLineno(lineno);
}
    break;


/* Line 1792 of yacc.c  */
#line 2870 "pascal.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 657 "bison/pascal.y"


void yyerror(char const *s){
       fprintf (stderr, "%s at %d\n", s, yylineno);
}

TreeNode * do_parse(void){
    yyparse();
    return savedTree;
}
