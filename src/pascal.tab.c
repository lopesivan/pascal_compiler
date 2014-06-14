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
#include "globals.h"
#include "util.h"
#include "scan.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree = NULL; /* stores syntax tree for later return */

extern "C"{
    int yylex(void);
    int yyerror(char *message);
    char* yytext;
}

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

/* Copy the second part of user declarations.  */

#line 200 "pascal.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  136
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  257

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
       0,    31,    31,    38,    41,    40,    52,    58,    60,    69,
      70,    73,    72,    92,    92,   100,   105,   110,   115,   122,
     123,   124,   133,   135,   135,   143,   144,   145,   146,   152,
     153,   163,   164,   170,   171,   172,   173,   174,   175,   179,
     180,   187,   194,   201,   201,   211,   226,   231,   232,   233,
     243,   244,   250,   260,   270,   271,   273,   272,   284,   283,
     294,   295,   296,   306,   308,   314,   320,   321,   322,   323,
     324,   333,   334,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   351,   351,   361,   361,   370,   373,   370,
     384,   385,   385,   393,   395,   402,   402,   403,   410,   417,
     417,   429,   430,   431,   438,   447,   448,   454,   454,   462,
     478,   485,   492,   499,   506,   513,   520,   522,   529,   536,
     543,   545,   553,   560,   567,   574,   576,   580,   582,   584,
     586,   588,   588,   596,   596,   606,   616
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INTEGER", "REAL", "CHAR",
  "STRING", "PROGRAM", "DOT", "SEMI", "COMMA", "EQUAL", "CONST", "ARRAY",
  "TYPE", "LB", "RB", "OF", "RECORD", "END", "COLON", "LP", "RP", "DOTDOT",
  "MINUS", "VAR", "FUNCTION", "NOT", "GE", "GT", "LE", "LT", "PLUS", "MUL",
  "DIV", "AND", "MOD", "UNEQUAL", "OR", "ASSIGN", "P_BEGIN", "IF", "ELSE",
  "THEN", "REPEAT", "UNTIL", "WHILE", "DO", "FOR", "GOTO", "CASE", "TO",
  "DOWNTO", "READ", "TYPEINTEGER", "TYPEREAL", "TYPECHAR", "TYPESTRING",
  "TYPEBOOL", "P_FALSE", "P_TRUE", "PROCEDURE", "$accept", "program",
  "program_head", "@1", "routine", "routine_head", "const_part",
  "const_expr_list", "$@2", "$@3", "const_value", "type_part",
  "type_decl_list", "type_definition", "$@4", "type_decl",
  "array_type_decl", "record_type_decl", "field_decl_list", "field_decl",
  "simple_type_decl", "$@5", "name_list", "var_part", "var_decl_list",
  "var_decl", "routine_part", "function_decl", "$@6", "procedure_decl",
  "$@7", "parameters", "para_decl_list", "para_type_list", "var_para_list",
  "val_para_list", "routine_body", "compound_stmt", "stmt_list", "stmt",
  "non_label_stmt", "assign_stmt", "$@8", "$@9", "$@10", "@11",
  "proc_stmt", "$@12", "if_stmt", "else_clause", "repeat_stmt",
  "while_stmt", "for_stmt", "$@13", "direction", "case_stmt",
  "case_expr_list", "case_expr", "$@14", "goto_stmt", "expression", "expr",
  "term", "factor", "$@15", "$@16", "args_list", YY_NULLPTR
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

#define YYPACT_NINF -176

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-176)))

#define YYTABLE_NINF -134

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,    16,    60,    49,  -176,  -176,    61,    56,    38,    66,
      75,  -176,    86,  -176,  -176,  -176,  -176,    89,    80,  -176,
      82,  -176,    92,  -176,    89,  -176,   105,   -10,   259,    97,
       4,    99,  -176,   275,  -176,   275,   125,   132,   275,   107,
    -176,   128,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,   133,  -176,  -176,    65,   105,  -176,   141,   145,   -10,
    -176,  -176,  -176,  -176,  -176,  -176,   142,   259,   116,   137,
     156,   144,   147,    27,   275,   275,   275,  -176,   202,    72,
     235,  -176,   113,   174,  -176,  -176,   218,   275,  -176,    68,
     167,    68,  -176,  -176,  -176,  -176,  -176,  -176,   161,   275,
     275,   170,   275,  -176,   159,   178,   229,  -176,  -176,   275,
     275,   275,   275,   275,   275,   127,   275,   275,   275,   275,
     275,   275,   275,   275,   127,   139,   310,   168,   169,   179,
     105,   105,   259,  -176,  -176,  -176,  -176,  -176,   175,   192,
    -176,  -176,  -176,  -176,   200,   185,   185,  -176,     3,   245,
    -176,     3,     5,   275,   205,  -176,    72,    72,    72,    72,
      72,    72,   172,   235,   235,   235,  -176,  -176,  -176,  -176,
       3,  -176,   275,  -176,   199,   286,  -176,  -176,   189,    44,
       9,  -176,   111,     7,   214,   259,  -176,  -176,  -176,   221,
     211,   183,   203,   275,  -176,   256,  -176,   127,  -176,    -7,
     223,   127,  -176,  -176,   236,   234,  -176,  -176,    68,  -176,
     212,  -176,    17,    44,    70,   275,   275,     3,  -176,  -176,
    -176,  -176,   275,   127,   243,  -176,   237,   244,   259,  -176,
      11,  -176,  -176,   274,     3,     3,   197,   285,  -176,    68,
    -176,  -176,   105,   287,  -176,   278,   280,  -176,   127,  -176,
    -176,   287,    44,    44,  -176,  -176,  -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    10,     4,     1,     0,     0,     0,    20,
       0,    13,     9,     2,    71,     6,    68,     0,    48,     5,
       0,    11,     0,    23,    19,    22,     0,     0,     0,     0,
      90,     0,    69,     0,    71,     0,     0,     0,     0,     0,
      76,     0,    73,    74,    75,    77,    78,    79,    80,    81,
      82,     0,    21,    46,     0,    47,    50,     0,     0,     8,
      54,    55,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,     0,   126,     0,     0,     0,   127,     0,   116,
     120,   125,     0,     0,    99,   109,     0,     0,    70,     0,
       0,     0,    49,    56,    58,    52,    53,    14,     0,     0,
       0,     0,     0,    72,     0,     0,     0,   130,   129,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,    33,    34,    35,    36,    37,     0,     0,
      26,    27,    25,    45,     0,    61,    61,    12,    84,     0,
      88,   136,     0,     0,     0,   128,   114,   110,   111,   112,
     113,   115,    96,   118,   117,   119,   121,   122,   124,   123,
      97,    98,     0,   107,     0,     0,   105,    93,     0,     0,
       0,    31,     0,     0,     0,     0,    24,    51,    63,     0,
       0,     0,     0,     0,    92,     0,   134,     0,    94,     0,
       0,     0,   103,   104,     0,     0,    29,    30,     0,    39,
       0,    40,     0,     0,    10,     0,     0,   135,   132,    95,
     101,   102,     0,     0,     0,    44,     0,     0,     0,    41,
       0,    60,    57,     0,    86,    89,     0,     0,   106,     0,
      32,    42,     0,    67,    62,     0,     0,    59,     0,   108,
      28,    66,     0,     0,   100,    64,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,  -176,    88,  -176,  -176,  -176,  -176,  -176,
     -28,  -176,  -176,   272,  -176,   -90,  -176,  -176,  -176,   124,
    -175,  -176,  -123,  -176,  -176,   250,  -176,   260,  -176,   261,
    -176,   176,  -176,  -176,  -176,  -176,  -176,   313,   284,  -113,
     251,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,   149,  -176,  -176,
     -32,   198,    -3,   -66,  -176,  -176,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,     7,     8,     9,    12,    29,    20,
      77,    18,    24,    25,    51,   139,   140,   141,   180,   181,
     142,   178,    54,    27,    55,    56,    59,    60,   145,    61,
     146,   189,   212,   244,   245,   246,    15,    40,    22,    41,
      42,    43,    68,    69,    70,   192,    44,    71,    45,   198,
      46,    47,    48,   125,   222,    49,   175,   176,   200,    50,
      78,    79,    80,    81,   104,   105,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,   144,   162,    83,   205,   109,    86,   182,   183,   107,
     108,   171,    53,   -87,    53,   109,   193,    57,    90,     4,
     -85,   127,   110,   111,   112,   113,   -91,   230,   194,   206,
     209,   114,   110,   111,   112,   113,  -133,   242,   232,    98,
     231,   114,   106,  -131,   -83,   220,   221,   128,    62,    63,
      64,    65,    58,   166,   167,   168,   169,   182,    -7,     1,
       5,   138,     6,   138,    11,    13,   131,   148,   149,   132,
     151,   128,    62,    63,    64,    65,    90,   255,   256,    14,
      -7,    17,   129,     6,   219,    19,    91,   130,   224,    21,
     131,   170,    23,   132,    28,    30,    31,   116,   174,   133,
     134,   135,   136,   137,   184,   117,    26,   243,    53,    67,
     237,   118,    32,   163,   164,   165,    30,    31,   227,   251,
      72,   195,    90,   133,   134,   135,   136,   137,    84,    87,
      30,    31,   208,    14,    33,   254,    85,    34,    88,    35,
     199,    36,    37,    38,    93,    89,    39,   174,    94,   250,
      30,   138,    97,   100,    14,    33,    99,   211,    34,   123,
      35,   217,    36,    37,    38,   101,   102,    39,    14,    33,
     143,   147,    34,   150,    35,   153,    36,    37,    38,   172,
     138,    39,   229,   234,   235,   138,   109,   154,    14,    33,
     236,   177,    34,   -43,    35,   179,    36,    37,    38,   185,
     241,    39,   186,   110,   111,   112,   113,   188,   196,   109,
     187,   138,   114,   204,   109,   197,    62,    63,    64,    65,
     201,   214,   124,   215,   138,   138,   110,   111,   112,   113,
     109,   110,   111,   112,   113,   114,   126,   228,   210,   225,
     114,   109,   213,   216,   223,   248,   115,   110,   111,   112,
     113,   226,   155,   238,   240,   239,   114,   109,   110,   111,
     112,   113,   191,    62,    63,    64,    65,   114,   109,   119,
     120,   121,   122,   218,   110,   111,   112,   113,    73,    62,
      63,    64,    65,   114,   247,   110,   111,   112,   113,   173,
      62,    63,    64,    65,   114,   249,    52,    74,    90,   252,
      75,   253,   233,    76,   207,    92,   202,   156,   157,   158,
     159,   160,   161,   173,    62,    63,    64,    65,    82,    95,
      96,    16,   190,   103,   203
};

static const yytype_uint8 yycheck[] =
{
      28,    91,   115,    35,   179,    12,    38,   130,   131,    75,
      76,   124,     3,     9,     3,    12,    11,    27,    11,     3,
      16,    87,    29,    30,    31,    32,    22,    10,    23,    20,
      23,    38,    29,    30,    31,    32,     9,    26,   213,    67,
      23,    38,    74,    16,    40,    52,    53,     3,     4,     5,
       6,     7,    62,   119,   120,   121,   122,   180,     9,     8,
       0,    89,    13,    91,     3,     9,    22,    99,   100,    25,
     102,     3,     4,     5,     6,     7,    11,   252,   253,    41,
      10,    15,    14,    13,   197,    10,    21,    19,   201,     3,
      22,   123,     3,    25,    12,     3,     4,    25,   126,    55,
      56,    57,    58,    59,   132,    33,    26,   230,     3,    12,
     223,    39,    20,   116,   117,   118,     3,     4,   208,   242,
      21,   153,    11,    55,    56,    57,    58,    59,     3,    22,
       3,     4,    21,    41,    42,   248,     4,    45,    10,    47,
     172,    49,    50,    51,     3,    12,    54,   175,     3,   239,
       3,   179,    10,    16,    41,    42,    40,   185,    45,    46,
      47,   193,    49,    50,    51,     9,    22,    54,    41,    42,
       3,    10,    45,     3,    47,    16,    49,    50,    51,    40,
     208,    54,   210,   215,   216,   213,    12,     9,    41,    42,
     222,    23,    45,    24,    47,    16,    49,    50,    51,    24,
     228,    54,    10,    29,    30,    31,    32,    22,     3,    12,
      10,   239,    38,    24,    12,    43,     4,     5,     6,     7,
      21,    10,    48,    40,   252,   253,    29,    30,    31,    32,
      12,    29,    30,    31,    32,    38,    18,    25,    24,     3,
      38,    12,    21,    40,    21,    48,    44,    29,    30,    31,
      32,    17,    23,    10,    10,    18,    38,    12,    29,    30,
      31,    32,    17,     4,     5,     6,     7,    38,    12,    34,
      35,    36,    37,    17,    29,    30,    31,    32,     3,     4,
       5,     6,     7,    38,    10,    29,    30,    31,    32,     3,
       4,     5,     6,     7,    38,    10,    24,    22,    11,    21,
      25,    21,   214,    28,   180,    55,    20,   109,   110,   111,
     112,   113,   114,     3,     4,     5,     6,     7,    34,    59,
      59,     8,   146,    72,   175
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    64,    65,     3,     0,    13,    67,    68,    69,
      66,     3,    70,     9,    41,    99,   100,    15,    74,    10,
      72,     3,   101,     3,    75,    76,    26,    86,    12,    71,
       3,     4,    20,    42,    45,    47,    49,    50,    51,    54,
     100,   102,   103,   104,   109,   111,   113,   114,   115,   118,
     122,    77,    76,     3,    85,    87,    88,    27,    62,    89,
      90,    92,     4,     5,     6,     7,    73,    12,   105,   106,
     107,   110,    21,     3,    22,    25,    28,    73,   123,   124,
     125,   126,   101,   123,     3,     4,   123,    22,    10,    12,
      11,    21,    88,     3,     3,    90,    92,    10,    73,    40,
      16,     9,    22,   103,   127,   128,   123,   126,   126,    12,
      29,    30,    31,    32,    38,    44,    25,    33,    39,    34,
      35,    36,    37,    46,    48,   116,    18,   126,     3,    14,
      19,    22,    25,    55,    56,    57,    58,    59,    73,    78,
      79,    80,    83,     3,    78,    91,    93,    10,   123,   123,
       3,   123,   129,    16,     9,    23,   124,   124,   124,   124,
     124,   124,   102,   125,   125,   125,   126,   126,   126,   126,
     123,   102,    40,     3,    73,   119,   120,    23,    84,    16,
      81,    82,    85,    85,    73,    24,    10,    10,    22,    94,
      94,    17,   108,    11,    23,   123,     3,    43,   112,   123,
     121,    21,    20,   120,    24,    83,    20,    82,    21,    23,
      24,    73,    95,    21,    10,    40,    40,   123,    17,   102,
      52,    53,   117,    21,   102,     3,    17,    78,    25,    73,
      10,    23,    83,    67,   123,   123,   123,   102,    10,    18,
      10,    73,    26,    85,    96,    97,    98,    10,    48,    10,
      78,    85,    21,    21,   102,    83,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    66,    65,    67,    67,    68,    69,
      69,    71,    70,    72,    70,    73,    73,    73,    73,    74,
      74,    75,    75,    77,    76,    78,    78,    78,    79,    80,
      81,    81,    82,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    84,    83,    85,    85,    86,    86,    87,
      87,    88,    89,    89,    89,    89,    91,    90,    93,    92,
      94,    94,    95,    95,    96,    96,    97,    98,    99,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   105,   104,   106,   104,   107,   108,   104,
     109,   110,   109,   109,   111,   112,   112,   113,   114,   116,
     115,   117,   117,   118,   119,   119,   120,   121,   120,   122,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   126,   126,   126,   126,
     126,   127,   126,   128,   126,   129,   129
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     0,     4,     2,     0,     4,     2,
       0,     0,     6,     0,     5,     1,     1,     1,     1,     2,
       0,     2,     1,     0,     5,     1,     1,     1,     6,     3,
       2,     1,     4,     1,     1,     1,     1,     1,     1,     3,
       3,     4,     5,     0,     4,     3,     1,     2,     0,     2,
       1,     4,     2,     2,     1,     1,     0,     6,     0,     7,
       3,     0,     3,     0,     3,     3,     2,     1,     1,     3,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     0,     7,     0,     0,     7,
       1,     0,     5,     4,     5,     2,     0,     4,     4,     0,
       9,     1,     1,     5,     2,     1,     4,     0,     5,     2,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     1,     1,     3,     2,
       2,     0,     5,     0,     4,     3,     1
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
#line 32 "bison/pascal.y" /* yacc.c:1646  */
    { 
    puts("[debug] match program");
    (yyval) = newModuleNode(ProgramK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[-1]);
    (yyval)->lineno=lineno;
}
#line 1492 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 41 "bison/pascal.y" /* yacc.c:1646  */
    { 
    puts("[debug] before copyString");
    copyString(yytext);
    puts("[debug] after copyString");
    (yyval)->attr.name = copyString(yytext);
    puts("[debug] match program header");
    printf("[debug] name: %s\n", (yyval)->attr.name);
}
#line 1505 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 53 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newModuleNode(RoutineK);
    (yyval)->child[0] = (yyvsp[-1]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->lineno=lineno;
}
#line 1515 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 58 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1521 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 61 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval) = newModuleNode(Routine_headK);
    (yyval)->child[0]=(yyvsp[-3]);
    (yyval)->child[1]=(yyvsp[-2]);
    (yyval)->child[2]=(yyvsp[-1]);
    (yyval)->child[3]=(yyvsp[0]);
    (yyval)->lineno=lineno;
}
#line 1534 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1540 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1546 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 73 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno; 
}
#line 1554 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 77 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode * t=(yyvsp[-5]);
    if(t!=NULL)
    {    while(t->sibling!=NULL)
        t=t->sibling;
        t->sibling=newStmtNode(EqualK);
        t->sibling->child[0]=(yyvsp[-1]);
        t->sibling->attr.name = savedName;
        t->sibling->lineno =savedLineNo;
        (yyval) =(yyvsp[-5]);
    }
    else
    {
        (yyval) =(yyvsp[-5]);
    }
}
#line 1574 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 92 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);savedLineNo = lineno;}
#line 1580 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 94 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newStmtNode(EqualK);
    (yyval)->child[0]=(yyvsp[-1]);
    (yyval)->attr.name = savedName;
    (yyval)->lineno =savedLineNo;
}
#line 1590 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newExpNode(ConstIntK);
    (yyval)->attr.int_val=atoi(tokenString);
    (yyval)->lineno =lineno;
}
#line 1599 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 106 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newExpNode(ConstDoubleK);
    (yyval)->attr.double_val=atof(tokenString);
    (yyval)->lineno =lineno;
}
#line 1608 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 111 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newExpNode(ConstCharK);
    (yyval)->attr.char_val=tokenString;
    (yyval)->lineno =lineno;
}
#line 1617 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 116 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newExpNode(ConstStrK);
    (yyval)->attr.string_val=malloc((strlen(tokenString)+1)*sizeof(char));
    strcpy((yyval)->attr.string_val,tokenString);
    (yyval)->lineno =lineno;
}
#line 1627 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 122 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1633 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 123 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1639 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 125 "bison/pascal.y" /* yacc.c:1646  */
    { TreeNode * t = (yyvsp[-1]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[0]);
        (yyval) = (yyvsp[-1]); }
    else (yyval) = (yyvsp[0]);
}
#line 1652 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 133 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1658 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 135 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                      savedLineNo = lineno; }
#line 1665 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 138 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newStmtNode(EqualK);
    (yyval)->child[0]=(yyvsp[-1]);
    (yyval)->attr.name = savedName;
    (yyval)->lineno =savedLineNo;  
}
#line 1675 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 143 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1681 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 144 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1687 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 145 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1693 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 147 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newDeclNode(ArrayK);
    (yyval)->child[0]=(yyvsp[-3]);
    (yyval)->child[1]=(yyvsp[0]);
    (yyval)->lineno =lineno;
}
#line 1703 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 152 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1709 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 154 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-1]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[0]);
        (yyval) = (yyvsp[-1]); 
    }
    else (yyval) = (yyvsp[0]);
}
#line 1723 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 163 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1729 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 165 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newDeclNode(FieldK);
    (yyval)->child[0]=(yyvsp[-3]);
    (yyval)->child[1]=(yyvsp[-1]);
    (yyval)->lineno =lineno;
}
#line 1739 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 170 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=Int;}
#line 1745 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 171 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=Double;}
#line 1751 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 172 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=Char;}
#line 1757 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 173 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=String;}
#line 1763 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 174 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=Bool;}
#line 1769 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 175 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(IdK);
    (yyval)->attr.name =copyString(tokenString);
    (yyval)->lineno = lineno;
}
#line 1778 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 179 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1784 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 181 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval) =newDeclNode(SimpleK);
    (yyval)->child[0]=(yyvsp[-2]);
    (yyval)->child[1]=(yyvsp[0]);
    (yyval)->lineno =lineno;
}
#line 1795 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 188 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval) =newDeclNode(SimpleK);
    (yyval)->child[2]=(yyvsp[-3]);
    (yyval)->child[3]=(yyvsp[-1]);
    (yyval)->lineno =lineno;
}
#line 1806 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 195 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval) =newDeclNode(SimpleK);
    (yyval)->child[4]=(yyvsp[-4]);
    (yyval)->child[5]=(yyvsp[-2]);
    (yyval)->lineno =lineno;
}
#line 1817 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 201 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno; }
#line 1824 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 204 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval) =newDeclNode(SimpleK);
    (yyval)->attr.name=savedName;
    (yyval)->child[6]->attr.name=copyString(tokenString);
    (yyval)->lineno =savedLineNo;
}
#line 1835 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 212 "bison/pascal.y" /* yacc.c:1646  */
    { TreeNode* t = (yyvsp[-2]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling=newExpNode(IdK);
        t->sibling->attr.name=copyString(tokenString);
        (yyval) = (yyvsp[-2]); 
    }
    else 
    {
        (yyval) = newExpNode(IdK);
        (yyval)->attr.name=copyString(tokenString);
    }
}
#line 1854 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 226 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(IdK);
    (yyval)->attr.name =copyString(tokenString);
    (yyval)->lineno = lineno;
}
#line 1863 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 231 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1869 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 232 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1875 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 234 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-1]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[0]);
        (yyval) = (yyvsp[-1]); 
    }
    else (yyval) = (yyvsp[0]);
}
#line 1889 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 243 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1895 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 245 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newDeclNode(FieldK);
    (yyval)->child[0]=(yyvsp[-3]);
    (yyval)->child[1]=(yyvsp[-1]);
    (yyval)->lineno =lineno;
}
#line 1905 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 251 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-1]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[0]);
        (yyval) = (yyvsp[-1]); 
    }
    else (yyval) = (yyvsp[0]);
}
#line 1919 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 261 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-1]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[0]);
        (yyval) = (yyvsp[-1]); 
    }
    else (yyval) = (yyvsp[0]);
}
#line 1933 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 270 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1939 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 271 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1945 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 273 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno; 
}
#line 1953 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 277 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newModuleNode(FunctionK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.name=savedName;
    (yyval)->lineno=savedLineNo;
}
#line 1964 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 284 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno; 
}
#line 1972 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 288 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newModuleNode(ProcedureK);
    (yyval)->child[0] = (yyvsp[-3]);
    (yyval)->child[1] = (yyvsp[-1]);
    (yyval)->attr.name=savedName;
    (yyval)->lineno=savedLineNo;
}
#line 1983 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 294 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1989 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 295 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1995 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 297 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-2]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[-1]);
        (yyval) = (yyvsp[-2]); 
    }
    else (yyval) = (yyvsp[-1]);
}
#line 2009 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 309 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newDeclNode(ParaK);
    (yyval)->child[0]=(yyvsp[-2]);
    (yyval)->child[2]=(yyvsp[0]);
    (yyval)->lineno =lineno;
}
#line 2019 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 315 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newDeclNode(ParaK);
    (yyval)->child[1]=(yyvsp[-2]);
    (yyval)->child[2]=(yyvsp[0]);
    (yyval)->lineno =lineno;
}
#line 2029 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 320 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2035 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 321 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2041 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 322 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2047 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 323 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2053 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 325 "bison/pascal.y" /* yacc.c:1646  */
    { TreeNode* t = (yyvsp[-2]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[-1]);
        (yyval) = (yyvsp[-2]); }
    else (yyval) = (yyvsp[-1]);
}
#line 2066 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 333 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 2072 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 335 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(LabelK);
    (yyval)->child[0] = (yyvsp[0]);
    (yyval)->attr.goto_label=(yyvsp[-2])->attr.int_val;
    (yyval)->lineno = savedLineNo;
}
#line 2082 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 340 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2088 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 341 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2094 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 342 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2100 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 343 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2106 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 344 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2112 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 345 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2118 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 346 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2124 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 347 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2130 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 348 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2136 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 349 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2142 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 351 "bison/pascal.y" /* yacc.c:1646  */
    {
    puts("[debug] assign_stmt matched");
    savedName = copyString(tokenString);
                  savedLineNo = lineno; }
#line 2151 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 356 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(AssignK);
    (yyval)->child[0] = (yyvsp[0]);
    (yyval)->attr.name = savedName;
    (yyval)->lineno = savedLineNo;
}
#line 2161 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 361 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno; }
#line 2168 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 364 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(AssignK);
    (yyval)->attr.name = savedName;
    (yyval)->child[1] = (yyvsp[-3]);
    (yyval)->child[2] = (yyvsp[0]);
    (yyval)->lineno = savedLineNo;
}
#line 2179 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 370 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno; }
#line 2186 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 373 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(AssignK);
        (yyval)->attr.name = savedName;
        (yyval)->child[3]=newExpNode(IdK);
        (yyval)->child[3]->attr.name = copyString(tokenString);
        (yyval)->lineno =lineno;
    }
#line 2197 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 380 "bison/pascal.y" /* yacc.c:1646  */
    { 
    (yyval)->child[4] = (yyvsp[0]);
    (yyval)->lineno = savedLineNo;
}
#line 2206 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 384 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=newExpNode(IdK);(yyval)->attr.name = copyString(tokenString);(yyval)->lineno=lineno;}
#line 2212 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 385 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno; }
#line 2219 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 388 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = newStmtNode(ProcK);
    (yyval)->attr.name = savedName;
    (yyval)->child[1]=(yyvsp[-2]);
    (yyval)->lineno = savedLineNo;
}
#line 2229 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 396 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(IfK);
    (yyval)->child[0] = (yyvsp[-3]);
    (yyval)->child[1] = (yyvsp[-1]);
    (yyval)->child[2] = (yyvsp[0]);
    (yyval)->lineno=lineno;
}
#line 2240 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 402 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2246 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 404 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(RepeatK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->lineno=lineno;
}
#line 2256 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 411 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(WhileK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->lineno=lineno;
}
#line 2266 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 417 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
               savedLineNo = lineno; }
#line 2273 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 420 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(ForK);
    (yyval)->attr.name = savedName;
    (yyval)->child[0] = (yyvsp[-4]);
    (yyval)->child[1] = (yyvsp[-3]);
    (yyval)->child[2] = (yyvsp[-2]);
    (yyval)->child[3] = (yyvsp[0]); 
    (yyval)->lineno=savedLineNo;
}
#line 2286 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 429 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->attr.direction=1;}
#line 2292 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 430 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->attr.direction=0;}
#line 2298 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 432 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(CaseK);
    (yyval)->child[0] = (yyvsp[-3]);
    (yyval)->child[1] = (yyvsp[-1]);
    (yyval)->lineno=lineno;
}
#line 2308 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 439 "bison/pascal.y" /* yacc.c:1646  */
    { TreeNode* t = (yyvsp[-1]);
    if (t != NULL)
    { while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[0]);
        (yyval) = (yyvsp[-1]); }
    else (yyval) = (yyvsp[0]);
}
#line 2321 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 447 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2327 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 449 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(Case_expK);
    (yyval)->child[0] = (yyvsp[-3]);
    (yyval)->child[1] = (yyvsp[-1]);
    (yyval)->lineno=lineno;
}
#line 2337 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 454 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno; }
#line 2344 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 457 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(Case_expK);
    (yyval)->attr.name = savedName;
    (yyval)->child[2] = (yyvsp[-1]);
    (yyval)->lineno = savedLineNo;
}
#line 2354 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 463 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(GotoK);
    (yyval)->attr.goto_label = (yyvsp[0])->attr.int_val;
    (yyval)->lineno = lineno;
}
#line 2363 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 479 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = GE;
    (yyval)->lineno = lineno;
}
#line 2374 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 486 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = GT;
    (yyval)->lineno = lineno;
}
#line 2385 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 493 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = LE;
    (yyval)->lineno = lineno;
}
#line 2396 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 500 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = LT;
    (yyval)->lineno = lineno;
}
#line 2407 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 507 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = EQUAL;
    (yyval)->lineno = lineno;
}
#line 2418 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 514 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = UNEQUAL;
    (yyval)->lineno = lineno;
}
#line 2429 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 520 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2435 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 523 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = PLUS;
    (yyval)->lineno = lineno;
}
#line 2446 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 530 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = MINUS;
    (yyval)->lineno = lineno;
}
#line 2457 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 537 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = OR;
    (yyval)->lineno = lineno;
}
#line 2468 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 543 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 2474 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 546 "bison/pascal.y" /* yacc.c:1646  */
    {
    (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = MUL;
    (yyval)->lineno = lineno;
}
#line 2486 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 554 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = DIV;
    (yyval)->lineno = lineno;
}
#line 2497 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 561 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = MOD;
    (yyval)->lineno = lineno;
}
#line 2508 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 568 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
    (yyval)->child[0] = (yyvsp[-2]);
    (yyval)->child[1] = (yyvsp[0]);
    (yyval)->attr.op = AND;
    (yyval)->lineno = lineno;
}
#line 2519 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 574 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 2525 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 576 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(IdK);
                 (yyval)->attr.name =copyString(tokenString);
                 (yyval)->lineno = lineno;
             }
#line 2534 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 581 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2540 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 583 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]);}
#line 2546 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 585 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2552 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 587 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2558 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 588 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno;}
#line 2565 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 591 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)= newExpNode(FactorK);
    (yyval)->attr.name =savedName;
    (yyval)->child[0]=(yyvsp[-1]);
    (yyval)->lineno =savedLineNo;
}
#line 2575 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 596 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
    savedLineNo = lineno;}
#line 2582 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 599 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=newExpNode(FactorK);
    (yyval)->attr.name =savedName;
    (yyval)->child[1]=newExpNode(IdK);
    (yyval)->child[1]->attr.name=copyString(tokenString);
    (yyval)->lineno =savedLineNo;
}
#line 2593 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 607 "bison/pascal.y" /* yacc.c:1646  */
    {  TreeNode* t = (yyvsp[-2]);
    if (t != NULL)
    {  while (t->sibling != NULL)
        t = t->sibling;
        t->sibling = (yyvsp[0]);
        (yyval) = (yyvsp[-2]); 
    }
    else (yyval) = (yyvsp[0]);
}
#line 2607 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 616 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2613 "pascal.tab.c" /* yacc.c:1646  */
    break;


#line 2617 "pascal.tab.c" /* yacc.c:1646  */
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
    printToken(yychar,tokenString);
    Error = TRUE;
    return 0;
}

TreeNode * do_parse(void){
    yyparse();
    return savedTree;
}
