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

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */


#line 81 "pascal.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 0
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
    FALSE = 315,
    TRUE = 316,
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

#line 195 "pascal.tab.c" /* yacc.c:358  */

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
#define YYLAST   310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

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
       0,    28,    28,    36,    35,    41,    47,    49,    58,    59,
      62,    61,    81,    81,    89,    94,    99,   104,   111,   112,
     113,   122,   124,   124,   132,   133,   134,   135,   141,   142,
     152,   153,   159,   160,   161,   162,   163,   164,   168,   169,
     176,   183,   190,   190,   200,   215,   220,   221,   222,   232,
     233,   239,   249,   259,   260,   262,   261,   273,   272,   284,
     309,   310,   311,   320,   321,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   338,   338,   346,   346,   355,
     358,   355,   369,   370,   370,   378,   380,   387,   387,   388,
     395,   402,   402,   414,   415,   416,   423,   432,   433,   439,
     439,   447,   462,   469,   476,   483,   490,   497,   504,   506,
     513,   520,   527,   529,   536,   543,   550,   557,   559,   563,
     565,   567,   569,   571,   571,   579,   579,   589,   599
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
  "TYPEBOOL", "FALSE", "TRUE", "PROCEDURE", "$accept", "program",
  "program_head", "@1", "routine", "routine_head", "const_part",
  "const_expr_list", "$@2", "$@3", "const_value", "type_part",
  "type_decl_list", "type_definition", "$@4", "type_decl",
  "array_type_decl", "record_type_decl", "field_decl_list", "field_decl",
  "simple_type_decl", "$@5", "name_list", "var_part", "var_decl_list",
  "var_decl", "routine_part", "function_decl", "$@6", "procedure_decl",
  "$@7", "parameters", "routine_body", "compound_stmt", "stmt_list",
  "stmt", "non_label_stmt", "assign_stmt", "$@8", "$@9", "$@10", "@11",
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

#define YYPACT_NINF -163

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-163)))

#define YYTABLE_NINF -126

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,    23,    53,    16,  -163,  -163,    59,    47,    43,    70,
      87,  -163,    92,  -163,  -163,  -163,  -163,    98,    80,  -163,
     102,  -163,     1,  -163,    98,  -163,   108,    -8,   182,   103,
      60,    91,  -163,    85,  -163,    85,   122,   123,    85,   106,
    -163,   124,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,   127,  -163,  -163,    11,   108,  -163,   139,   149,    -8,
    -163,  -163,  -163,  -163,  -163,  -163,   144,   182,   118,   143,
     153,   145,   152,   100,    85,    85,    85,  -163,   205,     8,
     189,  -163,   119,   180,  -163,  -163,   209,    85,  -163,     9,
     168,     9,  -163,  -163,  -163,  -163,  -163,  -163,   162,    85,
      85,   177,    85,  -163,   166,   181,   221,  -163,  -163,    85,
      85,    85,    85,    85,    85,    99,    85,    85,    85,    85,
      85,    85,    85,    85,    99,   155,   171,   185,   176,   188,
     108,   108,   182,  -163,  -163,  -163,  -163,  -163,   195,   210,
    -163,  -163,  -163,  -163,   232,  -163,  -163,  -163,   257,   243,
    -163,   257,    49,    85,   202,  -163,     8,     8,     8,     8,
       8,     8,   203,   189,   189,   189,  -163,  -163,  -163,  -163,
     257,  -163,    85,  -163,   224,   273,  -163,  -163,   230,    74,
       0,  -163,    19,    82,   233,   182,  -163,  -163,   227,   246,
     218,   222,    85,  -163,   253,  -163,    99,  -163,     6,   240,
      99,  -163,  -163,   260,   247,  -163,  -163,     9,  -163,   131,
    -163,    74,    14,    85,    85,   257,  -163,  -163,  -163,  -163,
      85,    99,   256,  -163,   249,   258,   182,  -163,  -163,   261,
     257,   257,   184,   280,  -163,     9,  -163,  -163,  -163,    99,
    -163,  -163,  -163
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     9,     3,     1,     0,     0,     0,    19,
       0,    12,     8,     2,    63,     5,    60,     0,    47,     4,
       0,    10,     0,    22,    18,    21,     0,     0,     0,     0,
      82,     0,    61,     0,    63,     0,     0,     0,     0,     0,
      68,     0,    65,    66,    67,    69,    70,    71,    72,    73,
      74,     0,    20,    45,     0,    46,    49,     0,     0,     7,
      53,    54,    14,    15,    16,    17,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,     0,   119,     0,   108,
     112,   117,     0,     0,    91,   101,     0,     0,    62,     0,
       0,     0,    48,    55,    57,    51,    52,    13,     0,     0,
       0,     0,     0,    64,     0,     0,     0,   122,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    32,    33,    34,    35,    36,     0,     0,
      25,    26,    24,    44,     0,    59,    59,    11,    76,     0,
      80,   128,     0,     0,     0,   120,   106,   102,   103,   104,
     105,   107,    88,   110,   109,   111,   113,   114,   116,   115,
      89,    90,     0,    99,     0,     0,    97,    85,     0,     0,
       0,    30,     0,     0,     0,     0,    23,    50,     0,     0,
       0,     0,     0,    84,     0,   126,     0,    86,     0,     0,
       0,    95,    96,     0,     0,    28,    29,     0,    38,     0,
      39,     0,     9,     0,     0,   127,   124,    87,    93,    94,
       0,     0,     0,    43,     0,     0,     0,    40,    56,     0,
      78,    81,     0,     0,    98,     0,    31,    41,    58,     0,
     100,    27,    92
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,  -163,  -163,    90,  -163,  -163,  -163,  -163,  -163,
     -28,  -163,  -163,   268,  -163,   -90,  -163,  -163,  -163,   114,
    -162,  -163,  -123,  -163,  -163,   248,  -163,   245,  -163,   250,
    -163,   159,  -163,   298,   274,  -113,   235,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,   135,  -163,  -163,   -29,   187,   113,    -1,
    -163,  -163,  -163
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    10,     7,     8,     9,    12,    29,    20,
      77,    18,    24,    25,    51,   139,   140,   141,   180,   181,
     142,   178,    54,    27,    55,    56,    59,    60,   145,    61,
     146,   188,    15,    40,    22,    41,    42,    43,    68,    69,
      70,   191,    44,    71,    45,   197,    46,    47,    48,   125,
     220,    49,   175,   176,   199,    50,    78,    79,    80,    81,
     104,   105,   152
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,   144,   162,    53,    30,    31,    83,   182,   183,    86,
       1,   171,   128,    62,    63,    64,    65,   204,   109,    57,
     205,    32,    90,   129,    -6,    -6,     4,     6,   130,     6,
      90,   131,    91,   116,   132,   110,   111,   112,   113,    98,
     207,   117,    14,    33,   114,   106,    34,   118,    35,   228,
      36,    37,    38,     5,    58,    39,    13,   182,   218,   219,
     192,   138,    11,   138,   133,   134,   135,   136,   137,   -79,
     148,   149,   193,   151,   107,   108,   -77,   128,    62,    63,
      64,    65,   -83,   217,    14,    17,   127,   222,    73,    62,
      63,    64,    65,    90,   170,    21,   131,    19,   174,   132,
     -75,    23,    30,    31,   184,   208,    26,    74,   233,  -125,
      75,    53,    72,    76,    28,    67,  -123,   225,   166,   167,
     168,   169,    30,    31,   194,    84,   242,    85,    87,   133,
     134,   135,   136,   137,    88,    62,    63,    64,    65,    89,
      14,    33,    93,   198,    34,   241,    35,   174,    36,    37,
      38,   138,    94,    39,    97,    30,   226,   210,    99,   100,
      14,    33,   101,   215,    34,   123,    35,   102,    36,    37,
      38,   143,   147,    39,   173,    62,    63,    64,    65,   138,
     150,   227,   153,   138,   230,   231,    62,    63,    64,    65,
     154,   232,   109,    14,    33,   172,   109,    34,   237,    35,
     -42,    36,    37,    38,   179,   195,    39,   138,   177,   110,
     111,   112,   113,   110,   111,   112,   113,   109,   114,   185,
     186,   109,   114,   119,   120,   121,   122,   126,   124,   163,
     164,   165,   239,   109,   110,   111,   112,   113,   110,   111,
     112,   113,   187,   114,   155,   200,   196,   114,   211,   115,
     110,   111,   112,   113,   203,   109,   212,   209,   213,   114,
     190,   221,   214,   223,   224,   109,   234,   235,   236,   109,
     216,   238,   110,   111,   112,   113,   173,    62,    63,    64,
      65,   114,   110,   111,   112,   113,   110,   111,   112,   113,
     240,   114,    52,   201,   206,   114,   156,   157,   158,   159,
     160,   161,   229,    92,    95,   189,    16,   103,    82,    96,
     202
};

static const yytype_uint8 yycheck[] =
{
      28,    91,   115,     3,     3,     4,    35,   130,   131,    38,
       8,   124,     3,     4,     5,     6,     7,   179,    12,    27,
      20,    20,    11,    14,    10,     9,     3,    13,    19,    13,
      11,    22,    21,    25,    25,    29,    30,    31,    32,    67,
      21,    33,    41,    42,    38,    74,    45,    39,    47,   211,
      49,    50,    51,     0,    62,    54,     9,   180,    52,    53,
      11,    89,     3,    91,    55,    56,    57,    58,    59,     9,
      99,   100,    23,   102,    75,    76,    16,     3,     4,     5,
       6,     7,    22,   196,    41,    15,    87,   200,     3,     4,
       5,     6,     7,    11,   123,     3,    22,    10,   126,    25,
      40,     3,     3,     4,   132,    23,    26,    22,   221,     9,
      25,     3,    21,    28,    12,    12,    16,   207,   119,   120,
     121,   122,     3,     4,   153,     3,   239,     4,    22,    55,
      56,    57,    58,    59,    10,     4,     5,     6,     7,    12,
      41,    42,     3,   172,    45,   235,    47,   175,    49,    50,
      51,   179,     3,    54,    10,     3,    25,   185,    40,    16,
      41,    42,     9,   192,    45,    46,    47,    22,    49,    50,
      51,     3,    10,    54,     3,     4,     5,     6,     7,   207,
       3,   209,    16,   211,   213,   214,     4,     5,     6,     7,
       9,   220,    12,    41,    42,    40,    12,    45,   226,    47,
      24,    49,    50,    51,    16,     3,    54,   235,    23,    29,
      30,    31,    32,    29,    30,    31,    32,    12,    38,    24,
      10,    12,    38,    34,    35,    36,    37,    18,    48,   116,
     117,   118,    48,    12,    29,    30,    31,    32,    29,    30,
      31,    32,    10,    38,    23,    21,    43,    38,    21,    44,
      29,    30,    31,    32,    24,    12,    10,    24,    40,    38,
      17,    21,    40,     3,    17,    12,    10,    18,    10,    12,
      17,    10,    29,    30,    31,    32,     3,     4,     5,     6,
       7,    38,    29,    30,    31,    32,    29,    30,    31,    32,
      10,    38,    24,    20,   180,    38,   109,   110,   111,   112,
     113,   114,   212,    55,    59,   146,     8,    72,    34,    59,
     175
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    64,    65,     3,     0,    13,    67,    68,    69,
      66,     3,    70,     9,    41,    95,    96,    15,    74,    10,
      72,     3,    97,     3,    75,    76,    26,    86,    12,    71,
       3,     4,    20,    42,    45,    47,    49,    50,    51,    54,
      96,    98,    99,   100,   105,   107,   109,   110,   111,   114,
     118,    77,    76,     3,    85,    87,    88,    27,    62,    89,
      90,    92,     4,     5,     6,     7,    73,    12,   101,   102,
     103,   106,    21,     3,    22,    25,    28,    73,   119,   120,
     121,   122,    97,   119,     3,     4,   119,    22,    10,    12,
      11,    21,    88,     3,     3,    90,    92,    10,    73,    40,
      16,     9,    22,    99,   123,   124,   119,   122,   122,    12,
      29,    30,    31,    32,    38,    44,    25,    33,    39,    34,
      35,    36,    37,    46,    48,   112,    18,   122,     3,    14,
      19,    22,    25,    55,    56,    57,    58,    59,    73,    78,
      79,    80,    83,     3,    78,    91,    93,    10,   119,   119,
       3,   119,   125,    16,     9,    23,   120,   120,   120,   120,
     120,   120,    98,   121,   121,   121,   122,   122,   122,   122,
     119,    98,    40,     3,    73,   115,   116,    23,    84,    16,
      81,    82,    85,    85,    73,    24,    10,    10,    94,    94,
      17,   104,    11,    23,   119,     3,    43,   108,   119,   117,
      21,    20,   116,    24,    83,    20,    82,    21,    23,    24,
      73,    21,    10,    40,    40,   119,    17,    98,    52,    53,
     113,    21,    98,     3,    17,    78,    25,    73,    83,    67,
     119,   119,   119,    98,    10,    18,    10,    73,    10,    48,
      10,    78,    98
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    66,    65,    67,    67,    68,    69,    69,
      71,    70,    72,    70,    73,    73,    73,    73,    74,    74,
      75,    75,    77,    76,    78,    78,    78,    79,    80,    81,
      81,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    83,    85,    85,    86,    86,    87,    87,
      88,    89,    89,    89,    89,    91,    90,    93,    92,    94,
      95,    96,    97,    97,    98,    98,    99,    99,    99,    99,
      99,    99,    99,    99,    99,   101,   100,   102,   100,   103,
     104,   100,   105,   106,   105,   105,   107,   108,   108,   109,
     110,   112,   111,   113,   113,   114,   115,   115,   116,   117,
     116,   118,   119,   119,   119,   119,   119,   119,   119,   120,
     120,   120,   120,   121,   121,   121,   121,   121,   122,   122,
     122,   122,   122,   123,   122,   124,   122,   125,   125
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     4,     2,     0,     4,     2,     0,
       0,     6,     0,     5,     1,     1,     1,     1,     2,     0,
       2,     1,     0,     5,     1,     1,     1,     6,     3,     2,
       1,     4,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     5,     0,     4,     3,     1,     2,     0,     2,     1,
       4,     2,     2,     1,     1,     0,     6,     0,     7,     0,
       1,     3,     3,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0,     7,     0,
       0,     7,     1,     0,     5,     4,     5,     2,     0,     4,
       4,     0,     9,     1,     1,     5,     2,     1,     4,     0,
       5,     2,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     3,     3,     3,     3,     1,     1,     1,
       3,     2,     2,     0,     5,     0,     4,     3,     1
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
#line 29 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newModuleNode(ProgramK);
                 (yyval)->child[0] = (yyvsp[-2]);
                 (yyval)->child[1] = (yyvsp[-1]);
                 (yyval)->lineno=lineno;
               }
#line 1476 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 36 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval)->attr.name = copyString(tokenString);
                }
#line 1483 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 42 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newModuleNode(RoutineK);
                (yyval)->child[0] = (yyvsp[-1]);
                (yyval)->child[1] = (yyvsp[0]);
                (yyval)->lineno=lineno;
              }
#line 1493 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 47 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1499 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 50 "bison/pascal.y" /* yacc.c:1646  */
    {
                (yyval) = newModuleNode(Routine_headK);
                (yyval)->child[0]=(yyvsp[-3]);
                (yyval)->child[1]=(yyvsp[-2]);
                (yyval)->child[2]=(yyvsp[-1]);
                (yyval)->child[3]=(yyvsp[0]);
                (yyval)->lineno=lineno;
              }
#line 1512 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 58 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1518 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 59 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL;}
#line 1524 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 62 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                        savedLineNo = lineno; 
                      }
#line 1532 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "bison/pascal.y" /* yacc.c:1646  */
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
#line 1552 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 81 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);savedLineNo = lineno;}
#line 1558 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newStmtNode(EqualK);
                        (yyval)->child[0]=(yyvsp[-1]);
                        (yyval)->attr.name = savedName;
                        (yyval)->lineno =savedLineNo;
                      }
#line 1568 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 90 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newExpNode(ConstIntK);
                      (yyval)->attr.int_val=atoi(tokenString);
                      (yyval)->lineno =lineno;
                    }
#line 1577 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 95 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newExpNode(ConstDoubleK);
                      (yyval)->attr.double_val=atof(tokenString);
                      (yyval)->lineno =lineno;
                    }
#line 1586 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 100 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newExpNode(ConstCharK);
                      (yyval)->attr.char_val=tokenString;
                      (yyval)->lineno =lineno;
                    }
#line 1595 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 105 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newExpNode(ConstStrK);
                      (yyval)->attr.string_val=malloc((strlen(tokenString)+1)*sizeof(char));
                      strcpy((yyval)->attr.string_val,tokenString);
                      (yyval)->lineno =lineno;
                    }
#line 1605 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 111 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 1611 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 112 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL}
#line 1617 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 114 "bison/pascal.y" /* yacc.c:1646  */
    { TreeNode * t = (yyvsp[-1]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[0]);
                     (yyval) = (yyvsp[-1]); }
                     else (yyval) = (yyvsp[0]);
                 }
#line 1630 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 122 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 1636 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 124 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                         savedLineNo = lineno; }
#line 1643 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 127 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newStmtNode(EqualK);
                     (yyval)->child[0]=(yyvsp[-1]);
                     (yyval)->attr.name = savedName;
                     (yyval)->lineno =savedLineNo;  
                   }
#line 1653 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 132 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1659 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 133 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1665 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 134 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1671 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 136 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newDeclNode(ArrayK);
                     (yyval)->child[0]=(yyvsp[-3]);
                     (yyval)->child[1]=(yyvsp[0]);
                     (yyval)->lineno =lineno;
                   }
#line 1681 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 141 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1687 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 143 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-1]);
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = (yyvsp[0]);
                              (yyval) = (yyvsp[-1]); 
                        }
                        else (yyval) = (yyvsp[0]);
                   }
#line 1701 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1707 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 154 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newDeclNode(FieldK);
                (yyval)->child[0]=(yyvsp[-3]);
                (yyval)->child[1]=(yyvsp[-1]);
                (yyval)->lineno =lineno;
              }
#line 1717 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 159 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=Int;}
#line 1723 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 160 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=Double;}
#line 1729 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 161 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=Char;}
#line 1735 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 162 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=String;}
#line 1741 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 163 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->type=Bool;}
#line 1747 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 164 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(IdK);
                         (yyval)->attr.name =copyString(tokenString);
                         (yyval)->lineno = lineno;
                       }
#line 1756 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 168 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1762 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 170 "bison/pascal.y" /* yacc.c:1646  */
    {
                     (yyval) =newDeclNode(SimpleK);
                     (yyval)->child[0]=(yyvsp[-2]);
                     (yyval)->child[1]=(yyvsp[0]);
                     (yyval)->lineno =lineno;
                   }
#line 1773 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 177 "bison/pascal.y" /* yacc.c:1646  */
    {
                     (yyval) =newDeclNode(SimpleK);
                     (yyval)->child[2]=(yyvsp[-3]);
                     (yyval)->child[3]=(yyvsp[-1]);
                     (yyval)->lineno =lineno;
                   }
#line 1784 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 184 "bison/pascal.y" /* yacc.c:1646  */
    {
                     (yyval) =newDeclNode(SimpleK);
                     (yyval)->child[4]=(yyvsp[-4]);
                     (yyval)->child[5]=(yyvsp[-2]);
                     (yyval)->lineno =lineno;
                   }
#line 1795 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 190 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                         savedLineNo = lineno; }
#line 1802 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 193 "bison/pascal.y" /* yacc.c:1646  */
    {
                     (yyval) =newDeclNode(SimpleK);
                     (yyval)->attr.name=savedName;
                     (yyval)->child[6]->attr.name=copyString(tokenString);
                     (yyval)->lineno =savedLineNo;
                   }
#line 1813 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 201 "bison/pascal.y" /* yacc.c:1646  */
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
#line 1832 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 215 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(IdK);
                  (yyval)->attr.name =copyString(tokenString);
                  (yyval)->lineno = lineno;
                }
#line 1841 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 220 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1847 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 221 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL}
#line 1853 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 223 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-1]);
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = (yyvsp[0]);
                              (yyval) = (yyvsp[-1]); 
                        }
                        else (yyval) = (yyvsp[0]);
                   }
#line 1867 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 232 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1873 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 234 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) =newDeclNode(FieldK);
               (yyval)->child[0]=(yyvsp[-3]);
               (yyval)->child[1]=(yyvsp[-1]);
               (yyval)->lineno =lineno;
             }
#line 1883 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 240 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-1]);
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = (yyvsp[0]);
                              (yyval) = (yyvsp[-1]); 
                        }
                        else (yyval) = (yyvsp[0]);
                   }
#line 1897 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 250 "bison/pascal.y" /* yacc.c:1646  */
    {TreeNode* t = (yyvsp[-1]);
                        if (t != NULL)
                        { while (t->sibling != NULL)
                              t = t->sibling;
                              t->sibling = (yyvsp[0]);
                              (yyval) = (yyvsp[-1]); 
                        }
                        else (yyval) = (yyvsp[0]);
                   }
#line 1911 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 259 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1917 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 260 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1923 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 262 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; 
                 }
#line 1931 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 266 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newModuleNode(FunctionK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.name=savedName;
                   (yyval)->lineno=savedLineNo;
                 }
#line 1942 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 273 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; 
                 }
#line 1950 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 277 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newModuleNode(ProcedureK);
                   (yyval)->child[0] = (yyvsp[-3]);
                   (yyval)->child[1] = (yyvsp[-1]);
                   (yyval)->attr.name=savedName;
                   (yyval)->lineno=savedLineNo;
                 }
#line 1961 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 284 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL}
#line 1967 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 309 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1973 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 310 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1979 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 312 "bison/pascal.y" /* yacc.c:1646  */
    { TreeNode* t = (yyvsp[-2]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[-1]);
                     (yyval) = (yyvsp[-2]); }
                     else (yyval) = (yyvsp[-1]);
                 }
#line 1992 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 320 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=NULL}
#line 1998 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 322 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(LabelK);
           (yyval)->child[0] = (yyvsp[0]);
           (yyval)->attr.goto_label=(yyvsp[-2])->attr.int_val;
           (yyval)->lineno = savedLineNo;
         }
#line 2008 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 327 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2014 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 328 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2020 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 329 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2026 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 330 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2032 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 331 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2038 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 332 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2044 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 333 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2050 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 334 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2056 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 335 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2062 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 336 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2068 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 338 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
#line 2075 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 341 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(AssignK);
                   (yyval)->child[0] = (yyvsp[0]);
                   (yyval)->attr.name = savedName;
                   (yyval)->lineno = savedLineNo;
                 }
#line 2085 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 346 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
#line 2092 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 349 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(AssignK);
                  (yyval)->attr.name = savedName;
                  (yyval)->child[1] = (yyvsp[-3]);
                  (yyval)->child[2] = (yyvsp[0]);
                  (yyval)->lineno = savedLineNo;
                }
#line 2103 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 355 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
#line 2110 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 358 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(AssignK);
                  (yyval)->attr.name = savedName;
                  (yyval)->child[3]=newExpNode(IdK);
                  (yyval)->child[3]->attr.name = copyString(tokenString);
                  (yyval)->lineno =lineno;
                  }
#line 2121 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 365 "bison/pascal.y" /* yacc.c:1646  */
    { 
                  (yyval)->child[4] = (yyvsp[0]);
                  (yyval)->lineno = savedLineNo;
                }
#line 2130 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 369 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=newExpNode(IdK);(yyval)->attr.name = copyString(tokenString);(yyval)->lineno=lineno;}
#line 2136 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 370 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
#line 2143 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 373 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = newStmtNode(ProcK);
              (yyval)->attr.name = savedName;
              (yyval)->child[1]=(yyvsp[-2]);
              (yyval)->lineno = savedLineNo;
             }
#line 2153 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 381 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(IfK);
                   (yyval)->child[0] = (yyvsp[-3]);
                   (yyval)->child[1] = (yyvsp[-1]);
                   (yyval)->child[2] = (yyvsp[0]);
                   (yyval)->lineno=lineno;
                }
#line 2164 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 387 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0])}
#line 2170 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 389 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(RepeatK);
                  (yyval)->child[0] = (yyvsp[-2]);
                  (yyval)->child[1] = (yyvsp[0]);
                  (yyval)->lineno=lineno;
                }
#line 2180 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 396 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(WhileK);
                  (yyval)->child[0] = (yyvsp[-2]);
                  (yyval)->child[1] = (yyvsp[0]);
                  (yyval)->lineno=lineno;
                }
#line 2190 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 402 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
#line 2197 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 405 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(ForK);
                  (yyval)->attr.name = savedName;
                  (yyval)->child[0] = (yyvsp[-4]);
                  (yyval)->child[1] = (yyvsp[-3]);
                  (yyval)->child[2] = (yyvsp[-2]);
                  (yyval)->child[3] = (yyvsp[0]); 
                  (yyval)->lineno=savedLineNo;
                }
#line 2210 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 414 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->attr.direction=1}
#line 2216 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 415 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)->attr.direction=0}
#line 2222 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 417 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(CaseK);
                  (yyval)->child[0] = (yyvsp[-3]);
                  (yyval)->child[1] = (yyvsp[-1]);
                  (yyval)->lineno=lineno;
                }
#line 2232 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 424 "bison/pascal.y" /* yacc.c:1646  */
    { TreeNode* t = (yyvsp[-1]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[0]);
                     (yyval) = (yyvsp[-1]); }
                     else (yyval) = (yyvsp[0]);
                  }
#line 2245 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 432 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2251 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 434 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(Case_expK);
                  (yyval)->child[0] = (yyvsp[-3]);
                  (yyval)->child[1] = (yyvsp[-1]);
                  (yyval)->lineno=lineno;
                }
#line 2261 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 439 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno; }
#line 2268 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 442 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(Case_expK);
                  (yyval)->attr.name = savedName;
                  (yyval)->child[2] = (yyvsp[-1]);
                  (yyval)->lineno = savedLineNo;
                }
#line 2278 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 448 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newStmtNode(GotoK);
                  (yyval)->attr.goto_label = (yyvsp[0])->attr.int_val;
                  (yyval)->lineno = lineno;
                }
#line 2287 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 463 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = GE;
                   (yyval)->lineno = lineno;
                 }
#line 2298 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 470 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = GT;
                   (yyval)->lineno = lineno;
                 }
#line 2309 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 477 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = LE;
                   (yyval)->lineno = lineno;
                 }
#line 2320 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 484 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = LT;
                   (yyval)->lineno = lineno;
                 }
#line 2331 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 491 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = EQUAL;
                   (yyval)->lineno = lineno;
                 }
#line 2342 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 498 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = UNEQUAL;
                   (yyval)->lineno = lineno;
                 }
#line 2353 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 504 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2359 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 507 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = PLUS;
                   (yyval)->lineno = lineno;
                 }
#line 2370 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 514 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = MINUS;
                   (yyval)->lineno = lineno;
                 }
#line 2381 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 521 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = OR;
                   (yyval)->lineno = lineno;
                 }
#line 2392 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 527 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 2398 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 530 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = MUL;
                   (yyval)->lineno = lineno;
                 }
#line 2409 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 537 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = DIV;
                   (yyval)->lineno = lineno;
                 }
#line 2420 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 544 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = MOD;
                   (yyval)->lineno = lineno;
                 }
#line 2431 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 551 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(OpK);
                   (yyval)->child[0] = (yyvsp[-2]);
                   (yyval)->child[1] = (yyvsp[0]);
                   (yyval)->attr.op = AND;
                   (yyval)->lineno = lineno;
                 }
#line 2442 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 557 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);}
#line 2448 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 559 "bison/pascal.y" /* yacc.c:1646  */
    { (yyval) = newExpNode(IdK);
                  (yyval)->attr.name =copyString(tokenString);
                  (yyval)->lineno = lineno;
                }
#line 2457 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 564 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2463 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 566 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-2]);}
#line 2469 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 568 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2475 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 570 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2481 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 571 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno;}
#line 2488 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 574 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)= newExpNode(FactorK);
                 (yyval)->attr.name =savedName;
                 (yyval)->child[0]=(yyvsp[-1]);
                 (yyval)->lineno =savedLineNo;
                }
#line 2498 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 579 "bison/pascal.y" /* yacc.c:1646  */
    { savedName = copyString(tokenString);
                   savedLineNo = lineno;}
#line 2505 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 582 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=newExpNode(FactorK);
                 (yyval)->attr.name =savedName;
                 (yyval)->child[1]=newExpNode(IdK);
                 (yyval)->child[1]->attr.name=copyString(tokenString);
                 (yyval)->lineno =savedLineNo;
                }
#line 2516 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 590 "bison/pascal.y" /* yacc.c:1646  */
    {  TreeNode* t = (yyvsp[-2]);
                    if (t != NULL)
                    {  while (t->sibling != NULL)
                         t = t->sibling;
                       t->sibling = (yyvsp[0]);
                        (yyval) = (yyvsp[-2]); 
                    }
                    else (yyval) = (yyvsp[0]);
              }
#line 2530 "pascal.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 599 "bison/pascal.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2536 "pascal.tab.c" /* yacc.c:1646  */
    break;


#line 2540 "pascal.tab.c" /* yacc.c:1646  */
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
#line 601 "bison/pascal.y" /* yacc.c:1906  */


int yyerror(char * message){ 
  fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

// static int yylex(void)
// { return getToken(); }

TreeNode * parse(void){
  yyparse();
  return savedTree;
}
