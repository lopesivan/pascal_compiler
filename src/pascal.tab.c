/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bison/pascal.y" /* yacc.c:339  */

#define YYPARSER /* distinguishes Yacc output from other code files */

#include <stdio.h>
#include "node/ModuleNode.hpp"
#include "node/DeclNode.hpp"
#include "node/ExpNode.hpp"
#include "node/StmtNode.hpp"

#include "globals.h"
#include "util.h"
//static std::string savedName; /* for use in assignments */

static TreeNode * savedTree = nullptr; /* stores syntax tree for later return */

extern int yylex(void);
extern int yyerror(char *message);
extern char* yytext;

#line 86 "pascal.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
#line 22 "bison/pascal.y" /* yacc.c:355  */

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


#line 250 "pascal.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PASCAL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 265 "pascal.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   149,   149,   153,   158,   162,   165,   169,   174,   177,
     180,   184,   189,   196,   200,   204,   209,   213,   215,   219,
     224,   229,   230,   231,   233,   238,   243,   247,   252,   257,
     261,   265,   269,   273,   277,   281,   285,   289,   294,   298,
     303,   306,   311,   314,   317,   320,   322,   327,   331,   335,
     339,   344,   349,   354,   358,   360,   363,   365,   369,   374,
     379,   384,   389,   394,   397,   399,   402,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   417,   421,   425,   430,
     434,   438,   442,   447,   451,   455,   460,   465,   470,   474,
     479,   484,   487,   491,   495,   500,   514,   518,   522,   526,
     530,   534,   538,   543,   547,   551,   555,   559,   563,   567,
     571,   575,   580,   584,   588,   592,   596,   600,   604,   609,
     613
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "REAL", "CHAR",
  "STRING", "PROGRAM", "DOT", "SEMI", "COMMA", "EQUAL", "CONST", "ARRAY",
  "TYPE", "LB", "RB", "OF", "RECORD", "END", "COLON", "LP", "RP", "DOTDOT",
  "MINUS", "VAR", "FUNCTION", "NOT", "GE", "GT", "LE", "LT", "PLUS", "MUL",
  "DIV", "AND", "MOD", "UNEQUAL", "OR", "ASSIGN", "P_BEGIN", "IF", "ELSE",
  "THEN", "REPEAT", "UNTIL", "WHILE", "DO", "FOR", "GOTO", "CASE", "TO",
  "DOWNTO", "READ", "TYPEINTEGER", "TYPEREAL", "TYPECHAR", "TYPESTRING",
  "TYPEBOOL", "P_FALSE", "P_TRUE", "PROCEDURE", "$accept", "id", "program",
  "program_head", "routine", "routine_head", "const_part",
  "const_expr_list", "const_value", "type_part", "type_decl_list",
  "type_definition", "type_decl", "array_type_decl", "record_type_decl",
  "field_decl_list", "field_decl", "simple_type_decl", "name_list",
  "var_part", "var_decl_list", "var_decl", "routine_part", "function_decl",
  "procedure_decl", "parameters", "para_decl_list", "para_type_list",
  "var_para_list", "val_para_list", "routine_body", "compound_stmt",
  "stmt_list", "stmt", "non_label_stmt", "assign_stmt", "proc_stmt",
  "if_stmt", "else_clause", "repeat_stmt", "while_stmt", "for_stmt",
  "direction", "case_stmt", "case_expr_list", "case_expr", "goto_stmt",
  "expression", "expr", "term", "factor", "args_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
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

#define YYPACT_NINF -130

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-130)))

#define YYTABLE_NINF -7

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,    45,     5,     1,  -130,    41,  -130,    45,    48,    12,
      47,  -130,    56,    45,  -130,  -130,  -130,  -130,    45,    33,
     194,    68,   113,    69,    45,  -130,    45,   -23,  -130,  -130,
    -130,  -130,    75,   194,    77,  -130,   359,  -130,   359,    45,
      95,   359,    80,     2,  -130,   103,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,   205,  -130,  -130,    11,    45,
    -130,    45,    45,   -23,  -130,  -130,  -130,   104,   266,   359,
     359,   359,    70,  -130,   292,    10,   298,  -130,   225,    40,
      65,  -130,   313,   359,    45,   359,   359,   359,  -130,   102,
      45,    45,   194,  -130,  -130,  -130,  -130,  -130,    96,    98,
     114,  -130,  -130,  -130,    45,   205,  -130,   105,   105,  -130,
    -130,  -130,  -130,   317,  -130,  -130,    45,   359,   359,   359,
     359,   359,   359,   359,   236,   359,   359,   359,   359,   359,
     359,   359,   359,   236,   359,   288,   106,    85,   119,   329,
      -3,   329,   243,     6,  -130,   100,    18,   115,    45,   194,
    -130,  -130,   118,  -130,   122,   130,  -130,  -130,   340,    10,
      10,    10,    10,    10,    10,   110,   298,   298,   298,  -130,
    -130,  -130,  -130,   329,  -130,    44,   124,   125,   238,  -130,
    -130,   359,   116,   359,  -130,   148,  -130,  -130,   205,  -130,
     210,  -130,  -130,  -130,    21,   243,    27,  -130,   236,  -130,
    -130,  -130,   359,   236,   236,  -130,  -130,   329,   359,   329,
     150,   156,   194,  -130,     4,  -130,  -130,   169,  -130,   140,
     171,   172,   329,   205,  -130,  -130,    45,   173,  -130,   168,
     170,  -130,   236,  -130,  -130,  -130,   173,   243,   243,  -130,
    -130,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     9,     2,     0,     1,     0,     0,     0,
      17,     4,     0,     8,     3,    64,     5,    61,     0,    43,
       0,     0,     0,     0,    16,    19,     0,     0,    12,    13,
      14,    15,     0,     0,     0,    62,     0,    64,     0,     0,
       0,     0,     0,    79,    69,     0,    66,    67,    68,    70,
      71,    72,    73,    74,    75,     0,    18,    41,     0,    42,
      45,     0,     0,     7,    49,    50,    11,     0,     0,     0,
       0,     0,   112,   113,     0,   102,   106,   111,     0,     0,
       0,    95,     0,     0,     0,     0,     0,     0,    63,     0,
       0,     0,     0,    29,    30,    31,    32,    33,    34,     0,
       0,    22,    23,    21,     0,     0,    44,    54,    54,    47,
      48,    10,    65,     0,   116,   115,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
       0,    76,     0,     0,    27,     0,     0,     0,     0,     0,
      20,    40,     0,    56,     0,     0,   114,   118,     0,   100,
      96,    97,    98,    99,   101,    84,   104,   103,   105,   107,
     108,   110,   109,    85,    86,     0,     0,     0,     0,    92,
      81,     0,     0,     0,    80,     0,    25,    26,     0,    35,
       0,    39,    36,    46,     0,     0,     9,   117,     0,    82,
      88,    89,     0,     0,     0,    90,    91,    78,     0,   119,
       0,     0,     0,    37,     0,    53,    51,     0,    83,     0,
       0,     0,    77,     0,    28,    38,     0,    60,    55,     0,
       0,    52,     0,    94,    93,    24,    59,     0,     0,    87,
      57,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,    -1,  -130,  -130,    -4,  -130,  -130,  -130,    -5,  -130,
    -130,   180,  -104,  -130,  -130,  -130,    50,  -129,   -88,  -130,
    -130,   136,  -130,   142,   143,    88,  -130,  -130,  -130,  -130,
    -130,   211,   184,   -97,   155,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,    60,  -130,   -22,   133,    49,
     -37,  -130
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    72,     2,     3,     8,     9,    10,    13,    73,    19,
      24,    25,   100,   101,   102,   143,   144,   103,    58,    27,
      59,    60,    63,    64,    65,   154,   194,   228,   229,   230,
      16,    44,    22,    45,    46,    47,    48,    49,   199,    50,
      51,    52,   202,    53,   178,   179,    54,    74,    75,    76,
      77,   140
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,   152,   145,   146,    61,     6,    12,     4,   183,     4,
      -6,    84,    21,   185,     7,    32,    79,    23,    85,    82,
     184,    43,   104,    23,    86,    57,   186,   165,    67,   104,
     226,   214,   105,   114,   115,   125,   174,    -6,    80,    62,
       7,   189,    87,   126,   215,     1,   136,   113,     4,   127,
      99,    11,   118,    15,    98,   145,   118,    14,    57,    26,
     107,   108,    18,   138,   139,   141,   216,    43,    20,   119,
     120,   121,   122,   119,   120,   121,   122,    43,   123,   116,
      33,    55,   123,   137,   211,    66,   117,   147,   133,    57,
      57,   169,   170,   171,   172,   158,   200,   201,    68,    81,
      99,   218,    83,   151,    98,   134,   220,   221,   240,   241,
     173,   104,   175,    88,   111,   157,     4,    34,   142,   235,
     148,   188,   149,    43,   150,   181,   227,   153,   193,   180,
     177,   118,    43,    35,   176,   239,   182,    99,   236,   190,
     196,    98,    57,   195,   192,   203,   204,   191,   119,   120,
     121,   122,   118,   198,    15,    36,   208,   123,    37,   207,
      38,   209,    39,    40,    41,   210,   224,    42,   223,   119,
     120,   121,   122,   177,   166,   167,   168,   176,   123,   231,
     219,   233,   234,    99,   104,   213,   222,    98,   232,   237,
      99,   238,   217,   187,    98,   106,   155,    43,    28,    29,
      30,    31,    43,    43,    56,   109,   110,   225,     4,    28,
      29,    30,    31,    57,    28,    29,    30,    31,    99,    89,
      17,    78,    98,   112,    90,    57,     0,    91,     4,    34,
      92,    43,    99,    99,     0,   212,    98,    98,   206,     4,
      34,     4,    28,    29,    30,    31,     4,    28,    29,    30,
      31,   159,   160,   161,   162,   163,   164,     0,   205,     0,
      93,    94,    95,    96,    97,    91,    15,    36,    92,     4,
      37,   132,    38,     0,    39,    40,    41,    15,    36,    42,
       0,    37,     0,    38,     0,    39,    40,    41,     0,     0,
      42,     4,    28,    29,    30,    31,     0,     0,    93,    94,
      95,    96,    97,     0,   118,     0,     0,    15,    36,     0,
       0,    37,     0,    38,     0,    39,    40,    41,     0,     0,
      42,   119,   120,   121,   122,   118,     0,     0,     0,   118,
     123,   135,   128,   129,   130,   131,   124,     0,     0,     0,
     156,   118,   119,   120,   121,   122,   119,   120,   121,   122,
       0,   123,   118,     0,     0,   123,     0,   197,   119,   120,
     121,   122,     4,    28,    29,    30,    31,   123,     0,   119,
     120,   121,   122,     0,     0,     0,     0,     0,   123,     0,
       0,    69,     0,     0,    70,     0,     0,    71
};

static const yytype_int16 yycheck[] =
{
       1,   105,    90,    91,    27,     0,     7,     3,    11,     3,
       9,     9,    13,   142,    13,    20,    38,    18,    16,    41,
      23,    22,    11,    24,    22,    26,    20,   124,    33,    11,
      26,    10,    21,    70,    71,    25,   133,    10,    39,    62,
      13,    23,    40,    33,    23,     8,    83,    69,     3,    39,
      55,    10,    12,    41,    55,   143,    12,     9,    59,    26,
      61,    62,    15,    85,    86,    87,   195,    68,    12,    29,
      30,    31,    32,    29,    30,    31,    32,    78,    38,     9,
      12,    12,    38,    84,   188,    10,    16,    92,    48,    90,
      91,   128,   129,   130,   131,   117,    52,    53,    21,     4,
     105,   198,    22,   104,   105,    40,   203,   204,   237,   238,
     132,    11,   134,    10,    10,   116,     3,     4,    16,   223,
      24,    21,    24,   124,    10,    40,   214,    22,    10,    23,
     135,    12,   133,    20,   135,   232,    17,   142,   226,    24,
      10,   142,   143,    21,   149,    21,    21,   148,    29,    30,
      31,    32,    12,    43,    41,    42,    40,    38,    45,   181,
      47,   183,    49,    50,    51,    17,    10,    54,    18,    29,
      30,    31,    32,   178,   125,   126,   127,   178,    38,    10,
     202,    10,    10,   188,    11,   190,   208,   188,    48,    21,
     195,    21,   196,   143,   195,    59,   108,   198,     4,     5,
       6,     7,   203,   204,    24,    63,    63,   212,     3,     4,
       5,     6,     7,   214,     4,     5,     6,     7,   223,    14,
       9,    37,   223,    68,    19,   226,    -1,    22,     3,     4,
      25,   232,   237,   238,    -1,    25,   237,   238,   178,     3,
       4,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,   118,   119,   120,   121,   122,   123,    -1,    20,    -1,
      55,    56,    57,    58,    59,    22,    41,    42,    25,     3,
      45,    46,    47,    -1,    49,    50,    51,    41,    42,    54,
      -1,    45,    -1,    47,    -1,    49,    50,    51,    -1,    -1,
      54,     3,     4,     5,     6,     7,    -1,    -1,    55,    56,
      57,    58,    59,    -1,    12,    -1,    -1,    41,    42,    -1,
      -1,    45,    -1,    47,    -1,    49,    50,    51,    -1,    -1,
      54,    29,    30,    31,    32,    12,    -1,    -1,    -1,    12,
      38,    18,    34,    35,    36,    37,    44,    -1,    -1,    -1,
      23,    12,    29,    30,    31,    32,    29,    30,    31,    32,
      -1,    38,    12,    -1,    -1,    38,    -1,    17,    29,    30,
      31,    32,     3,     4,     5,     6,     7,    38,    -1,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    65,    66,     3,    64,     0,    13,    67,    68,
      69,    10,    64,    70,     9,    41,    93,    94,    15,    72,
      12,    64,    95,    64,    73,    74,    26,    82,     4,     5,
       6,     7,    71,    12,     4,    20,    42,    45,    47,    49,
      50,    51,    54,    64,    94,    96,    97,    98,    99,   100,
     102,   103,   104,   106,   109,    12,    74,    64,    81,    83,
      84,    27,    62,    85,    86,    87,    10,    71,    21,    22,
      25,    28,    64,    71,   110,   111,   112,   113,    95,   110,
      64,     4,   110,    22,     9,    16,    22,    40,    10,    14,
      19,    22,    25,    55,    56,    57,    58,    59,    64,    71,
      75,    76,    77,    80,    11,    21,    84,    64,    64,    86,
      87,    10,    97,   110,   113,   113,     9,    16,    12,    29,
      30,    31,    32,    38,    44,    25,    33,    39,    34,    35,
      36,    37,    46,    48,    40,    18,   113,    64,   110,   110,
     114,   110,    16,    78,    79,    81,    81,    71,    24,    24,
      10,    64,    75,    22,    88,    88,    23,    64,   110,   111,
     111,   111,   111,   111,   111,    96,   112,   112,   112,   113,
     113,   113,   113,   110,    96,   110,    64,    71,   107,   108,
      23,    40,    17,    11,    23,    80,    20,    79,    21,    23,
      24,    64,    71,    10,    89,    21,    10,    17,    43,   101,
      52,    53,   105,    21,    21,    20,   108,   110,    40,   110,
      17,    75,    25,    71,    10,    23,    80,    67,    96,   110,
      96,    96,   110,    18,    10,    71,    26,    81,    90,    91,
      92,    10,    48,    10,    10,    75,    81,    21,    21,    96,
      80,    80
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    67,    67,    68,    69,    69,
      70,    70,    71,    71,    71,    71,    72,    72,    73,    73,
      74,    75,    75,    75,    76,    77,    78,    78,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    85,    85,    85,
      85,    86,    87,    88,    88,    89,    89,    90,    90,    91,
      92,    93,    94,    95,    95,    96,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,   100,   101,   101,   102,   103,   104,   105,   105,
     106,   107,   107,   108,   108,   109,   110,   110,   110,   110,
     110,   110,   110,   111,   111,   111,   111,   112,   112,   112,
     112,   112,   113,   113,   113,   113,   113,   113,   113,   114,
     114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     3,     2,     0,     4,     2,     0,
       5,     4,     1,     1,     1,     1,     2,     0,     2,     1,
       4,     1,     1,     1,     6,     3,     2,     1,     4,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     5,     3,
       3,     1,     2,     0,     2,     1,     4,     2,     2,     1,
       1,     5,     6,     3,     0,     3,     0,     3,     3,     2,
       1,     1,     3,     3,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     6,     5,     1,
       4,     4,     5,     2,     0,     4,     4,     8,     1,     1,
       5,     2,     1,     4,     4,     2,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     1,     3,     2,     2,     4,     3,     3,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 149 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.id_node) = new Id_Node(yytext);
}
#line 1555 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 153 "bison/pascal.y" /* yacc.c:1646  */
    { 
              (yyval.program_node) = new Program_Node((yyvsp[-2].program_head_node), (yyvsp[-1].routine_node));
              (yyval.program_node)->setLineno(lineno);
          }
#line 1564 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 158 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.program_head_node) = new Program_head_Node((yyvsp[-1].id_node));
                }
#line 1572 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 162 "bison/pascal.y" /* yacc.c:1646  */
    { 
              (yyval.routine_node) = new Routine_Node((yyvsp[-1].routine_head_node), (yyvsp[0].routine_body_node));
              (yyval.routine_node)->setLineno(lineno);
          }
#line 1581 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 165 "bison/pascal.y" /* yacc.c:1646  */
    {//empty
              (yyval.routine_node) = nullptr;
          }
#line 1589 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 169 "bison/pascal.y" /* yacc.c:1646  */
    {
                   (yyval.routine_head_node) = new Routine_head_Node((yyvsp[-3].const_part_node), (yyvsp[-2].type_part_node), (yyvsp[-1].var_part_node), (yyvsp[0].routine_part_node));
                   (yyval.routine_head_node)->setLineno(lineno);
               }
#line 1598 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 174 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.const_part_node) = new Const_part_Node((yyvsp[0].const_expr_list_node));
             }
#line 1606 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 177 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.const_part_node) = nullptr;}
#line 1612 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 180 "bison/pascal.y" /* yacc.c:1646  */
    {
                      (yyval.const_expr_list_node) = new Const_expr_list_Node((yyvsp[-4].const_expr_list_node), (yyvsp[-3].id_node), (yyvsp[-1].const_value_node));
                      (yyval.const_expr_list_node)->setLineno(lineno);
                  }
#line 1621 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 184 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.const_expr_list_node) = new Const_expr_list_Node((yyvsp[-3].id_node), (yyvsp[-1].const_value_node));
    (yyval.const_expr_list_node)->setLineno(lineno);
}
#line 1630 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 189 "bison/pascal.y" /* yacc.c:1646  */
    {
                  /* const_value can be ConstInt_Node or else
                     but all is Const_value_Node
                   */
                  (yyval.const_value_node) = new ConstInt_Node(atoi(yytext));
                  (yyval.const_value_node)->setLineno(lineno);
              }
#line 1642 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 196 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.const_value_node) = new ConstDouble_Node(atof(yytext));
    (yyval.const_value_node)->setLineno(lineno);
}
#line 1651 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 200 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.const_value_node) = new ConstChar_Node(yytext[0]);
    (yyval.const_value_node)->setLineno(lineno);
}
#line 1660 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 204 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.const_value_node) = new ConstStr_Node(yytext);
    (yyval.const_value_node)->setLineno(lineno);
}
#line 1669 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 209 "bison/pascal.y" /* yacc.c:1646  */
    {
               (yyval.type_part_node) = new Type_part_Node((yyvsp[0].type_decl_list_node));
               (yyval.type_part_node)->setLineno(lineno);
           }
#line 1678 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 213 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.type_part_node) = nullptr;}
#line 1684 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 215 "bison/pascal.y" /* yacc.c:1646  */
    {
                      (yyval.type_decl_list_node) = new Type_decl_list_Node((yyvsp[-1].type_decl_list_node), (yyvsp[0].type_definition_node));
                      (yyval.type_decl_list_node)->setLineno(lineno);
                  }
#line 1693 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 219 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.type_decl_list_node) = new Type_decl_list_Node((yyvsp[0].type_definition_node));
    (yyval.type_decl_list_node)->setLineno(lineno);
}
#line 1702 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 224 "bison/pascal.y" /* yacc.c:1646  */
    { 
                      (yyval.type_definition_node) = new Type_definition_Node((yyvsp[-3].id_node), (yyvsp[-1].type_decl_node));
                      (yyval.type_definition_node)->setLineno(lineno);  
                  }
#line 1711 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 229 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.type_decl_node) = (yyvsp[0].simple_type_decl_node);}
#line 1717 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 230 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.type_decl_node) = (yyvsp[0].array_type_decl_node);}
#line 1723 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 231 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.type_decl_node) = (yyvsp[0].record_type_decl_node);}
#line 1729 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 233 "bison/pascal.y" /* yacc.c:1646  */
    { 
                      (yyval.array_type_decl_node) = new Array_type_decl_Node((yyvsp[-3].simple_type_decl_node), (yyvsp[0].type_decl_node));
                      (yyval.array_type_decl_node)->setLineno(lineno);
                  }
#line 1738 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 238 "bison/pascal.y" /* yacc.c:1646  */
    {
                       (yyval.record_type_decl_node) = new Record_type_decl_Node((yyvsp[-1].field_decl_list_node));
                       (yyval.record_type_decl_node)->setLineno(lineno);
                   }
#line 1747 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 243 "bison/pascal.y" /* yacc.c:1646  */
    {
                      (yyval.field_decl_list_node) = new Field_decl_list_Node((yyvsp[-1].field_decl_list_node), (yyvsp[0].field_decl_node));
                      (yyval.field_decl_list_node)->setLineno(lineno);
                  }
#line 1756 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 247 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.field_decl_list_node) = new Field_decl_list_Node((yyvsp[0].field_decl_node));
    (yyval.field_decl_list_node)->setLineno(lineno);
}
#line 1765 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 252 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.field_decl_node) = new Field_decl_Node((yyvsp[-3].name_list_node), (yyvsp[-1].type_decl_node));
                 (yyval.field_decl_node)->setLineno(lineno);
             }
#line 1774 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 257 "bison/pascal.y" /* yacc.c:1646  */
    {
                       (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::INT);
                       (yyval.simple_type_decl_node)->setLineno(lineno);
                   }
#line 1783 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 261 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::REAL);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1792 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 265 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::CHAR);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1801 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 269 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::STRING);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1810 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 273 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new System_type_decl_Node(System_type_decl_Node::BOOL);
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1819 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 277 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Alias_type_decl_Node((yyvsp[0].id_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1828 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 281 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Enum_type_decl_Node((yyvsp[-1].name_list_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1837 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 285 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(false, (yyvsp[-2].const_value_node), false, (yyvsp[0].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1846 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 290 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(true, (yyvsp[-2].const_value_node), false, (yyvsp[0].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1855 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 295 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Subrange_const_value_type_decl_Node(true, (yyvsp[-3].const_value_node), true, (yyvsp[0].const_value_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1864 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 298 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.simple_type_decl_node) = new Subrange_id_type_decl_Node((yyvsp[-2].id_node), (yyvsp[0].id_node));
    (yyval.simple_type_decl_node)->setLineno(lineno);
}
#line 1873 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 303 "bison/pascal.y" /* yacc.c:1646  */
    {
                (yyval.name_list_node) = new Name_list_Node((yyvsp[-2].name_list_node), (yyvsp[0].id_node));
                (yyval.name_list_node)->setLineno(lineno);
            }
#line 1882 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 306 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.name_list_node) = new Name_list_Node((yyvsp[0].id_node));
                (yyval.name_list_node)->setLineno(lineno);
            }
#line 1891 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 311 "bison/pascal.y" /* yacc.c:1646  */
    {
               (yyval.var_part_node) = new Var_part_Node((yyvsp[0].var_decl_list_node));
               (yyval.var_part_node)->setLineno(lineno);
           }
#line 1900 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 314 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval.var_part_node) = nullptr;
           }
#line 1907 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 317 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.var_decl_list_node) = new Var_decl_list_Node((yyvsp[-1].var_decl_list_node), (yyvsp[0].var_decl_node));
                }
#line 1915 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 320 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval.var_decl_list_node) = new Var_decl_list_Node((yyvsp[0].var_decl_node));}
#line 1921 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 322 "bison/pascal.y" /* yacc.c:1646  */
    {
               (yyval.var_decl_node) = new Var_decl_Node((yyvsp[-3].name_list_node), (yyvsp[-1].type_decl_node));
               (yyval.var_decl_node)->setLineno(lineno);
           }
#line 1930 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 327 "bison/pascal.y" /* yacc.c:1646  */
    {
                   (yyval.routine_part_node) = new Routine_part_Node((yyvsp[-1].routine_part_node), (Function_decl_Node*)(yyvsp[0].function_decl_node));
                   (yyval.routine_part_node)->setLineno(lineno);
               }
#line 1939 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 331 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.routine_part_node) = new Routine_part_Node((yyvsp[-1].routine_part_node), (Procedure_decl_Node*)(yyvsp[0].procedure_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
#line 1948 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 335 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.routine_part_node) = new Routine_part_Node((Function_decl_Node*)(yyvsp[0].function_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
#line 1957 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 339 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.routine_part_node) = new Routine_part_Node((Procedure_decl_Node*)(yyvsp[0].procedure_decl_node));
    (yyval.routine_part_node)->setLineno(lineno);
}
#line 1966 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 344 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.function_decl_node) = new Function_decl_Node((yyvsp[-3].id_node), (yyvsp[-2].parameters_node), (yyvsp[0].simple_type_decl_node));
                    (yyval.function_decl_node)->setLineno(lineno);
                }
#line 1975 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 349 "bison/pascal.y" /* yacc.c:1646  */
    { 
                    (yyval.procedure_decl_node) = new Procedure_decl_Node((yyvsp[-4].id_node), (yyvsp[-3].parameters_node), (yyvsp[-1].routine_node));
                    (yyval.procedure_decl_node)->setLineno(lineno);
                }
#line 1984 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 354 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.parameters_node) = new Parameters_Node((yyvsp[-1].para_decl_list_node));
                 (yyval.parameters_node) -> setLineno(lineno);
             }
#line 1993 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 358 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.parameters_node) = nullptr;}
#line 1999 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 360 "bison/pascal.y" /* yacc.c:1646  */
    {
                     (yyval.para_decl_list_node) = new Para_decl_list_Node((yyvsp[-2].para_decl_list_node), (yyvsp[0].para_type_list_node));
                     (yyval.para_decl_list_node) -> setLineno(lineno);
                 }
#line 2008 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 363 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.para_decl_list_node) = nullptr;}
#line 2014 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 365 "bison/pascal.y" /* yacc.c:1646  */
    { 
                     (yyval.para_type_list_node) = new Para_type_list_Node((Var_para_list_Node *)(yyvsp[-2].var_para_list_node), (yyvsp[0].simple_type_decl_node));
                     (yyval.para_type_list_node)->setLineno(lineno);
                 }
#line 2023 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 369 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.para_type_list_node) = new Para_type_list_Node((Val_para_list_Node *)(yyvsp[-2].val_para_list_node), (yyvsp[0].simple_type_decl_node));
    (yyval.para_type_list_node)->setLineno(lineno);
}
#line 2032 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 374 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.var_para_list_node) = new Var_para_list_Node((yyvsp[0].name_list_node));
                    (yyval.var_para_list_node)->setLineno(lineno);
                }
#line 2041 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 379 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.val_para_list_node) = new Val_para_list_Node((yyvsp[0].name_list_node));
                    (yyval.val_para_list_node)->setLineno(lineno);
                }
#line 2050 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 384 "bison/pascal.y" /* yacc.c:1646  */
    {
                   (yyval.routine_body_node) = new Routine_body_Node((yyvsp[0].compound_stmt_node));
                   (yyval.routine_body_node)->setLineno(lineno);
               }
#line 2059 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 389 "bison/pascal.y" /* yacc.c:1646  */
    {
                    (yyval.compound_stmt_node) = new Compound_stmt_Node((yyvsp[-1].stmt_list_node));
                    (yyval.compound_stmt_node)->setLineno(lineno);
                }
#line 2068 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 394 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.stmt_list_node) = new Stmt_list_Node((yyvsp[-2].stmt_list_node), (yyvsp[-1].stmt_node));
                (yyval.stmt_list_node)->setLineno(lineno);  
            }
#line 2077 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 397 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.stmt_list_node) = nullptr;}
#line 2083 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 399 "bison/pascal.y" /* yacc.c:1646  */
    { 
           (yyval.stmt_node) = new Stmt_Node((yyvsp[-2].constInt), (yyvsp[0].non_label_stmt_node));
           (yyval.stmt_node)->setLineno(lineno); 
       }
#line 2092 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 402 "bison/pascal.y" /* yacc.c:1646  */
    {
           (yyval.stmt_node) = new Stmt_Node((yyvsp[0].non_label_stmt_node));
           (yyval.stmt_node)->setLineno(lineno);
       }
#line 2101 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 407 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].assign_stmt_node);}
#line 2107 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 408 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].proc_stmt_node);}
#line 2113 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 409 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].compound_stmt_node);}
#line 2119 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 410 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].if_stmt_node);}
#line 2125 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 411 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].repeat_stmt_node);}
#line 2131 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 412 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].while_stmt_node);}
#line 2137 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 413 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].for_stmt_node);}
#line 2143 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 414 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].case_stmt_node);}
#line 2149 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 415 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval.non_label_stmt_node) = (yyvsp[0].goto_stmt_node);}
#line 2155 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 417 "bison/pascal.y" /* yacc.c:1646  */
    { 
                  (yyval.assign_stmt_node) = new Assign_id_stmt_Node((yyvsp[-2].id_node), (yyvsp[0].expression_node));
                  (yyval.assign_stmt_node)->setLineno(lineno);
              }
#line 2164 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 421 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.assign_stmt_node) = new Assign_arr_stmt_Node((yyvsp[-5].id_node), (yyvsp[-3].expression_node), (yyvsp[0].expression_node));
    (yyval.assign_stmt_node)->setLineno(lineno);
}
#line 2173 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 425 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.assign_stmt_node) = new Assign_record_stmt_Node((yyvsp[-4].id_node), (yyvsp[-2].id_node), (yyvsp[0].expression_node));
    (yyval.assign_stmt_node)->setLineno(lineno);
}
#line 2182 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 430 "bison/pascal.y" /* yacc.c:1646  */
    {
                (yyval.proc_stmt_node) = new Proc_stmt_Node((yyvsp[0].id_node));
                (yyval.proc_stmt_node)->setLineno(lineno);
            }
#line 2191 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 434 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.proc_stmt_node) = new Proc_stmt_Node((yyvsp[-3].id_node), (yyvsp[-1].args_list_node));
    (yyval.proc_stmt_node)->setLineno(lineno);
}
#line 2200 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 438 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.proc_stmt_node) = new Read_stmt_Node((yyvsp[-1].factor_node));
}
#line 2208 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 442 "bison/pascal.y" /* yacc.c:1646  */
    { 
              (yyval.if_stmt_node) = new If_stmt_Node((yyvsp[-3].expression_node), (yyvsp[-1].stmt_node), (yyvsp[0].else_clause_node));
              (yyval.if_stmt_node)->setLineno(lineno);
          }
#line 2217 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 447 "bison/pascal.y" /* yacc.c:1646  */
    {
                  (yyval.else_clause_node) = new Else_clause_Node((yyvsp[0].stmt_node));
                  (yyval.else_clause_node)->setLineno(lineno);
              }
#line 2226 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 451 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.else_clause_node) = nullptr;
}
#line 2234 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 455 "bison/pascal.y" /* yacc.c:1646  */
    { 
                  (yyval.repeat_stmt_node) = new Repeat_stmt_Node((yyvsp[-2].stmt_list_node), (yyvsp[0].expression_node));
                  (yyval.repeat_stmt_node)->setLineno(lineno);
              }
#line 2243 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 460 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.while_stmt_node) = new While_stmt_Node((yyvsp[-2].expression_node), (yyvsp[0].stmt_node));
                 (yyval.while_stmt_node)->setLineno(lineno);
             }
#line 2252 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 465 "bison/pascal.y" /* yacc.c:1646  */
    { 
               (yyval.for_stmt_node) = new For_stmt_Node((yyvsp[-6].id_node), (yyvsp[-4].expression_node), (yyvsp[-3].direction_node), (yyvsp[-2].expression_node), (yyvsp[0].stmt_node));
               (yyval.for_stmt_node)->setLineno(lineno);
           }
#line 2261 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 470 "bison/pascal.y" /* yacc.c:1646  */
    {
                (yyval.direction_node) = new Direction_Node(true);
                (yyval.direction_node)->setLineno(lineno);
            }
#line 2270 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 474 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.direction_node) = new Direction_Node(false);
    (yyval.direction_node)->setLineno(lineno);
}
#line 2279 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 479 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.case_stmt_node) = new Case_stmt_Node((yyvsp[-3].expression_node), (yyvsp[-1].case_expr_list_node));
                (yyval.case_stmt_node)->setLineno(lineno);
            }
#line 2288 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 484 "bison/pascal.y" /* yacc.c:1646  */
    { 
                     (yyval.case_expr_list_node) = new Case_expr_list_Node((yyvsp[-1].case_expr_list_node), (yyvsp[0].case_expr_node));
                 }
#line 2296 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 487 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.case_expr_list_node) = new Case_expr_list_Node((yyvsp[0].case_expr_node));
}
#line 2304 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 491 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.case_expr_node) = new Case_const_val_expr_Node((yyvsp[-3].const_value_node), (yyvsp[-1].stmt_node));
                (yyval.case_expr_node)->setLineno(lineno);
            }
#line 2313 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 495 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.case_expr_node) = new Case_id_expr_Node((yyvsp[-3].id_node), (yyvsp[-1].stmt_node));
    (yyval.case_expr_node)->setLineno(lineno);
}
#line 2322 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 500 "bison/pascal.y" /* yacc.c:1646  */
    { 
                (yyval.goto_stmt_node) = new Goto_stmt_Node((yyvsp[0].constInt));
                (yyval.goto_stmt_node)->setLineno(lineno);
            }
#line 2331 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 514 "bison/pascal.y" /* yacc.c:1646  */
    {
                 (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::GE, (yyvsp[0].expr_node));
                 (yyval.expression_node)->setLineno(lineno);
             }
#line 2340 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 518 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::GT, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2349 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 522 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::LE, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2358 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 526 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::LT, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2367 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 530 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::EQ, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2376 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 534 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expression_node) = new Expression_Node((yyvsp[-2].expression_node), Expression_Node::NEQ, (yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2385 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 538 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expression_node) = new Expression_Node((yyvsp[0].expr_node));
    (yyval.expression_node)->setLineno(lineno);
}
#line 2394 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 543 "bison/pascal.y" /* yacc.c:1646  */
    {
           (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::ADD, (yyvsp[0].expr_node));
           (yyval.expr_node)->setLineno(lineno);
       }
#line 2403 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 547 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::SUB, (yyvsp[0].expr_node));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2412 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 551 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::OR, (yyvsp[0].expr_node));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2421 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 555 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = (yyvsp[0].expr_node);
}
#line 2429 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 559 "bison/pascal.y" /* yacc.c:1646  */
    {
           (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::MUL, new Expr_Node((yyvsp[0].factor_node)));
           (yyval.expr_node)->setLineno(lineno);
       }
#line 2438 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 563 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::DIV, new Expr_Node((yyvsp[0].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2447 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 567 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::MOD, new Expr_Node((yyvsp[0].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2456 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 571 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[-2].expr_node), Expr_Node::AND, new Expr_Node((yyvsp[0].factor_node)));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2465 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 575 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.expr_node) = new Expr_Node((yyvsp[0].factor_node));
    (yyval.expr_node)->setLineno(lineno);
}
#line 2474 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 580 "bison/pascal.y" /* yacc.c:1646  */
    {
              (yyval.factor_node) = new Factor_id_Node((yyvsp[0].id_node));
              (yyval.factor_node)->setLineno(lineno);
          }
#line 2483 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 584 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = (yyvsp[0].const_value_node);
    //const_val is factor
}
#line 2492 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 588 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = (yyvsp[-1].expression_node);
    //expression is factor
}
#line 2501 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 592 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = new Factor_unary_Node(Factor_unary_Node::NOT, (yyvsp[0].factor_node));
    (yyval.factor_node)->setLineno(lineno);
}
#line 2510 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 596 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = new Factor_unary_Node(Factor_unary_Node::MINUS, (yyvsp[0].factor_node));
    (yyval.factor_node)->setLineno(lineno);
}
#line 2519 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 600 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = new Factor_arr_Node((yyvsp[-3].id_node), (yyvsp[-1].expression_node));
    (yyval.factor_node)->setLineno(lineno);
}
#line 2528 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 604 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.factor_node) = new Factor_record_Node((yyvsp[-2].id_node), (yyvsp[0].id_node));
    (yyval.factor_node)->setLineno(lineno);
}
#line 2537 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 609 "bison/pascal.y" /* yacc.c:1646  */
    {
                  (yyval.args_list_node) = new Args_list_Node((yyvsp[-2].args_list_node), (yyvsp[0].expression_node));
                  (yyval.args_list_node)->setLineno(lineno);
              }
#line 2546 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 613 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval.args_list_node) = new Args_list_Node((yyvsp[0].expression_node));
    (yyval.args_list_node)->setLineno(lineno);
}
#line 2555 "pascal.tab.c" /* yacc.c:1646  */
    break;


#line 2559 "pascal.tab.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 618 "bison/pascal.y" /* yacc.c:1906  */


int yyerror(char * message){
    fprintf(listing, "yyerror in pascal.y called\n");
    fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
    fprintf(listing,"Current token: ");
    printToken(yychar,yytext);
    Error = TRUE;
    return 0;
}

TreeNode * do_parse(void){
    yyparse();
    return savedTree;
}
