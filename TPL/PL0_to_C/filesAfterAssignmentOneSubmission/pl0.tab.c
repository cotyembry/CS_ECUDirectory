/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "pl0.y"

//FileName:      pl0.y
//Author:        John Coty Embry
//Last Modified: 04/19/2016
//Class:         Theory of Programming Languages
//This is a grammar for the PL0 language that will take in a PL0 program as input and 
//translate the program into C language

//Note: strdup will do the necessary allocation so that we can take the value for that
//particular string and assign it to another variable without worrying about if/when
//the string that's getting copied goes out of scope. This keeps the new copy independent

//just for reference, the content between the { /*...*/ } is called "Actions"...its the "semantic meaning"

#include <stdio.h>
#include <string.h>
#include <stdlib.h> //used for strtof which converts a string to a float
//#include "symbolTable.h"
    
//** create symbol table
//rNode *symbols = NULL;
    
//** pointer to symbol table record
//rNode *smbRecord;
    
    //-- Lexer prototype required by Bison => getNextToken()
    int yylex();
    int yyerror(const char *string) { printf("Error! %s\n", string); return 1; }
    
    int globalBlockFlag = 1;
    //I will use these next two variables to help with avoiding segmentation faults
    int emptyConstExpr = 0;
    int emptyVarExpr = 0;
	
	int cameFromProcedure = 0;
	int beginWasVisitedFlag = 0;
	int inProcedurePreAction = 0;
	int justEndedProcedureList = 0;
	int procedureWasVisitedFlag = 0;
	int statementWasVisitedFlag = 0;
	

	int test = 0;
	


/* Line 268 of yacc.c  */
#line 118 "pl0.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TNUMBER = 258,
     TCOMMA = 259,
     TEOL = 260,
     TPERIOD = 261,
     TQUESTIONMARK = 262,
     TEXCLAMATION = 263,
     TLP = 264,
     TRP = 265,
     TIDENT = 266,
     TEQ = 267,
     TPOUND = 268,
     TLT = 269,
     TLTEQ = 270,
     TGT = 271,
     TGTEQ = 272,
     TEQOP = 273,
     TPLUS = 274,
     TMINUS = 275,
     TMULT = 276,
     TDIV = 277,
     TBEGIN = 278,
     TEND = 279,
     TIF = 280,
     TTHEN = 281,
     TWHILE = 282,
     TDO = 283,
     TCONST = 284,
     TVAR = 285,
     TPROCEDURE = 286,
     TCALL = 287,
     TODD = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 47 "pl0.y"

    char *sval;



/* Line 293 of yacc.c  */
#line 193 "pl0.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 205 "pl0.tab.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   86

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNRULES -- Number of states.  */
#define YYNSTATES  88

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    15,    18,    20,    24,
      30,    34,    38,    42,    44,    45,    48,    49,    52,    59,
      65,    69,    72,    75,    78,    82,    87,    92,    96,    98,
     101,   105,   107,   109,   111,   113,   115,   117,   119,   123,
     127,   129,   133,   137,   139,   141
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    36,    -1,    37,     6,    -1,    38,    40,
      42,    -1,    38,    42,    -1,    40,    42,    -1,    42,    -1,
      29,    39,     5,    -1,    39,     4,    11,    12,     3,    -1,
      11,    12,     3,    -1,    30,    41,     5,    -1,    11,     4,
      41,    -1,    11,    -1,    -1,    43,    45,    -1,    -1,    44,
      46,    -1,    31,    11,     5,    37,     5,    42,    -1,    31,
      11,     5,    37,     5,    -1,    11,    18,    50,    -1,    32,
      11,    -1,     7,    11,    -1,     8,    50,    -1,    23,    47,
      24,    -1,    25,    48,    26,    46,    -1,    27,    48,    28,
      46,    -1,    46,     5,    47,    -1,    46,    -1,    33,    50,
      -1,    50,    49,    50,    -1,    12,    -1,    13,    -1,    14,
      -1,    15,    -1,    16,    -1,    17,    -1,    51,    -1,    50,
      19,    51,    -1,    50,    20,    51,    -1,    52,    -1,    51,
      21,    52,    -1,    51,    22,    52,    -1,    11,    -1,     3,
      -1,     9,    50,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   105,   133,   138,   142,   146,   151,   164,
     176,   185,   208,   218,   224,   224,   240,   240,   259,   273,
     285,   297,   302,   311,   328,   352,   360,   368,   380,   385,
     415,   423,   426,   431,   434,   437,   440,   444,   447,   455,
     464,   467,   474,   482,   485,   488
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TNUMBER", "TCOMMA", "TEOL", "TPERIOD",
  "TQUESTIONMARK", "TEXCLAMATION", "TLP", "TRP", "TIDENT", "TEQ", "TPOUND",
  "TLT", "TLTEQ", "TGT", "TGTEQ", "TEQOP", "TPLUS", "TMINUS", "TMULT",
  "TDIV", "TBEGIN", "TEND", "TIF", "TTHEN", "TWHILE", "TDO", "TCONST",
  "TVAR", "TPROCEDURE", "TCALL", "TODD", "$accept", "start", "program",
  "block", "constexpr", "constList", "varexpr", "varList", "procedure",
  "$@1", "$@2", "procedureList", "statement", "statementList", "condition",
  "logicOP", "expression", "term", "factor", 0
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
     285,   286,   287,   288
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    36,    37,    37,    37,    37,    38,    39,
      39,    40,    41,    41,    43,    42,    44,    42,    45,    45,
      46,    46,    46,    46,    46,    46,    46,    47,    47,    48,
      48,    49,    49,    49,    49,    49,    49,    50,    50,    50,
      51,    51,    51,    52,    52,    52
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     2,     1,     3,     5,
       3,     3,     3,     1,     0,     2,     0,     2,     6,     5,
       3,     2,     2,     2,     3,     4,     4,     3,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      16,     0,     0,     0,     2,     0,    16,    16,     7,     0,
       0,     0,     0,    13,     0,     1,     3,    16,     5,     6,
       0,    15,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,     8,     0,    11,     4,     0,    22,    44,     0,
      43,    23,    37,    40,     0,    28,     0,     0,     0,     0,
       0,    21,    10,     0,    12,    16,     0,     0,     0,     0,
       0,    20,     0,    24,    29,     0,    31,    32,    33,    34,
      35,    36,     0,     0,     0,     0,    45,    38,    39,    41,
      42,    27,    25,    30,    26,     9,    16,    18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    12,     7,    14,     8,     9,
      10,    21,    45,    46,    48,    72,    49,    42,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -21
static const yytype_int8 yypact[] =
{
      -1,    -4,     4,     9,   -21,    14,    -5,    18,   -21,    27,
      10,    20,    34,    55,    58,   -21,   -21,    18,   -21,   -21,
      25,   -21,    49,     5,    46,    10,     1,     1,    56,   -21,
      63,    57,   -21,     4,   -21,   -21,    64,   -21,   -21,     5,
     -21,    21,    32,   -21,     5,    65,    47,     5,    48,    31,
      44,   -21,   -21,    61,   -21,    -1,     3,     5,     5,     5,
       5,    21,    10,   -21,    21,    10,   -21,   -21,   -21,   -21,
     -21,   -21,     5,    10,    72,    71,   -21,    32,    32,   -21,
     -21,   -21,   -21,    21,   -21,   -21,     0,   -21
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -21,   -21,   -21,    22,   -21,   -21,    73,    45,    -6,   -21,
     -21,   -21,    -8,    19,    59,   -21,   -20,    -2,     2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -20
static const yytype_int8 yytable[] =
{
      18,    19,    29,    41,    38,   -19,   -19,    11,    38,    15,
      39,    35,    40,    76,    39,    13,    40,    22,    23,    56,
      16,    24,    57,    58,    61,     2,   -14,    64,     1,     2,
     -14,   -14,    30,    25,    47,    26,    36,    27,    31,    32,
      57,    58,    28,    66,    67,    68,    69,    70,    71,   -14,
      57,    58,    83,    59,    60,    77,    78,    82,    20,    33,
      37,    79,    80,    34,    44,    84,    52,    51,    53,    55,
      62,    63,    73,    74,    65,    85,    86,    75,    54,    17,
      87,    81,     0,     0,     0,     0,    50
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-21))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       6,     7,    10,    23,     3,     5,     6,    11,     3,     0,
       9,    17,    11,    10,     9,    11,    11,     7,     8,    39,
       6,    11,    19,    20,    44,    30,    31,    47,    29,    30,
      31,    31,    12,    23,    33,    25,    11,    27,     4,     5,
      19,    20,    32,    12,    13,    14,    15,    16,    17,    31,
      19,    20,    72,    21,    22,    57,    58,    65,    31,     4,
      11,    59,    60,     5,    18,    73,     3,    11,    11,     5,
       5,    24,    28,    12,    26,     3,     5,    55,    33,     6,
      86,    62,    -1,    -1,    -1,    -1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    30,    35,    36,    37,    38,    40,    42,    43,
      44,    11,    39,    11,    41,     0,     6,    40,    42,    42,
      31,    45,     7,     8,    11,    23,    25,    27,    32,    46,
      12,     4,     5,     4,     5,    42,    11,    11,     3,     9,
      11,    50,    51,    52,    18,    46,    47,    33,    48,    50,
      48,    11,     3,    11,    41,     5,    50,    19,    20,    21,
      22,    50,     5,    24,    50,    26,    12,    13,    14,    15,
      16,    17,    49,    28,    12,    37,    10,    51,    51,    52,
      52,    47,    46,    50,    46,     3,     5,    42
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  *++yyvsp = yylval;

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
        case 3:

/* Line 1806 of yacc.c  */
#line 105 "pl0.y"
    {

					//globalBlockFlag = 1;
               
               //here I should be able to append "}" for the end of main
	
					//if the code we are translating doesn't have a PROCEDURE in it, then
					//this flag would remain 0 and so the main would never be printed. This
					//fixes that problem
					if(procedureWasVisitedFlag == 0) {
						printf("void main() {\n");

					}

					//and now to print the translated program and ending curly brace for main
               printf("%s\n}\n\n", (yyvsp[(1) - (2)].sval));
					(yyval.sval) = strdup((yyvsp[(1) - (2)].sval));
					
					//now that I'm done, I'll return 0

					//I probably don't need this here unless I have another file to be parsed
					//right behind it without the memory being cleared..maybe..., but I'm doing it anyway
				
					procedureWasVisitedFlag = 0;
					return 0;
	
            }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 133 "pl0.y"
    {
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
				(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
			}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 138 "pl0.y"
    {
				strcat((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));
				(yyval.sval) = strdup((yyvsp[(1) - (2)].sval));
			}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 142 "pl0.y"
    {
				strcat((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));
				(yyval.sval) = strdup((yyvsp[(1) - (2)].sval));
			}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 146 "pl0.y"
    {
				//in procedure semantics
				(yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
			}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 151 "pl0.y"
    {
               //translate to the equivalent C language constant variable declaration

               //right now I'm treating all const...ants as integers
					//simply replace int with char or whatever you wish
					//to change the type for the constants
					strcpy((yyvsp[(1) - (3)].sval), "const int ");
               strcat((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval));
    				strcat((yyvsp[(2) - (3)].sval), "\n");
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
               (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
            }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 164 "pl0.y"
    {
                //first concatenate this rules string values all together
                strcat((yyvsp[(1) - (5)].sval), (yyvsp[(2) - (5)].sval));
                //add a space to format the variable list nicely
                strcat((yyvsp[(1) - (5)].sval), " ");
                strcat((yyvsp[(1) - (5)].sval), (yyvsp[(3) - (5)].sval));
                strcat((yyvsp[(1) - (5)].sval), (yyvsp[(4) - (5)].sval));
                strcat((yyvsp[(1) - (5)].sval), (yyvsp[(5) - (5)].sval));
                //then assing the values that were concatenated to the non-terminal
                //so that it can continue to be used elsewhere in the grammar
                (yyval.sval) = strdup((yyvsp[(1) - (5)].sval));
            }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 176 "pl0.y"
    {
                //first concatenate this rules string values all together
                strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
                strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
                //then assigning the values that were concatenated to the non-terminal
                //so that it can continue to be used elsewhere in the grammar
                (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
            }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 185 "pl0.y"
    {
				//translate to the equivalent C language variable declaration
            //first I allocate enough space to have room for the int helper string literal
				//then I make an int variable that is large enough to allocate for the full rule's
				//string that I will built with the grammar
				//then by using temp, I transfer/append the rest of the string on and eventually
				//assign the string back to the non-terminal

				//Note: I have to create temp since I'm having to 'prepend' to the string
				//if I was appending I could just use strcat
            char intHelper[4];
            strcpy(intHelper, "int ");
            int lengthHelper = strlen((yyvsp[(1) - (3)].sval)) + strlen((yyvsp[(2) - (3)].sval)) + strlen((yyvsp[(3) - (3)].sval)) + strlen(intHelper);
            char temp[lengthHelper];
            strcpy(temp, intHelper);
            //strcat(temp, $1);
            strcat(temp, (yyvsp[(2) - (3)].sval));
            strcat(temp, (yyvsp[(3) - (3)].sval));
            strcat(temp, "\n");
				
            (yyval.sval) = strdup(temp);
     		}
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 208 "pl0.y"
    {
        		//first concatenate this rules string values all together
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
         	//add a space to format the variable list nicely
         	strcat((yyvsp[(1) - (3)].sval), " ");
            strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
            //then assing the values that were concatenated to the non-terminal
            //so that it can continue to be used elsewhere in the grammar
            (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
         }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 218 "pl0.y"
    {
				//'bubble up' the string
         	(yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
        	}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 224 "pl0.y"
    {
		//these are the pre-actions that will occur before the rules are
		//tried to be matched
		globalBlockFlag = 0;
		procedureWasVisitedFlag = 1;
		inProcedurePreAction = 1;
		justEndedProcedureList = 0;
	}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 232 "pl0.y"
    {
					inProcedurePreAction = 0;
					(yyval.sval) = strdup((yyvsp[(2) - (2)].sval));
					globalBlockFlag = 1;
					justEndedProcedureList = 1;
				}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 240 "pl0.y"
    {
      statementWasVisitedFlag = 1;
   }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 243 "pl0.y"
    {
					//$2 because of the 'pre' rule action
               (yyval.sval) = strdup((yyvsp[(2) - (2)].sval));

					//maybe print main out here? But how do I get the other function declarations
					//before main
					/*
					if(globalBlockFlag == 1) {
						p r i n t f("(void) main() {\n");
						globalBlockFlag = 0;
					}
					*/

            }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 259 "pl0.y"
    {
					//here I translate a function declaration from PL0 syntax into the equivalent C
					//Language statement
					strcpy((yyvsp[(1) - (6)].sval), "void ");
               strcat((yyvsp[(1) - (6)].sval), (yyvsp[(2) - (6)].sval));
               strcat((yyvsp[(1) - (6)].sval), "() {\n    ");
        			//$4 is the block which is (almost) anything inside the 'procedure' or 'function'
               strcat((yyvsp[(1) - (6)].sval), (yyvsp[(4) - (6)].sval));
               strcat((yyvsp[(1) - (6)].sval), "\n}\n\n");
					
					strcat((yyvsp[(1) - (6)].sval), (yyvsp[(6) - (6)].sval));

               (yyval.sval) = strdup((yyvsp[(1) - (6)].sval));
            }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 273 "pl0.y"
    {
                strcpy((yyvsp[(1) - (5)].sval), "void ");
                strcat((yyvsp[(1) - (5)].sval), (yyvsp[(2) - (5)].sval));
                strcat((yyvsp[(1) - (5)].sval), "() {\n    ");
 
                strcat((yyvsp[(1) - (5)].sval), (yyvsp[(4) - (5)].sval));
                strcat((yyvsp[(1) - (5)].sval), "\n}\n\n");
                (yyval.sval) = strdup((yyvsp[(1) - (5)].sval));

            }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 285 "pl0.y"
    {
               //this is equivalent to a variable being assigned to the result of an
               //expression

               strcat((yyvsp[(1) - (3)].sval), " ");
               strcat((yyvsp[(1) - (3)].sval), "= ");
               strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));

					strcat((yyvsp[(1) - (3)].sval), ";\n");
						
               (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
            }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 297 "pl0.y"
    {
                //this is equivalent to a function call in C
                strcat((yyvsp[(2) - (2)].sval), "();"); //changed from (); to () on 4/11/16
                (yyval.sval) = strdup((yyvsp[(2) - (2)].sval));
            }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 302 "pl0.y"
    {
               //this should output the value of what is in this TIDENT variable
					int length = strlen((yyvsp[(2) - (2)].sval)) + 18; //+ 18 for the custom print f string length
					char temp[length];
					strcpy(temp, "printf(\"%d\\n\", "); 
					strcat(temp, (yyvsp[(2) - (2)].sval));
					strcat(temp, ");\n");
					(yyval.sval) = strdup(temp);
            }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 311 "pl0.y"
    {
            	//TODO: add a comment explaining this
         		//this translates the equivalant C code for the code that is in
               //the PL0 input file
        
					//first figure out how much space is necessary for the custom string to be built
               int lengthToAllocate = strlen("printf(\"%d\\n\", ") + strlen((yyvsp[(2) - (2)].sval)) + strlen(");\0");
        			//allocate, then append all of the rest of the built strings together

               char formattedExpression[lengthToAllocate];
        
               strcpy(formattedExpression, "printf(\"%d\\n\", ");
               strcat(formattedExpression, (yyvsp[(2) - (2)].sval));
               strcat(formattedExpression, ");\0");
        
               (yyval.sval) = strdup(formattedExpression);
            }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 328 "pl0.y"
    {

					beginWasVisitedFlag = 1;

					if(globalBlockFlag == 1) {
						//if justEndedProcedureList == 0, I know this did NOT
						//come from procedure list, so this should be the place
						//where I can correctly print main

						//if globalBlockFlag == 1 we know that I can straight from
						//the top of the grammar to here so this would also be
						//correct to print main here

						//printf("void main() {\n");
						globalBlockFlag = 0;
					}
					
					strcpy((yyvsp[(1) - (3)].sval), "{\n");
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
					strcat((yyvsp[(1) - (3)].sval), "\n}\n");
					//strcat($2, "\n");

               (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
            }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 352 "pl0.y"
    {
                strcpy((yyvsp[(1) - (4)].sval), "if(");
                strcat((yyvsp[(1) - (4)].sval), (yyvsp[(2) - (4)].sval));
                strcat((yyvsp[(1) - (4)].sval), ") {\n    ");
                strcat((yyvsp[(1) - (4)].sval), (yyvsp[(4) - (4)].sval));
                strcat((yyvsp[(1) - (4)].sval), "\n}\n");
                (yyval.sval) = strdup((yyvsp[(1) - (4)].sval));
            }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 360 "pl0.y"
    {
                strcpy((yyvsp[(1) - (4)].sval), "while(");
                strcat((yyvsp[(1) - (4)].sval), (yyvsp[(2) - (4)].sval));
                strcat((yyvsp[(1) - (4)].sval), ") {\n    ");
                strcat((yyvsp[(1) - (4)].sval), (yyvsp[(4) - (4)].sval));
                strcat((yyvsp[(1) - (4)].sval), "\n}\n");
            }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 368 "pl0.y"
    {
						//add the semi-colon to the end of the statement (I removed this from happening)
                	//strcat($1, $2); //4/12/16 commented this out to remove the ';' from the end of the statement

						//and for formatting add a newline
						strcat((yyvsp[(1) - (3)].sval), "\n");
						//add anything that comes back from statementList
                	strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
						//give the final result over to the non-terminal
                	(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
						//printf("in statementlist: %s\n", $1);
                }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 380 "pl0.y"
    {
                	(yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
						
                }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 385 "pl0.y"
    {

					//if ODD b

					/*				
					
    				//here I need to say true of false whether or not this 'expression' is odd
					//expression should come back as just a number so I can do a % (mod) on it
					int convertedInt = toInteger($2);
					int answer = convertedInt % 2;
					//this will be used to hold the 1 or 0 (true or false) to tell if the
					//expression is odd
					char result[1];

					if(answer == 0) {
						result[0] = '0';
					}
					else {
						result[0] = '1';
					}
			
					$$ = strdup(result);

					*/

					strcpy((yyvsp[(1) - (2)].sval), "(((");
					strcat((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));
					strcat((yyvsp[(1) - (2)].sval), ") % 2) != 0)");
					
            }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 415 "pl0.y"
    {
                strcat((yyvsp[(1) - (3)].sval), " ");
                strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
                strcat((yyvsp[(1) - (3)].sval), " ");
                strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
                (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
            }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 423 "pl0.y"
    {
                
            }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 426 "pl0.y"
    {
                //most of these are equivalent in C from what the PL0 language has set up
                //but the "not" operator is different so I'm accounting for that here
                (yyval.sval) = strdup("!=");
            }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 431 "pl0.y"
    {
                
            }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 434 "pl0.y"
    {
                
            }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 437 "pl0.y"
    {
                
            }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 440 "pl0.y"
    {
                
            }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 444 "pl0.y"
    {
 
            }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 447 "pl0.y"
    {
                //this simply takes the string values from this rule and assigns it back
                //to the non-terminal
                strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
                strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
                (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));

            }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 455 "pl0.y"
    {
                //this simply takes the string values from this rule and assigns it back
                //to the non-terminal
                strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
                strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
                (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));

            }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 464 "pl0.y"
    {
            
        }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 467 "pl0.y"
    {
            //this simply takes the string values from this rule and assigns it back to the
            //non-terminal
            strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
            strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
            (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
        }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 474 "pl0.y"
    {
            //this simply takes the string values from this rule and assigns it back to the
            //non-terminal
            strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
            strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
            (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
        }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 482 "pl0.y"
    {
            
        }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 485 "pl0.y"
    {
            
        }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 488 "pl0.y"
    {
            //this simply takes the string values from this rule and assigns it back to
            //the non-terminal
            strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
            strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
            (yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
        }
    break;



/* Line 1806 of yacc.c  */
#line 2127 "pl0.tab.c"
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 2067 of yacc.c  */
#line 496 "pl0.y"


//-- Function Definitions -----
int main() {
	//now to add the libraries that are necessary for the C program to run properly
	printf("#include <stdio.h>\n\n");
    
	yyparse();
	return 0;
}

//this will take in a valid string and return it as an integer
//It is used in the ODD grammar rule to help with the % operator
int toInteger(char a[]) {
  int c, sign, offset, n;
  if (a[0] == '-') {  // Handle negative integers
    sign = -1;
  }
  if (sign == -1) {  // Set starting position to convert
    offset = 1;
  }
  else {
    offset = 0;
  }
  n = 0;
  for (c = offset; a[c] != '\0'; c++) {
    n = n * 10 + a[c] - '0';
  }
  if (sign == -1) {
    n = -n;
  }
  return n;
}

