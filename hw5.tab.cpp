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
#line 1 "hw5.ypp" /* yacc.c:339  */

	#include "hw5.hpp"
	#include "output.hpp"
	#include "symTable.hpp"
	#include "bp.hpp"
	#include <iostream>
	#include <sstream>
	#include <stdio.h>
	#include <vector>
	#include <stack>
	
	using namespace std;
	using namespace output;

	extern int yylex();
	extern int yylineno;
	extern const char* yytext;
	extern FILE* yyin;
	
	void yyerror(const char*);
	bool isTemperture(string type);
	bool checkAssignmentTyps(string t1, string t2);
	string findVarType(string id);
	int findVarOffset(string id);
	void printStype(YYSTYPE yst, string msg);
	bool isVarDefined(string id);
	void findAndSetVarIsAssigned(string id, bool val);
	int convertTempStringToNum(string type);
	bool isVarAssigned(string id);
	string newTemp(string type);

	//gen temp conversions codes
	string genCelsiusToKelvinCode(string);
	string genCelsiusToFahrenheitCode(string);
	
	string genKelvinToCelsiusCode(string);
	string genKelvinToFahrenheitCode(string);
	
	string genFahrenheitToCelsiusCode(string);
	string genFahrenheitToKelvinCode(string);
	
	string genConversionCode(YYSTYPE st, string type);
	
	vector<SymTable> tablesStack;
	stack<int> offsetStack;
	stack<list<int> > whileNextlists;

	bool condScopeFlag = false;
	int whileCounter = 0;
	
	int tmpIdx = 1;
	
	int isAssignmentStmt = 0;

	#define OFFSET_SIZE 1

#line 123 "hw5.tab.cpp" /* yacc.c:339  */

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
   by #include "hw5.tab.hpp".  */
#ifndef YY_YY_HW5_TAB_HPP_INCLUDED
# define YY_YY_HW5_TAB_HPP_INCLUDED
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
    LP = 258,
    RP = 259,
    LC = 260,
    RC = 261,
    SC = 262,
    CELSIUS = 263,
    FAHRENHEIT = 264,
    KELVIN = 265,
    INT = 266,
    PRINT = 267,
    INPUT = 268,
    ID = 269,
    STRING = 270,
    TRUE = 271,
    FALSE = 272,
    BOOL = 273,
    IF = 274,
    ELSE = 275,
    WHILE = 276,
    BREAK = 277,
    NUM = 278,
    SWITCH = 279,
    CASE = 280,
    COLON = 281,
    FOREACH = 282,
    IFX = 283,
    ASSIGN = 284,
    OR = 285,
    AND = 286,
    REL_OP = 287,
    PLUS = 288,
    MINUS = 289,
    MULT = 290,
    DIV = 291,
    NOT = 292
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

#endif /* !YY_YY_HW5_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "hw5.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   177

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    75,    79,    83,    88,   104,   132,   155,
     163,   181,   198,   204,   212,   222,   235,   293,   326,   336,
     347,   356,   357,   358,   359,   361,   367,   373,   380,   386,
     394,   400,   408,   418,   427,   432,   453,   474,   498,   525,
     551,   564,   578,   587,   596,   624,   655,   687,   740,   744,
     749,   754,   762,   769,   778,   785,   795,   802,   806,   812
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LP", "RP", "LC", "RC", "SC", "CELSIUS",
  "FAHRENHEIT", "KELVIN", "INT", "PRINT", "INPUT", "ID", "STRING", "TRUE",
  "FALSE", "BOOL", "IF", "ELSE", "WHILE", "BREAK", "NUM", "SWITCH", "CASE",
  "COLON", "FOREACH", "IFX", "ASSIGN", "OR", "AND", "REL_OP", "PLUS",
  "MINUS", "MULT", "DIV", "NOT", "$accept", "Prog", "stmts", "stmt",
  "CasesList", "CaseStat", "OP", "TempType", "Type", "ForceTempExp",
  "ForceBoolExp", "ForceIntId", "Exp", "setCondFlagOff", "SetCondFlagOn",
  "InitMarker", "FinishMarker", "WhileMarker", "EndScopeMarker",
  "StartScopeMarker", "EndScopeMarkerIfCond", "StartScopeMarkerIfCond",
  "M", "N", "setIsAssignmentStmt", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

#define YYPACT_NINF -109

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-109)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -109,    24,   127,  -109,    23,    35,    37,    39,   107,  -109,
      15,    48,    41,     2,  -109,     2,    53,  -109,  -109,    -2,
      56,    64,    59,   127,  -109,  -109,  -109,  -109,  -109,  -109,
      60,     2,  -109,  -109,  -109,    55,     2,  -109,   125,     2,
    -109,   125,  -109,    55,    69,    71,    73,  -109,    52,   103,
       7,    54,  -109,  -109,    79,  -109,  -109,     2,     2,     2,
       2,     2,  -109,    87,   106,  -109,  -109,  -109,     2,  -109,
    -109,  -109,  -109,  -109,     2,     2,   102,    20,    20,  -109,
    -109,   114,   118,   109,    -1,  -109,     2,   127,   131,   136,
    -109,    86,  -109,  -109,  -109,  -109,     2,  -109,    62,  -109,
    -109,   110,   141,    86,    70,  -109,   130,   127,    55,  -109,
    -109,  -109,  -109,  -109,   126,  -109,  -109,  -109,  -109,  -109,
    -109,   127,   127,  -109,   151,  -109,   146,  -109,  -109,  -109
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      50,     0,    56,     1,     0,     0,     0,     0,    56,     4,
      59,     0,     0,     0,    57,     0,     0,     3,     2,     0,
       0,     0,     0,    56,    25,    26,    27,    29,    30,    28,
       0,     0,    39,    42,    43,    40,     0,    49,    32,     0,
      58,    31,    33,     0,     0,     0,     0,    15,     0,    56,
       0,     0,    41,    44,     0,    57,    57,     0,     0,     0,
       0,     0,    49,     0,     0,    10,     9,    11,     0,    53,
       6,    59,    34,    57,     0,     0,    47,    35,    36,    37,
      38,     0,     0,     0,     0,     5,     0,    56,    45,    46,
      52,     0,    21,    22,    23,    24,     0,     8,     0,    55,
      57,     0,     0,    19,     0,     7,    12,    56,     0,    17,
      18,    16,    49,    58,     0,    58,    55,    49,    57,    14,
      57,    56,    56,    55,     0,    13,     0,    58,    55,    20
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,   152,    -8,    74,  -109,  -109,   -33,  -109,  -109,
     135,  -109,   -14,  -109,   -55,  -109,  -109,  -109,  -109,  -109,
    -108,  -109,   -52,  -104,   105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     8,     9,   102,   103,    96,    29,    30,    40,
      37,    43,    38,    10,    54,     2,    18,   100,    85,    11,
     106,    12,    39,    63,    22
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    41,    52,    74,    75,    31,    97,    81,   119,   116,
      64,   118,    44,    45,    70,   125,    32,    51,    33,    34,
     129,    87,    53,   128,     3,    35,    13,    19,    20,    55,
      56,    57,    58,    59,    60,    61,    71,    21,    14,    36,
      15,    17,    16,    76,    77,    78,    79,    80,   107,    24,
      25,    26,    27,    23,    84,    60,    61,   115,    72,    28,
      88,    89,   120,    24,    25,    26,   121,    42,   122,   105,
      46,    47,    98,    48,    50,   114,    65,   111,    66,    99,
      67,    68,   104,    73,    55,    56,    57,    58,    59,    60,
      61,    82,    55,    56,    57,    58,    59,    60,    61,   113,
      55,    56,    57,    58,    59,    60,    61,   -51,   -54,    69,
      83,   101,   -54,   123,   124,   -48,   -48,   -48,    90,   -48,
     -48,   -48,     4,    91,     5,   -48,     4,     6,     5,   -48,
       7,     6,   -54,   108,     7,    58,    59,    60,    61,   -48,
     -48,   -48,    92,    93,    94,    95,     4,   109,     5,   -48,
     112,     6,   117,   127,     7,    55,    56,    57,    58,    59,
      60,    61,    56,    57,    58,    59,    60,    61,    57,    58,
      59,    60,    61,   126,    62,    49,    86,   110
};

static const yytype_uint8 yycheck[] =
{
       8,    15,    35,    55,    56,     3,     7,    62,   116,   113,
      43,   115,    14,    15,     7,   123,    14,    31,    16,    17,
     128,    73,    36,   127,     0,    23,     3,    12,    13,    30,
      31,    32,    33,    34,    35,    36,    29,    22,     3,    37,
       3,    49,     3,    57,    58,    59,    60,    61,   100,     8,
       9,    10,    11,     5,    68,    35,    36,   112,     4,    18,
      74,    75,   117,     8,     9,    10,   118,    14,   120,     7,
      14,     7,    86,    14,    14,   108,     7,     7,     7,    87,
       7,    29,    96,     4,    30,    31,    32,    33,    34,    35,
      36,     4,    30,    31,    32,    33,    34,    35,    36,   107,
      30,    31,    32,    33,    34,    35,    36,     0,     5,     6,
       4,    25,     5,   121,   122,    12,    13,    14,     4,    12,
      13,    14,    19,     5,    21,    22,    19,    24,    21,    22,
      27,    24,     5,    23,    27,    33,    34,    35,    36,    12,
      13,    14,    33,    34,    35,    36,    19,     6,    21,    22,
      20,    24,    26,     7,    27,    30,    31,    32,    33,    34,
      35,    36,    31,    32,    33,    34,    35,    36,    32,    33,
      34,    35,    36,    22,    39,    23,    71,   103
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    53,     0,    19,    21,    24,    27,    40,    41,
      51,    57,    59,     3,     3,     3,     3,    41,    54,    12,
      13,    22,    62,     5,     8,     9,    10,    11,    18,    45,
      46,     3,    14,    16,    17,    23,    37,    48,    50,    60,
      47,    50,    14,    49,    14,    15,    14,     7,    14,    40,
      14,    50,    45,    50,    52,    30,    31,    32,    33,    34,
      35,    36,    48,    61,    45,     7,     7,     7,    29,     6,
       7,    29,     4,     4,    60,    60,    50,    50,    50,    50,
      50,    52,     4,     4,    50,    56,    62,    60,    50,    50,
       4,     5,    33,    34,    35,    36,    44,     7,    50,    41,
      55,    25,    42,    43,    50,     7,    58,    60,    23,     6,
      42,     7,    20,    41,    45,    52,    61,    26,    61,    58,
      52,    60,    60,    41,    41,    58,    22,     7,    61,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    42,    42,
      43,    44,    44,    44,    44,    45,    45,    45,    46,    46,
      46,    47,    48,    49,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     5,     4,     7,     6,     4,
       4,     4,     8,    14,    11,     3,     8,     8,     2,     1,
      11,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     2,     1,     1,     2,     4,     4,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
        case 3:
#line 76 "hw5.ypp" /* yacc.c:1646  */
    {
			bp((yyvsp[0]).nextlist, next());
        }
#line 1383 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 80 "hw5.ypp" /* yacc.c:1646  */
    {
			bp((yyvsp[0]).nextlist, next());
       }
#line 1391 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 84 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "LC StartScopeMarker stmts EndScopeMarker RC" << endl;
					(yyval).nextlist = list<int>();
				}
#line 1400 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 89 "hw5.ypp" /* yacc.c:1646  */
    {
					//~ cout << "Type ID SC" << endl;
					(yyvsp[-1]).type = (yyvsp[-2]).type;
					//~ cout << yytext << endl;
					//~ cout << condScopeFlag << endl;
					if (isVarDefined((yyvsp[-1]).id)) {
						errorDef(yylineno, (yyvsp[-1]).id.c_str());
						exit(1);
					}
					tablesStack.back().insertVar((yyvsp[-1]).id, (yyvsp[-1]).type, offsetStack.top(), false /*isAssigned*/);
					int newOffset = offsetStack.top() + OFFSET_SIZE;
					offsetStack.pop();
					offsetStack.push(newOffset);		
					(yyval).nextlist = list<int>();
				}
#line 1420 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 105 "hw5.ypp" /* yacc.c:1646  */
    {
					//~ cout << "Type ID ASSIGN Exp SC" << endl;
					//~ cout << "cond: "<<condScopeFlag << endl;
					(yyvsp[-4]).type = (yyvsp[-5]).type;
					if (isVarDefined((yyvsp[-4]).id)) {
						errorDef(yylineno, (yyvsp[-4]).id.c_str());
						exit(1);
					}
					if (!checkAssignmentTyps((yyvsp[-5]).type, (yyvsp[-1]).type)) {
						errorMismatch(yylineno);
						exit(1);
					}
					
					tablesStack.back().insertVar((yyvsp[-4]).id, (yyvsp[-4]).type, offsetStack.top(), true /*isAssigned*/);
					int newOffset = offsetStack.top() + OFFSET_SIZE;
					offsetStack.pop();
					offsetStack.push(newOffset);
					
					ostringstream os;
					if (isTemperture((yyvsp[-5]).type)){
						(yyvsp[-2]).place = genConversionCode((yyvsp[-1]), (yyvsp[-5]).type);
					}
					os << "s[" << findVarOffset((yyvsp[-4]).id) << "]" << "=" << (yyvsp[-1]).place;
					emit(os.str());
					(yyval).nextlist = list<int>();
					isAssignmentStmt = 0;
				}
#line 1452 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 133 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "ID ASSIGN Exp SC" << endl;
					string idType = findVarType((yyvsp[-3]).id);
					if (idType == string("")) {
						errorUndef(yylineno, (yyvsp[-3]).id.c_str());
						exit(1);
					}
					
					if (!checkAssignmentTyps(idType, (yyvsp[-1]).type)) {
						errorMismatch(yylineno);
						exit(1);
					}
					findAndSetVarIsAssigned((yyvsp[-3]).id, true);
					ostringstream os;
					if (isTemperture((yyvsp[-3]).type)){
						(yyvsp[-1]).place = genConversionCode((yyvsp[-1]), (yyvsp[-3]).type);
					}
					os << "s[" << findVarOffset((yyvsp[-3]).id) << "]" << "=" << (yyvsp[-1]).place;
					emit(os.str());
					(yyval).nextlist = list<int>();
					isAssignmentStmt = 0;
				}
#line 1479 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 156 "hw5.ypp" /* yacc.c:1646  */
    { 
					//cout << "PRINT STRING SC" << endl; 
					ostringstream os;
					os << "print " << (yyvsp[-1]).id;
					emit(os.str());
					(yyval).nextlist = list<int>();	
				}
#line 1491 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 164 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "PRINT ID SC" << endl;
					string idType = findVarType((yyvsp[-1]).id);
					if (idType == string("")){
						errorUndef(yylineno, (yyvsp[-1]).id.c_str());
						exit(1);
					}
					if (idType == string("BOOL")){
						errorMismatch(yylineno);
						exit(1);
					}
					
					ostringstream os;
					os << "print s[" << findVarOffset((yyvsp[-1]).id) << "]";
					emit(os.str());
					(yyval).nextlist = list<int>();	
				}
#line 1513 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 182 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "INPUT ID SC" << endl;
					string idType = findVarType((yyvsp[-1]).id);
					if (idType == string("")){
						errorUndef(yylineno, (yyvsp[-1]).id.c_str());
						exit(1);
					}
					if (idType == string("BOOL")){
						errorMismatch(yylineno);
						exit(1);
					}
					ostringstream os;
					os << "input s[" << findVarOffset((yyvsp[-1]).id) << "]";
					emit(os.str());
					(yyval).nextlist = list<int>();	
				}
#line 1534 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 199 "hw5.ypp" /* yacc.c:1646  */
    {
					//~ cout << "IF LP Exp RP stmt %prec IFX" << endl;
					bp((yyvsp[-5]).truelist, (yyvsp[-2]).quad);
					(yyval).nextlist = merge((yyvsp[-5]).falselist, (yyvsp[-1]).nextlist);
				}
#line 1544 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 206 "hw5.ypp" /* yacc.c:1646  */
    {
					//~ cout << "IF LP Exp RP stmt ELSE stmt" << endl;
					bp((yyvsp[-11]).truelist, (yyvsp[-8]).quad);
					bp((yyvsp[-11]).falselist, (yyvsp[-2]).quad);
					(yyval).nextlist = merge(merge((yyvsp[-7]).nextlist, (yyvsp[-1]).nextlist), (yyvsp[-3]).nextlist);
				}
#line 1555 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 213 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "WHILE LP Exp RP WhileMarker stmt" << endl;
					whileCounter--;
					bp((yyvsp[-7]).truelist, (yyvsp[-3]).quad); //pointing "true" if to stmt
					bp((yyvsp[-1]).nextlist, (yyvsp[-8]).quad); //pointing the goto after the stmt back to the "if"
					bp((yyvsp[-2]).nextlist, (yyvsp[-8]).quad); //pointing the "next" of the stmt back to the "if"
					(yyval).nextlist = merge((yyvsp[-7]).falselist, whileNextlists.top()); //merging next list of while and false list of if
					whileNextlists.pop(); //update top of whileNextlists
				}
#line 1569 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 223 "hw5.ypp" /* yacc.c:1646  */
    {
					//~ cout << "BREAK SC" << endl;
					//~ cout << condScopeFlag << endl;
					if (whileCounter <= 0 ) {
						errorUnexpectedBreak(yylineno);
						exit(1);
					}
					list<int>& topWhileNextlists = whileNextlists.top();
					topWhileNextlists = merge(topWhileNextlists, makelist(next()));
					emit("goto ");
					(yyval).nextlist = list<int>();
				}
#line 1586 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 236 "hw5.ypp" /* yacc.c:1646  */
    {
					ostringstream os;
					if (!isVarDefined((yyvsp[-5]).id)) {
						errorUndef(yylineno, (yyvsp[-5]).id.c_str());
						exit(1);
					}
					if (!isVarAssigned((yyvsp[-5]).id)) {
						findAndSetVarIsAssigned((yyvsp[-5]).id, true);
						os << "s[" << findVarOffset((yyvsp[-5]).id) << "] = 2";
						emit(os.str());
						os.str("");
					}
					//get last id and init un-assigned id's:
					string lastId;
					for (vector<SymTable>::reverse_iterator symTable = tablesStack.rbegin(); symTable != tablesStack.rend(); ++symTable) {
						for (vector<TableLine>::iterator line=symTable->table.begin(); line != symTable->table.end(); line++){
							if (line->type == (yyvsp[-4]).type){
								lastId = line->id;
								if (!line->isAssigned){
									os << "s[" << line->offset << "]=0";
									emit(os.str());
									os.str("");
									symTable->setIsVarAssigned(line->id, true);
								}
							}
						}
					}
					
					for (vector<SymTable>::reverse_iterator symTable = tablesStack.rbegin(); symTable != tablesStack.rend(); ++symTable) {
						for (vector<TableLine>::iterator line=symTable->table.begin(); line != symTable->table.end(); line++){
							if (line->type == (yyvsp[-4]).type){
								string counter = newTemp((yyvsp[-5]).type);
								os << counter << "=s[" << findVarOffset((yyvsp[-5]).id) << "]";
								emit(os.str());
								os.str("");
								os << "if " << counter << ">0 goto "<< next()+2;
								emit(os.str());
								os.str("");
								if (line->id == lastId){
									(yyval).nextlist = makelist(next());
									emit("goto ");
								} else {
									os << "goto " << next()+3;
									emit(os.str());
									os.str("");
								}
								os << "s[" << line->offset << "]= s[" << line->offset << "]"  << (yyvsp[-2]).id << (yyvsp[-1]).place;
								emit(os.str());
								os.str("");
								os << counter << "=" << counter << "-1";
								emit(os.str());
								os.str("");
							}
						}
					}
				}
#line 1647 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 294 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "SWITCH LP Exp RP LC StartScopeMarker CasesList EndScopeMarker RC" << endl;
					bp((yyvsp[-4]).nextlist, next()); //preparing the "jump" for the evaluation of the exp.
					while (!(yyvsp[-1]).valueList.empty()){
						 string val = (yyvsp[-1]).valueList.top();
						 (yyvsp[-1]).valueList.pop();
						 string type = (yyvsp[-1]).typeList.top();
						 (yyvsp[-1]).typeList.pop();
						 string convertFromType = type;
						 string convertToType = (yyvsp[-5]).type;
						 if (convertFromType != convertToType){
							YYSTYPE convertedVar;
							convertedVar.type = convertFromType;
							string valPlace = newTemp(type);
							ostringstream os;
							os << valPlace << "=" << val;
							emit(os.str());
							convertedVar.place = valPlace;
							string convertedPlace = genConversionCode(convertedVar, convertToType);
							//~ $3.place = convertedPlace;
							val = convertedPlace;
						 }
						 int quad = (yyvsp[-1]).quadList.top();
						 (yyvsp[-1]).quadList.pop();
						 ostringstream os;
						 os << "if " << (yyvsp[-5]).place << "==" << val << " goto " << quad;
						 emit(os.str());
					}
					(yyval).nextlist = merge((yyvsp[-1]).nextlist, makelist(next()));
					emit("goto ");
				}
#line 1683 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 326 "hw5.ypp" /* yacc.c:1646  */
    { 
				//cout << "CaseStat CasesList " << endl;
				(yyval).quadList = (yyvsp[0]).quadList;
				(yyval).quadList.push((yyvsp[-1]).quad);
				(yyval).valueList = (yyvsp[0]).valueList;
				(yyval).valueList.push((yyvsp[-1]).id);
				(yyval).typeList = (yyvsp[0]).typeList;
				(yyval).typeList.push((yyvsp[-1]).type);
				(yyval).nextlist = merge((yyvsp[0]).nextlist, (yyvsp[-1]).nextlist);
				}
#line 1698 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 336 "hw5.ypp" /* yacc.c:1646  */
    { 
				//cout << "CaseStat " << endl;
				(yyval).quadList = stack<int>();
				(yyval).quadList.push((yyvsp[0]).quad);
				(yyval).valueList = stack<string>();
				(yyval).valueList.push((yyvsp[0]).id); // id is the "num" in : case num
				(yyval).typeList = stack<string>();
				(yyval).typeList.push((yyvsp[0]).type);
				(yyval).nextlist = (yyvsp[0]).nextlist;
				}
#line 1713 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 348 "hw5.ypp" /* yacc.c:1646  */
    { 
					//cout << "CASE NUM TempType COLON StartScopeMarker stmt BREAK SC EndScopeMarker " << endl;
					(yyval).quad = (yyvsp[-5]).quad;
					(yyval).type = (yyvsp[-8]).type;
					(yyval).id = (yyvsp[-9]).id;
					(yyval).nextlist = merge((yyvsp[-4]).nextlist, (yyvsp[-1]).nextlist);
				}
#line 1725 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 356 "hw5.ypp" /* yacc.c:1646  */
    { (yyval).id = "+"; }
#line 1731 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 357 "hw5.ypp" /* yacc.c:1646  */
    { (yyval).id = "-"; }
#line 1737 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 358 "hw5.ypp" /* yacc.c:1646  */
    { (yyval).id = "*"; }
#line 1743 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 359 "hw5.ypp" /* yacc.c:1646  */
    { (yyval).id = "/"; }
#line 1749 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 362 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "CELSIUS" << endl;
					(yyval).type = (yyvsp[0]).type;
					//~ $$.val = $1.val;
				}
#line 1759 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 368 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "FAHRENHEIT" << endl;
					(yyval).type = (yyvsp[0]).type;
					//~ $$.val = $1.val;
				}
#line 1769 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 374 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "KELVIN" << endl;
					(yyval).type = (yyvsp[0]).type;
					//~ $$.val = $1.val;
				}
#line 1779 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 381 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "TempType" << endl;
					(yyval).type = (yyvsp[0]).type;
					//~ $$.val = $1.val;
				}
#line 1789 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 387 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "INT" << endl;
					(yyval).type = (yyvsp[0]).type;
					//~ $$.val = $1.val;
					//~ printStype($1, "INT");
					//~ printStype($$, "Type");
				}
#line 1801 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 395 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "BOOL" << endl;
					(yyval).type = (yyvsp[0]).type;
					//~ $$.val = $1.val;
				}
#line 1811 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 401 "hw5.ypp" /* yacc.c:1646  */
    {
						if (!isTemperture((yyvsp[0]).type)) {
							errorMismatch(yylineno);
							exit(1);
						} 
						(yyval) = (yyvsp[0]);
					}
#line 1823 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 409 "hw5.ypp" /* yacc.c:1646  */
    {
						//cout << "ForceBoolExp" << endl;
						if ((yyvsp[0]).type != string("BOOL")){
							errorMismatch(yylineno);
							exit(1);
						}
						//~ condScopeFlag = true;
						(yyval) = (yyvsp[0]);
					}
#line 1837 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 419 "hw5.ypp" /* yacc.c:1646  */
    {
						if ((yyvsp[0]).type != string("INT")) {
							errorMismatch(yylineno);
							exit(1);
						}
						(yyval) = (yyvsp[0]);
					}
#line 1849 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 428 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "LP Exp RP" << endl;
					(yyval) = (yyvsp[-1]);
				}
#line 1858 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 433 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "Exp PLUS Exp" << endl;
					if ((yyvsp[-2]).type == string("INT") && (yyvsp[0]).type == string("INT")) {
						(yyval).type = (yyvsp[-2]).type;
						(yyval).place = newTemp(string("INT"));
						ostringstream os;
						os << (yyval).place << "=" << (yyvsp[-2]).place << " + " << (yyvsp[0]).place;
						emit(os.str());
					} else if (isTemperture((yyvsp[-2]).type) && isTemperture((yyvsp[0]).type)) {
						(yyval).type = (yyvsp[-2]).type;
						(yyval).place = newTemp((yyvsp[-2]).type);
						string convertedSecArg = genConversionCode((yyvsp[0]), (yyvsp[-2]).type);
						ostringstream os;
						os << (yyval).place << "=" << (yyvsp[-2]).place << " + " << convertedSecArg;
						emit(os.str()); 
					} else {
						errorMismatch(yylineno);
						exit(1);
					}
				}
#line 1883 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 454 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "Exp MINUS Exp" << endl;
					if ((yyvsp[-2]).type == string("INT") && (yyvsp[0]).type == string("INT")) {
						(yyval).type = (yyvsp[-2]).type;
						(yyval).place = newTemp(string("INT"));
						ostringstream os;
						os << (yyval).place << "=" << (yyvsp[-2]).place << " - " << (yyvsp[0]).place;
						emit(os.str());
					} else if (isTemperture((yyvsp[-2]).type) && isTemperture((yyvsp[0]).type)) {
						(yyval).type = (yyvsp[-2]).type;
						(yyval).place = newTemp((yyvsp[-2]).type);
						string convertedSecArg = genConversionCode((yyvsp[0]), (yyvsp[-2]).type);
						ostringstream os;
						os << (yyval).place << "=" << (yyvsp[-2]).place << " - " << convertedSecArg;
						emit(os.str()); 
					} else {
						errorMismatch(yylineno);
						exit(1);
					}
				}
#line 1908 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 475 "hw5.ypp" /* yacc.c:1646  */
    {
						//cout << "Exp MULT Exp" << endl;
					if ((yyvsp[-2]).type == string("BOOL") || (yyvsp[0]).type == string("BOOL")) {
						errorMismatch(yylineno);
						exit(1);
					}					
					if (isTemperture((yyvsp[-2]).type) && isTemperture((yyvsp[0]).type)) {
						errorMismatch(yylineno);
						exit(1);
					}
					if ((yyvsp[-2]).type == string("INT") && (yyvsp[0]).type == string("INT")) {
						(yyval).type = (yyvsp[-2]).type;
						(yyval).place = newTemp(string("INT"));
					} else /*1 temp & 1 int*/ {
						YYSTYPE temp = isTemperture((yyvsp[-2]).type) ? (yyvsp[-2]) : (yyvsp[0]);
						YYSTYPE num = !isTemperture((yyvsp[-2]).type) ? (yyvsp[-2]) : (yyvsp[0]);
						(yyval).type = temp.type;
						(yyval).place = newTemp(temp.type);
					}
					ostringstream os;
					os << (yyval).place << "=" << (yyvsp[-2]).place << " * " << (yyvsp[0]).place;
					emit(os.str());
				}
#line 1936 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 499 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "Exp DIV Exp" << endl;
					if ((yyvsp[-2]).type == string("INT") && (yyvsp[0]).type == string("INT")) {
						(yyval).type = (yyvsp[-2]).type;
						(yyval).place = newTemp(string("INT"));
						ostringstream os;
						os << (yyval).place << "=" << (yyvsp[-2]).place << " / " << (yyvsp[0]).place;
						emit(os.str());
					} else if (isTemperture((yyvsp[-2]).type) && isTemperture((yyvsp[0]).type)) {
						(yyval).type = string("INT");
						(yyval).place = newTemp(string("INT"));
						string convertedSecArg = genConversionCode((yyvsp[0]), (yyvsp[-2]).type);
						ostringstream os;
						os << (yyval).place << "=" << (yyvsp[-2]).place << " / " << convertedSecArg;
						emit(os.str()); 
					} else if(isTemperture((yyvsp[-2]).type) && (yyvsp[0]).type == string("INT")) {
						(yyval).type = (yyvsp[-2]).type;
						(yyval).place = newTemp((yyvsp[-2]).type);
						ostringstream os;
						os << (yyval).place << "=" << (yyvsp[-2]).place << " / " << (yyvsp[0]).place;
						emit(os.str());
					} else {
						errorMismatch(yylineno);
						exit(1);
					}
				}
#line 1967 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 526 "hw5.ypp" /* yacc.c:1646  */
    {	
					//cout << "ID" << endl;
					string varType = findVarType((yyvsp[0]).id);
					if (varType == string("")) {
						errorUndef(yylineno, (yyvsp[0]).id.c_str());
						exit(1);
					}
					
					int idOffset = findVarOffset((yyvsp[0]).id);
					ostringstream os;
					(yyval).type = varType;

					if (varType == string("BOOL") && !isAssignmentStmt){
						(yyval).truelist = makelist(next()); // leave room for backpatching at the "if" stmt
						os <<  "if s[" << idOffset << "] == 1 goto ";
						emit(os.str());
						(yyval).falselist = makelist(next()); // leave room for backpatching the "goto" stmt
						emit("goto ");
					} else {
						(yyval).id = (yyvsp[0]).id;
						(yyval).place = newTemp((yyvsp[0]).type);
						os << (yyval).place << "=s[" << idOffset << "]";
						emit(os.str());
					}
				}
#line 1997 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 552 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "NUM" << endl;
					if ((yyvsp[0]).type != string("INT")) {
						errorMismatch(yylineno);
						exit(1);
					}
					(yyval).type = (yyvsp[0]).type;
					(yyval).place = newTemp(string("INT"));
					ostringstream os;
					os << (yyval).place << "=" << (yyvsp[0]).id;
					emit(os.str());
				}
#line 2014 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 565 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "NUM TempType " << endl;
					if (!(isTemperture((yyvsp[0]).type)) ||
					!((yyvsp[-1]).type == string("INT"))) {
						errorMismatch(yylineno);
						exit(1);
					}
					(yyval).type = (yyvsp[0]).type;
					(yyval).place = newTemp((yyvsp[0]).type);
					ostringstream os;
					os << (yyval).place << "=" << (yyvsp[-1]).id;
					emit(os.str());
				}
#line 2032 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 579 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "TRUE" << endl;
					(yyval).type = (yyvsp[0]).type;
					(yyval).place = newTemp((yyvsp[0]).type);
					ostringstream os;
					os << (yyval).place << "=1";
					emit(os.str());
				}
#line 2045 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 588 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "FALSE" << endl;
					(yyval).type = (yyvsp[0]).type;
					(yyval).place = newTemp((yyvsp[0]).type);
					ostringstream os;
					os << (yyval).place << "=0";
					emit(os.str());
				}
#line 2058 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 597 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "NOT Exp" << endl;
					if ((yyvsp[0]).type != string("BOOL")) {
						errorMismatch(yylineno);
						exit(1);
					}
					if (isAssignmentStmt){
						(yyval).type = string("BOOL");
						(yyval).place = newTemp((yyvsp[0]).type);
						ostringstream os;
						os << "if " << (yyvsp[0]).place << " == 1 goto " << next()+3;
						emit(os.str());
						os.str(""); // "clear" os
						os << (yyval).place << "=1";
						emit(os.str());
						os.str("");
						os << "goto " << next()+2;
						emit(os.str());
						os.str("");
						os << (yyval).place << "=0";
						emit(os.str());
					} else {
						(yyval).truelist = (yyvsp[0]).falselist;
						(yyval).falselist = (yyvsp[0]).truelist;
					}
					
				}
#line 2090 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 625 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "Exp OR Exp" << endl;
					if ((yyvsp[-3]).type != string("BOOL") || (yyvsp[-1]).type != string("BOOL")){
						errorMismatch(yylineno);
						exit(1);
					}
					if(isAssignmentStmt){
						(yyval).place = newTemp(string("BOOL"));
						ostringstream os;
						os << "if " << (yyvsp[-3]).place << " == 1 goto " << next()+4;
						emit(os.str());
						os.str("");
						os << "if " << (yyvsp[0]).place << " == 1 goto " << next()+3;
						emit(os.str());
						os.str("");
						os << (yyval).place << "=0";
						emit(os.str());
						os.str("");
						os << "goto " << next()+2;
						emit(os.str());
						os.str("");
						os << (yyval).place << "=1";
						emit(os.str());
					} else {
						bp((yyvsp[-3]).falselist, (yyvsp[-1]).quad);
						(yyval).truelist = merge((yyvsp[-3]).truelist, (yyvsp[0]).truelist);
						(yyval).falselist = (yyvsp[0]).falselist;
					}
					(yyval).type = string("BOOL");
				}
#line 2125 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 656 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "Exp AND Exp" << endl;
					if ((yyvsp[-3]).type != string("BOOL") || (yyvsp[-1]).type != string("BOOL")){
						errorMismatch(yylineno);
						exit(1);
					}
					if(isAssignmentStmt){
						(yyval).place = newTemp(string("BOOL"));
						ostringstream os;
						os << "if " << (yyvsp[-3]).place << " == 0 goto " << next()+4;
						emit(os.str());
						os.str("");
						os << "if " << (yyvsp[0]).place << " == 0 goto " << next()+3;
						emit(os.str());
						os.str("");
						os << (yyval).place << "=1";
						emit(os.str());
						os.str("");
						os << "goto " << next()+2;
						emit(os.str());
						os.str("");
						os << (yyval).place << "=0";
						emit(os.str());
					}
					else{
						bp((yyvsp[-3]).truelist, (yyvsp[-1]).quad);
						(yyval).falselist = merge((yyvsp[-3]).falselist, (yyvsp[0]).falselist);
						(yyval).truelist = (yyvsp[0]).truelist;
					}
					(yyval).type = string("BOOL");
				}
#line 2161 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 688 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "Exp REL_OP Exp" << endl;
					if (isTemperture((yyvsp[-2]).type) && isTemperture((yyvsp[0]).type)) {
						(yyvsp[0]).place = genConversionCode((yyvsp[0]), (yyvsp[-2]).type);	
					}
					
					if (((yyvsp[-2]).type == string("INT") && (yyvsp[0]).type == string("INT")) ||
							(isTemperture((yyvsp[-2]).type) && isTemperture((yyvsp[0]).type))) {
						
							(yyval).type = string("BOOL");
							ostringstream os;
							
							if ((yyvsp[-1]).id == string("<=")) {
									os << (yyvsp[-2]).place << " = " << (yyvsp[-2]).place << " -1";
									emit(os.str());
									(yyvsp[-1]).id = "<";
							}
							
							if ((yyvsp[-1]).id == string(">=")) {
								os << (yyvsp[-2]).place << " = " << (yyvsp[-2]).place << " +1";
								emit(os.str());
								(yyvsp[-1]).id = ">";	
							}
							if (isAssignmentStmt) {
								(yyval).place = newTemp(string("BOOL"));
								os.str("");
								os << "if " << (yyvsp[-2]).place << (yyvsp[-1]).id << (yyvsp[0]).place << " goto " << next()+3;
								emit(os.str());
								os.str("");
								os << (yyval).place << "=0";
								emit(os.str());
								os.str("");
								os << "goto " << next()+2;
								emit(os.str());
								os.str("");
								os << (yyval).place << "=1";
								emit(os.str());
								os.str("");
							} else {
								
								(yyval).truelist = makelist(next());
								os << "if " << (yyvsp[-2]).place << " " << (yyvsp[-1]).id << " " << (yyvsp[0]).place << " goto ";
								emit(os.str());
								(yyval).falselist = makelist(next());
								emit("goto ");
							}
						} else {
							errorMismatch(yylineno);
							exit(1);
						}
				}
#line 2217 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 740 "hw5.ypp" /* yacc.c:1646  */
    {
					condScopeFlag = false;
				  }
#line 2225 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 744 "hw5.ypp" /* yacc.c:1646  */
    {
				//cout << "setCondFlag " << endl;
				condScopeFlag = true;
				}
#line 2234 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 749 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "InitMarker" << endl;
					tablesStack.push_back(SymTable());
					offsetStack.push(0);
				}
#line 2244 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 754 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "FinishMarker" << endl;
					//~ endScope();
					//~ tablesStack.back().printTable();
					tablesStack.pop_back();
					offsetStack.pop();
				}
#line 2256 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 762 "hw5.ypp" /* yacc.c:1646  */
    {
					//cout << "WhileMarker" << endl;
					whileNextlists.push(list<int>());
					whileCounter++;
				}
#line 2266 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 769 "hw5.ypp" /* yacc.c:1646  */
    {
						//cout << "EndScopeMarker" << endl;
						condScopeFlag = false;
						//~ endScope();
						//~ tablesStack.back().printTable();
						tablesStack.pop_back();
						offsetStack.pop();
					}
#line 2279 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 778 "hw5.ypp" /* yacc.c:1646  */
    {
							//cout << "StartScopeMarker" << endl;
							condScopeFlag = false;
							tablesStack.push_back(SymTable());
							offsetStack.push(offsetStack.top());
						}
#line 2290 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 785 "hw5.ypp" /* yacc.c:1646  */
    {
								if (condScopeFlag){
									condScopeFlag = false;
									//~ endScope();
									//~ tablesStack.back().printTable();
									tablesStack.pop_back();
									offsetStack.pop();
								}
							}
#line 2304 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 795 "hw5.ypp" /* yacc.c:1646  */
    {
								if (condScopeFlag){
									tablesStack.push_back(SymTable());
									offsetStack.push(offsetStack.top());
								}
							}
#line 2315 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 802 "hw5.ypp" /* yacc.c:1646  */
    {
	 (yyval).quad = next();
   }
#line 2323 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 806 "hw5.ypp" /* yacc.c:1646  */
    {
	(yyval).nextlist = makelist(next());
	emit("goto "); 
   }
#line 2332 "hw5.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 812 "hw5.ypp" /* yacc.c:1646  */
    {
						isAssignmentStmt = 0;
					}
#line 2340 "hw5.tab.cpp" /* yacc.c:1646  */
    break;


#line 2344 "hw5.tab.cpp" /* yacc.c:1646  */
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
#line 817 "hw5.ypp" /* yacc.c:1906  */


string newTemp(string type)
{
	ostringstream os;
	os << "@t" << tmpIdx;
	tmpIdx++;
	
	tablesStack.back().insertVar(os.str(), type, offsetStack.top(), true /*isAssigned*/);
	int newOffset = offsetStack.top() + OFFSET_SIZE;
	offsetStack.pop();
	offsetStack.push(newOffset);
	
	os.str("");
	os << "s[" << newOffset - OFFSET_SIZE << "]";
	return os.str();	
}

void yyerror(const char*){
	errorSyn(yylineno);
	exit(1);
}

bool checkAssignmentTyps(string t1, string t2) {	
	if (t2 == string("BOOL") && t1 != string("BOOL")) return false;
	if (t2 == string("INT") && t1 != string("INT")) return false;
	if (isTemperture(t2) && !isTemperture(t1)) return false;
	
	return true;
}
string findVarType(string id) {
	for (vector<SymTable>::reverse_iterator iter = tablesStack.rbegin(); iter != tablesStack.rend(); ++iter) {
		if(iter->isVarDefined(id)) {
			return iter->getVarType(id);
		}
	}
	return string("");
}

int findVarOffset(string id){
	for (vector<SymTable>::reverse_iterator iter = tablesStack.rbegin(); iter != tablesStack.rend(); ++iter) {
		if(iter->isVarDefined(id)) {
			return iter->getVarOffset(id);
		}
	}
	return -1;
}

void findAndSetVarIsAssigned(string id, bool val){
	for (vector<SymTable>::reverse_iterator iter = tablesStack.rbegin(); iter != tablesStack.rend(); ++iter) {
		if(iter->isVarDefined(id)) {
			iter->setIsVarAssigned(id, val);
		}
	}
}

bool isVarAssigned(string id){
	for (vector<SymTable>::reverse_iterator iter = tablesStack.rbegin(); iter != tablesStack.rend(); ++iter) {
		if(iter->isVarDefined(id)) {
			return iter->isVarAssigned(id);
		}
	}
	return false;
}

bool isVarDefined(string id){
	for (vector<SymTable>::reverse_iterator iter = tablesStack.rbegin(); iter != tablesStack.rend(); ++iter) {
		if(iter->isVarDefined(id)) {
			return true;
		}
	}
	return false;
}

bool isTemperture(string type) {
	return (type == string("FAHRENHEIT") || type == string("CELSIUS") || type == string("KELVIN"));
}

string genCelsiusToKelvinCode(string celVarToConv){
	ostringstream os;
	string res = newTemp(string("KELVIN"));
	
	os << res << "=" << celVarToConv << "+273";
	emit(os.str());
	
	return res;

	//return cel + 273
}

string genCelsiusToFahrenheitCode(string celVarToConv){
	ostringstream os1, os2, os3;
	string res = newTemp(string("FAHRENHEIT"));
	string mulRes = newTemp(string("CELSIUS"));
	string divAfterMulRes = newTemp(string("CELSIUS"));

	os1 << mulRes << "=" << celVarToConv << "*9";
	emit(os1.str());
	
	os2 << divAfterMulRes << "=" << mulRes << "/5";
	emit(os2.str());
	
	os3 << res << "=" << divAfterMulRes << "+32";
	emit(os3.str());
	
	return res;
	//return (cel * 9 / 5) + 32;	
}
	
string genKelvinToCelsiusCode(string kelVarToConv){
	ostringstream os;
	string res = newTemp(string("CELSIUS"));
	
	os << res << "=" << kelVarToConv << "-273";
	emit(os.str());
	
	return res;
	//return kel - 273;
}

string genKelvinToFahrenheitCode(string kelVarToConv){
	string convertedToCelVar = genKelvinToCelsiusCode(kelVarToConv);
	return genCelsiusToFahrenheitCode(convertedToCelVar);
}

string genFahrenheitToCelsiusCode(string fahVarToConv){
	ostringstream os1, os2, os3;
	string res = newTemp(string("CELSIUS"));
	string subRes = newTemp(string("FAHRENHEIT"));
	string mulAfterSubRes = newTemp(string("FAHRENHEIT"));

	os1 << subRes << "=" << fahVarToConv << "-32";
	emit(os1.str());
	
	os2 << mulAfterSubRes << "=" << subRes << "*5";
	emit(os2.str());
	
	os3 << res << "=" << mulAfterSubRes << "/9";
	emit(os3.str());

	return res;
	
	//return (fah - 32) * 5 / 9;

}

string genFahrenheitToKelvinCode(string fahVarToConv){
	string convertedCelVar = genFahrenheitToCelsiusCode(fahVarToConv);
	return genCelsiusToKelvinCode(convertedCelVar);
}

//creating the ir-code for converting temparture
//returning the variable name that holds the result of the conversions
string genConversionCode(YYSTYPE st, string type){
	if (st.type == type){
		return st.place;
	}
	int numType = convertTempStringToNum(st.type);
	if (type == string("CELSIUS")){
		switch (numType){
			case FAHRENHEIT		: return genFahrenheitToCelsiusCode(st.place);
			case KELVIN			: return genKelvinToCelsiusCode(st.place);
		}
	} else if (type == "FAHRENHEIT") {
	 	switch (numType){
			case CELSIUS 		: return genCelsiusToFahrenheitCode(st.place);
			case KELVIN 		: return genKelvinToFahrenheitCode(st.place);
		}
	} else { //KELVIN
		switch (numType){
			case CELSIUS 		: return genCelsiusToKelvinCode(st.place);
			case FAHRENHEIT 	: return genFahrenheitToKelvinCode(st.place);
		}
	}
}

int convertTempStringToNum(string type){
		if (type == string("KELVIN")){
			return KELVIN;
		}
		if (type == string("FAHRENHEIT")){
			return FAHRENHEIT;
		}
		if (type == string("CELSIUS")){
			return CELSIUS;
		}
		return -1;
}

void printStype(YYSTYPE yst, string msg){
	cout << msg + ":" << endl;
	cout << "type = " + yst.type << endl;
	cout << "id = " + yst.id << endl;
}

int main() {
	int parse_res = yyparse();
	printBuffer();
	return parse_res;
}
