/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "a.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include "q1.h"
	int yylex();
	int yyerror();
	extern FILE *yyin;

#line 75 "a.tab.c" /* yacc.c:339  */

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
   by #include "a.tab.h".  */
#ifndef YY_YY_A_TAB_H_INCLUDED
# define YY_YY_A_TAB_H_INCLUDED
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
    NL = 258,
    PACKAGE = 259,
    IMPORT = 260,
    TYP = 261,
    ID = 262,
    COLON = 263,
    NUMBER = 264,
    DOT = 265,
    COLEQU = 266,
    DOUBLE_QUOTE = 267,
    VAR = 268,
    STRUCT = 269,
    FUNC = 270,
    RETURN = 271,
    BREAK = 272,
    CONTINUE = 273,
    DPLUS = 274,
    DMINUS = 275,
    IF = 276,
    GREATER_THAN = 277,
    GREATER_THAN_EQUAL = 278,
    LESSER_THAN = 279,
    LESSER_THAN_EQUAL = 280,
    EQUALS = 281,
    ELSE = 282,
    NOT_EQUALS = 283,
    SS = 284,
    CO = 285,
    OPEN_FLOW = 286,
    CLOSE_FLOW = 287,
    OPEN_BRAC = 288,
    CLOSE_BRAC = 289,
    MAIN = 290,
    TYPE = 291,
    SQUA_OPEN = 292,
    SQUA_CLOSE = 293,
    PLUS = 294,
    MINUS = 295,
    MUL = 296,
    DIV = 297,
    MOD = 298,
    WHILE = 299,
    FOR = 300,
    EQUAL = 301
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

#endif /* !YY_YY_A_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "a.tab.c" /* yacc.c:358  */

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
#define YYLAST   471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  171
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  277

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    18,    18,    19,    22,    24,    26,    27,    29,    31,
      32,    33,    35,    37,    38,    39,    40,    41,    43,    44,
      47,    50,    51,    52,    54,    55,    56,    57,    59,    60,
      61,    63,    64,    66,    68,    70,    72,    73,    74,    75,
      77,    79,    80,    82,    83,    85,    87,    88,    89,    90,
      91,    93,    94,    96,    97,    99,   100,   103,   104,   106,
     108,   110,   112,   113,   117,   118,   120,   121,   122,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   136,   137,
     138,   142,   143,   144,   145,   147,   150,   153,   154,   155,
     157,   158,   160,   162,   163,   164,   165,   167,   168,   169,
     172,   173,   174,   176,   178,   180,   182,   183,   184,   186,
     187,   188,   190,   191,   194,   195,   197,   198,   199,   201,
     202,   205,   206,   208,   209,   210,   211,   212,   213,   215,
     217,   218,   220,   222,   223,   225,   227,   228,   230,   231,
     233,   235,   236,   237,   239,   240,   241,   243,   244,   247,
     248,   250,   251,   253,   254,   257,   258,   260,   261,   263,
     265,   267,   268,   269,   270,   271,   272,   274,   275,   277,
     278,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NL", "PACKAGE", "IMPORT", "TYP", "ID",
  "COLON", "NUMBER", "DOT", "COLEQU", "DOUBLE_QUOTE", "VAR", "STRUCT",
  "FUNC", "RETURN", "BREAK", "CONTINUE", "DPLUS", "DMINUS", "IF",
  "GREATER_THAN", "GREATER_THAN_EQUAL", "LESSER_THAN", "LESSER_THAN_EQUAL",
  "EQUALS", "ELSE", "NOT_EQUALS", "SS", "CO", "OPEN_FLOW", "CLOSE_FLOW",
  "OPEN_BRAC", "CLOSE_BRAC", "MAIN", "TYPE", "SQUA_OPEN", "SQUA_CLOSE",
  "PLUS", "MINUS", "MUL", "DIV", "MOD", "WHILE", "FOR", "EQUAL", "$accept",
  "program", "PackageClause", "PackageName", "Import", "ImportDecl",
  "ImportSpec", "ImportPath", "pp", "S", "VarDecl", "VarSpec", "Type",
  "TypeLit", "TypeName", "QualifiedIdent", "ArrayType", "StructType",
  "FieldDecl", "FunctionType", "Signature", "Result", "TypeDecl",
  "Parameters", "Parameter_List", "Param", "Parameter_Decl",
  "FunctionDecl", "Function", "FunctionBody", "Block", "Statement_list",
  "ExprList", "identifier_list", "statement", "Declaration", "SimpleStmt",
  "expression_stat", "shortvarDecl", "assign_stat", "expn", "index",
  "primaryexpr", "Operand", "Literal", "FunctionLit", "BasicLit",
  "CompositeLit", "LiteralType", "LiteralValue", "ElementList",
  "KeyedElement", "Key", "Element", "OperandName", "Arguments", "Selector",
  "eprime", "simple_expn", "seprime", "term", "tprime", "factor",
  "decision_stat", "dprime", "looping_stat", "ForClause", "Condition",
  "stml", "inDec_stat", "exprTT", "return_stat", "break_stat",
  "continue_stat", "relop", "addop", "mulop", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -142

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-142)))

#define YYTABLE_NINF -150

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,     8,    32,   219,  -142,  -142,  -142,   117,    37,   270,
     428,    37,    19,     4,   368,  -142,  -142,   368,   254,   368,
     377,   331,   254,    47,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,   254,    36,    46,   254,  -142,  -142,  -142,  -142,
    -142,    28,    53,  -142,  -142,  -142,  -142,  -142,    65,  -142,
     184,   112,    76,  -142,  -142,  -142,  -142,  -142,  -142,    56,
      16,    56,  -142,  -142,    80,  -142,   153,   116,    37,    85,
      88,  -142,     1,    93,   322,   115,   392,   279,    93,  -142,
     109,   115,   121,   122,     2,   119,  -142,  -142,  -142,   135,
     115,   115,   132,  -142,  -142,  -142,   368,   368,  -142,  -142,
    -142,   368,   170,   316,   368,  -142,  -142,  -142,   164,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,    20,  -142,  -142,
    -142,    20,  -142,  -142,  -142,  -142,    20,  -142,    16,    16,
      16,    16,   168,  -142,   175,    93,   397,  -142,   368,   368,
     141,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   145,   368,
     368,    74,   185,   161,   397,   115,  -142,    39,    16,  -142,
    -142,    11,   172,   397,  -142,  -142,   322,  -142,  -142,  -142,
     171,  -142,  -142,   397,   397,  -142,  -142,   368,  -142,  -142,
    -142,  -142,   249,    16,    93,   240,  -142,    61,    63,   169,
     173,   181,   179,   410,  -142,   211,   212,   108,   191,   222,
    -142,  -142,  -142,  -142,   112,    76,  -142,  -142,  -142,  -142,
    -142,  -142,   193,  -142,   368,   368,  -142,  -142,  -142,     1,
    -142,     1,  -142,   227,   197,  -142,   402,  -142,  -142,   193,
      12,  -142,  -142,  -142,  -142,   213,   233,   115,   368,  -142,
    -142,  -142,   214,  -142,   356,   365,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,    71,  -142,   172,  -142,  -142,   412,    79,
     217,  -142,  -142,  -142,  -142,  -142,    37,  -142,  -142,  -142,
      37,  -142,  -142,   231,   232,  -142,  -142
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     7,     5,     4,     1,     0,     0,   121,
     104,     0,     0,     0,   157,   159,   160,     0,    63,     0,
       0,   152,    19,     7,     2,    78,   122,   107,   106,    80,
      79,    76,    19,     0,     0,    63,    75,    77,    82,    84,
      69,    85,    91,    93,    97,   102,   100,   101,     0,    98,
     131,   134,   137,    70,    71,    81,    72,    73,    74,     0,
      17,     0,     8,    11,    66,    45,     0,     0,     0,     0,
       0,    20,    39,     0,     0,     0,    41,   121,     0,   158,
      64,     0,     0,     0,   139,     0,   146,   151,    83,    64,
       0,     0,     0,     3,     6,    18,     0,     0,    62,   153,
     154,     0,     0,     0,     0,    96,    94,    95,     0,   105,
     161,   162,   163,   164,   165,   166,    90,     0,   167,   168,
     132,     0,   170,   169,   171,   135,     0,     9,    17,    17,
      17,    17,     0,    10,    31,     0,     0,    24,     0,     0,
      21,    25,    26,    32,    28,    30,    29,    33,    67,     0,
       0,    66,     0,     0,     0,    57,    58,    66,    17,    48,
      55,     0,    51,     0,   103,    60,     0,    44,    42,    43,
     143,    61,    99,     0,     0,   144,   145,   156,    87,    86,
      65,   129,   138,    17,     0,     0,   123,     0,   122,    28,
      30,     0,     0,   138,   109,   119,   120,     0,   112,     0,
     114,   138,   139,   130,   134,   137,    13,    15,    14,    16,
      12,    40,     0,    23,     0,     0,    88,    89,    37,    39,
      35,    39,    59,     0,     0,    47,     0,    52,    56,    55,
       0,   140,   108,    34,   155,     0,     0,    40,     0,   125,
     124,    92,     0,   110,     0,     0,   133,   136,    27,    22,
      68,    38,    36,     0,    46,    54,   141,   142,   152,     0,
       0,   111,   113,   119,   120,   115,     0,    49,    53,   147,
       0,   127,   126,     0,     0,    50,   128
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   241,   230,  -142,  -142,    83,   -75,    57,
    -142,   263,     9,  -142,   126,   -52,   -38,    -4,  -141,  -142,
     -64,  -142,  -142,   208,  -142,    33,    64,  -142,  -142,   142,
     -14,    -5,    -9,    -8,  -142,  -142,   -20,  -142,  -142,   -17,
      -1,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   -42,
      62,  -142,  -142,    69,  -142,  -142,  -142,  -142,   198,   104,
     195,   127,   200,    87,  -142,  -142,  -142,  -142,    66,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,    22,    23,    62,    63,   132,    24,
      25,    65,   160,   141,   142,    26,    27,    28,   153,   146,
      75,   168,    29,    76,   161,   227,   162,    30,   156,   164,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      80,   105,    42,    43,    44,    45,    46,    47,    48,   196,
     197,   198,   199,   200,    49,   106,   107,   116,    50,   120,
      51,   125,    52,    53,   231,    54,    90,    91,    92,    55,
     235,    56,    57,    58,   117,   121,   126
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    87,    41,    66,    88,    79,   109,    86,   151,   155,
     218,    73,  -104,    82,   143,     4,    81,    41,    83,    85,
      89,    41,   143,   128,   143,   129,     1,   201,   144,   202,
      98,    41,     6,    17,    41,  -104,   144,    74,   144,  -104,
     173,   224,   152,    18,    64,   225,   130,    99,   100,    67,
      72,   188,     7,   206,   207,   208,   209,    97,   101,   131,
     148,   165,   145,   102,   154,   189,   163,   170,    60,    68,
     145,   211,   145,   -31,   -64,   140,   175,   176,   251,    93,
     252,   151,    96,   223,   143,   167,   103,   178,   179,    95,
     104,   238,   180,   -32,   191,   239,   108,   -32,   144,   190,
     143,   266,   143,   192,    68,   267,   -39,   195,   236,   270,
      68,   143,   187,   271,   143,   152,   144,   122,   123,   124,
     237,   143,   143,   147,     4,   144,    74,    59,   144,    60,
     213,   149,   145,   188,   150,   144,   144,    85,   242,   101,
     243,   165,   127,   154,   133,   212,    18,   189,   216,   217,
     145,   118,   119,   171,    99,   100,   172,   174,   163,   145,
     134,   177,   145,   221,   -85,   101,  -149,    12,   135,   145,
     145,   193,   228,    10,   143,   229,   234,   181,    12,    78,
     210,   190,   232,   233,    83,    67,   136,   214,   144,   137,
     138,   215,   134,   220,   212,   108,   194,    19,   230,   139,
    -107,    20,   226,   264,  -106,   249,   110,   111,   112,   113,
     114,   154,   115,   154,   250,   240,   256,   241,   163,  -117,
    -118,   244,   145,   165,     7,     8,     9,   248,    10,   260,
     245,   254,    11,    12,    13,    14,    15,    16,    87,   253,
      17,    88,   258,   195,   263,   259,   261,   182,    61,    10,
      18,   272,    19,    94,    12,   184,    20,    41,   273,    67,
       8,     9,   274,    10,    21,   275,   276,    11,    12,    13,
      14,    15,    16,   185,    71,    17,   137,    20,   219,   -31,
      67,   -66,  -121,   -31,   169,    18,  -121,    19,   268,    67,
     255,    20,  -138,  -138,  -138,  -138,  -138,   222,  -138,    21,
      68,  -138,  -138,  -138,  -138,  -138,   262,  -138,   246,    69,
    -138,    70,  -138,  -138,   265,   203,   204,   257,  -138,  -138,
    -138,  -138,  -138,   182,   269,    10,   205,     0,   183,   157,
      12,   184,   247,     0,   158,     0,    12,   135,     9,     0,
      10,     0,     0,     0,     0,    12,    78,     0,     0,   185,
     186,     0,   137,    20,     0,   136,   159,     0,   137,   138,
       0,     0,    18,   193,    19,    10,     0,     0,    20,     0,
      12,    78,    77,     0,    10,    77,     0,    10,     0,    12,
      78,     0,    12,    78,    77,     0,    84,   108,     0,    19,
       0,    12,    78,    20,     0,     0,   108,     0,    19,   134,
       0,    19,    20,     0,   134,    20,    12,   135,     0,   157,
      19,    12,   135,     0,    20,     0,    12,   135,  -116,     9,
      67,    10,     0,     0,     0,   166,    12,    78,   137,   138,
     136,     0,     0,   137,   138,   136,     0,     0,   137,   138,
    -121,     0,  -121,  -121,     0,    19,     0,  -121,     0,    20,
    -139,  -139,  -139,  -139,  -139,     0,  -139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -139,  -139,  -139,
    -139,  -139
};

static const yytype_int16 yycheck[] =
{
       8,    21,     3,    11,    21,    14,    48,    21,     7,    73,
     151,     7,    10,    18,    66,     7,    17,    18,    19,    20,
      21,    22,    74,     7,    76,     9,     4,     7,    66,     9,
      35,    32,     0,    21,    35,    33,    74,    33,    76,    37,
      38,    30,    41,    31,     7,    34,    30,    19,    20,    10,
      31,   103,     5,   128,   129,   130,   131,    11,    30,    43,
      68,    75,    66,    10,    72,   103,    74,    81,    12,    30,
      74,   135,    76,    34,    46,    66,    90,    91,   219,    22,
     221,     7,    46,   158,   136,    76,    33,    96,    97,    32,
      37,    30,   101,    30,   103,    34,    31,    34,   136,   103,
     152,    30,   154,   104,    30,    34,    32,   108,   183,    30,
      30,   163,   103,    34,   166,    41,   154,    41,    42,    43,
     184,   173,   174,     7,     7,   163,    33,    10,   166,    12,
     139,    46,   136,   185,    46,   173,   174,   138,    30,    30,
      32,   155,    59,   151,    61,   136,    31,   185,   149,   150,
     154,    39,    40,    32,    19,    20,    34,    38,   166,   163,
       7,    29,   166,   154,    29,    30,    31,    14,    15,   173,
     174,     7,   163,     9,   226,   166,   177,     7,    14,    15,
      12,   185,   173,   174,   185,    10,    33,    46,   226,    36,
      37,    46,     7,    32,   185,    31,    32,    33,    27,    46,
      31,    37,    30,   245,    31,   214,    22,    23,    24,    25,
      26,   219,    28,   221,   215,    34,   230,    38,   226,     8,
       8,    30,   226,   237,     5,     6,     7,    34,     9,   238,
       8,    34,    13,    14,    15,    16,    17,    18,   258,    12,
      21,   258,    29,   244,   245,    12,    32,     7,     7,     9,
      31,    34,    33,    23,    14,    15,    37,   258,   266,    10,
       6,     7,   270,     9,    45,    34,    34,    13,    14,    15,
      16,    17,    18,    33,    11,    21,    36,    37,   152,    30,
      10,    11,    33,    34,    76,    31,    37,    33,   255,    10,
     226,    37,    22,    23,    24,    25,    26,   155,    28,    45,
      30,    22,    23,    24,    25,    26,   244,    28,   204,    39,
      40,    41,    42,    43,   245,   117,   121,   230,    39,    40,
      41,    42,    43,     7,   258,     9,   126,    -1,    12,     7,
      14,    15,   205,    -1,    12,    -1,    14,    15,     7,    -1,
       9,    -1,    -1,    -1,    -1,    14,    15,    -1,    -1,    33,
      34,    -1,    36,    37,    -1,    33,    34,    -1,    36,    37,
      -1,    -1,    31,     7,    33,     9,    -1,    -1,    37,    -1,
      14,    15,     7,    -1,     9,     7,    -1,     9,    -1,    14,
      15,    -1,    14,    15,     7,    -1,     9,    31,    -1,    33,
      -1,    14,    15,    37,    -1,    -1,    31,    -1,    33,     7,
      -1,    33,    37,    -1,     7,    37,    14,    15,    -1,     7,
      33,    14,    15,    -1,    37,    -1,    14,    15,     8,     7,
      10,     9,    -1,    -1,    -1,    33,    14,    15,    36,    37,
      33,    -1,    -1,    36,    37,    33,    -1,    -1,    36,    37,
      30,    -1,    32,    33,    -1,    33,    -1,    37,    -1,    37,
      22,    23,    24,    25,    26,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    48,    49,     7,    50,     0,     5,     6,     7,
       9,    13,    14,    15,    16,    17,    18,    21,    31,    33,
      37,    45,    51,    52,    56,    57,    62,    63,    64,    69,
      74,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    89,    90,    91,    92,    93,    94,    95,   101,
     105,   107,   109,   110,   112,   116,   118,   119,   120,    10,
      12,    50,    53,    54,     7,    58,    80,    10,    30,    39,
      41,    58,    31,     7,    33,    67,    70,     7,    15,    79,
      87,    87,    78,    87,     9,    87,    77,    83,    86,    87,
     113,   114,   115,    56,    51,    56,    46,    11,    78,    19,
      20,    30,    10,    33,    37,    88,   102,   103,    31,    96,
      22,    23,    24,    25,    26,    28,   104,   121,    39,    40,
     106,   122,    41,    42,    43,   108,   123,    54,     7,     9,
      30,    43,    55,    54,     7,    15,    33,    36,    37,    46,
      59,    60,    61,    62,    63,    64,    66,     7,    80,    46,
      46,     7,    41,    65,    80,    67,    75,     7,    12,    34,
      59,    71,    73,    80,    76,    77,    33,    59,    68,    70,
      77,    32,    34,    38,    38,    77,    77,    29,    79,    79,
      79,     7,     7,    12,    15,    33,    34,    59,    62,    63,
      64,    79,    87,     7,    32,    87,    96,    97,    98,    99,
     100,     7,     9,   105,   107,   109,    55,    55,    55,    55,
      12,    67,    59,    79,    46,    46,    87,    87,    65,    61,
      32,    59,    76,    55,    30,    34,    30,    72,    59,    59,
      27,   111,    59,    59,    87,   117,    55,    67,    30,    34,
      34,    38,    30,    32,    30,     8,   106,   108,    34,    79,
      87,    65,    65,    12,    34,    73,    77,   110,    29,    12,
      79,    32,    97,    87,    96,   100,    30,    34,    72,   115,
      30,    34,    34,    80,    80,    34,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    50,    51,    51,    52,    53,
      53,    53,    54,    55,    55,    55,    55,    55,    56,    56,
      57,    58,    58,    58,    59,    59,    59,    59,    60,    60,
      60,    61,    61,    62,    63,    64,    65,    65,    65,    65,
      66,    67,    67,    68,    68,    69,    70,    70,    70,    70,
      70,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      76,    77,    78,    78,    79,    79,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    82,    82,
      82,    83,    83,    83,    83,    84,    85,    86,    86,    86,
      87,    87,    88,    89,    89,    89,    89,    90,    90,    90,
      91,    91,    91,    92,    93,    94,    95,    95,    95,    96,
      96,    96,    97,    97,    98,    98,    99,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   103,
     104,   104,   105,   106,   106,   107,   108,   108,   109,   109,
     110,   111,   111,   111,   112,   112,   112,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   119,
     120,   121,   121,   121,   121,   121,   121,   122,   122,   123,
     123,   123
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     1,     2,     0,     2,     2,
       2,     1,     3,     2,     2,     2,     2,     0,     2,     0,
       2,     2,     4,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     4,     4,     3,     2,     3,     0,
       2,     1,     2,     1,     1,     2,     4,     3,     2,     5,
       7,     1,     2,     3,     0,     1,     2,     3,     3,     2,
       1,     3,     2,     0,     1,     3,     1,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     4,
       2,     1,     3,     1,     2,     2,     2,     1,     1,     3,
       1,     1,     1,     3,     1,     2,     1,     1,     4,     2,
       3,     4,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     5,     5,     7,     2,
       2,     0,     2,     3,     0,     2,     3,     0,     1,     1,
       4,     2,     2,     0,     3,     3,     2,     5,     0,     1,
       0,     1,     0,     2,     2,     1,     0,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
      
#line 1505 "a.tab.c" /* yacc.c:1646  */
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
#line 281 "a.y" /* yacc.c:1906  */


void main(){
	yyin = fopen("in.txt", "r");
	do{
		if(yyparse()){
			printf("\n Failure");
			exit(0);
		}
	}while(!feof(yyin));
	fp=fopen("in.txt","r");
	fout = fopen("out.c","w");
	col = 1;
	Initialize();
	while(getNextToken());
	printSymbolTable();
	printf("success");
}

