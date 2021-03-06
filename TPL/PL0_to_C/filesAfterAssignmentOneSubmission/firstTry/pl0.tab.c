/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006,
   2009, 2010 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.3"

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

/* Line 189 of yacc.c  */
#line 1 "pl0.y"

//FileName: pl0.y
//Author:	John Coty Embry
//Last Modified: 04/03/2016
//Class:		Theory of Programming Languages
//This is a grammar for the PL0 language that will take in a PL0 program as input and 
//translate the program into C language

//Note: strdup will do the necessary allocation so that we can take the value for that
//particular string and assign it to another variable without worrying about if/when
//the string that's getting copied goes out of scope. This keeps the new copy independent

//just for reference, the content between the { /*...*/ } is called "Actions"...its the "semantic meaning"

#include <stdio.h>
#include <string.h>


//#include "symbolTable.h"
//** create symbol table
//rNode *symbols = NULL;
//** pointer to symbol table record
//rNode *smbRecord;


//-- Lexer prototype required by Bison => getNextToken()
int yylex();
int yyerror(const char *string) { 
	printf("Error! %s\n", string); 
}


//TODO: incorporate "ODD" into the tokens and also IDENT
//TODO: as a bonus, make it where 4(5) is recoginzed as multiplication just like 4*5 is



/* Line 189 of yacc.c  */
#line 110 "pl0.tab.c"

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
     TWHILE = 258,
     TNUMBER = 259,
     TCOMMA = 260,
     TEOL = 261,
     TPERIOD = 262,
     TQUESTIONMARK = 263,
     TEXCLAMATION = 264,
     TLP = 265,
     TRP = 266,
     TIDENT = 267,
     TEQ = 268,
     TEND = 269,
     TPOUND = 270,
     TLT = 271,
     TLTEQ = 272,
     TGT = 273,
     TGTEQ = 274,
     TEQOP = 275,
     TPLUS = 276,
     TMINUS = 277,
     TMULT = 278,
     TDIV = 279,
     TBEGIN = 280,
     TIF = 281,
     TTHEN = 282,
     TDO = 283,
     TCONST = 284,
     TVAR = 285,
     TPROCEDURE = 286,
     TCALL = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 38 "pl0.y"

   char *sval;



/* Line 214 of yacc.c  */
#line 184 "pl0.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 196 "pl0.tab.c"

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   100

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  41
/* YYNRULES -- Number of states.  */
#define YYNSTATES  87

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    15,    18,    20,    24,
      30,    34,    38,    42,    44,    51,    57,    59,    63,    66,
      69,    72,    76,    81,    86,    90,    92,    96,    98,   100,
     102,   104,   106,   108,   110,   114,   118,   120,   124,   128,
     130,   132
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      34,     0,    -1,    35,    -1,    36,     7,    -1,    37,    39,
      41,    -1,    37,    41,    -1,    39,    41,    -1,    41,    -1,
      29,    38,     6,    -1,    38,     5,    12,    13,     4,    -1,
      12,    13,     4,    -1,    30,    40,     6,    -1,    12,     5,
      40,    -1,    12,    -1,    41,    31,    12,     6,    36,     6,
      -1,    31,    12,     6,    36,     6,    -1,    42,    -1,    12,
      20,    46,    -1,    32,    12,    -1,     8,    12,    -1,     9,
      46,    -1,    25,    43,    14,    -1,    26,    44,    27,    42,
      -1,     3,    44,    28,    42,    -1,    42,     6,    43,    -1,
      42,    -1,    46,    45,    46,    -1,    13,    -1,    15,    -1,
      16,    -1,    17,    -1,    18,    -1,    19,    -1,    47,    -1,
      46,    21,    47,    -1,    46,    22,    47,    -1,    48,    -1,
      47,    23,    48,    -1,    47,    24,    48,    -1,    12,    -1,
       4,    -1,    10,    46,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    99,   109,   114,   118,   122,   128,   138,
     150,   160,   178,   188,   192,   193,   206,   212,   221,   226,
     231,   250,   256,   264,   272,   277,   281,   290,   291,   296,
     297,   298,   299,   301,   302,   309,   317,   318,   325,   333,
     334,   335
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TWHILE", "TNUMBER", "TCOMMA", "TEOL",
  "TPERIOD", "TQUESTIONMARK", "TEXCLAMATION", "TLP", "TRP", "TIDENT",
  "TEQ", "TEND", "TPOUND", "TLT", "TLTEQ", "TGT", "TGTEQ", "TEQOP",
  "TPLUS", "TMINUS", "TMULT", "TDIV", "TBEGIN", "TIF", "TTHEN", "TDO",
  "TCONST", "TVAR", "TPROCEDURE", "TCALL", "$accept", "start", "program",
  "block", "constexpr", "constList", "varexpr", "varList", "procedure",
  "statement", "statementList", "condition", "logicOP", "expression",
  "term", "factor", 0
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
     285,   286,   287
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    33,    34,    35,    36,    36,    36,    36,    37,    38,
      38,    39,    40,    40,    41,    41,    41,    42,    42,    42,
      42,    42,    42,    42,    43,    43,    44,    45,    45,    45,
      45,    45,    45,    46,    46,    46,    47,    47,    47,    48,
      48,    48
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     2,     1,     3,     5,
       3,     3,     3,     1,     6,     5,     1,     3,     2,     2,
       2,     3,     4,     4,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     1,
       1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     7,    16,    40,     0,
      39,     0,     0,    33,    36,    19,    20,     0,    25,     0,
       0,     0,     0,    13,     0,     0,    18,     1,     3,     0,
       5,     6,     0,     0,     0,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,     0,    17,     0,    21,     0,
       0,     0,     8,     0,    11,     0,     4,     0,    41,    23,
      34,    35,    26,    37,    38,    24,    22,    10,     0,    12,
       0,     0,     0,    15,     0,     9,    14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    32,    15,    34,    16,    17,
      29,    21,    53,    22,    23,    24
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -64
static const yytype_int8 yypact[] =
{
       1,    12,    -9,    12,   -15,    37,    12,     9,    26,    32,
      41,    59,   -64,    60,    11,     3,    35,   -64,   -64,    12,
     -64,    40,    58,   -16,   -64,   -64,    34,    12,    64,    69,
      51,    71,    52,    80,    81,    82,   -64,   -64,   -64,     3,
      35,    35,    74,    39,    37,   -64,   -64,   -64,   -64,   -64,
     -64,    12,    12,    12,    12,    12,    34,    37,   -64,    37,
      85,    78,   -64,    26,   -64,     1,    35,    86,   -64,   -64,
     -16,   -16,    34,   -64,   -64,   -64,   -64,   -64,    83,   -64,
      87,     1,    90,   -64,    89,   -64,   -64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,   -64,   -64,   -63,   -64,   -64,    77,    36,    33,    -5,
      43,    91,   -64,    -2,    13,    27
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      28,    26,    80,    25,     1,    27,     1,    54,    55,     2,
       3,     2,     3,     4,     1,     4,    18,    43,    84,     2,
       3,    31,    19,     4,    20,    56,     5,     6,     5,     6,
       7,     8,     9,    10,     9,    10,     5,     6,    33,    69,
       1,     8,     9,    10,    35,     2,     3,    40,    41,     4,
      68,    72,    28,    36,    76,    51,    52,    61,    62,    37,
      51,    52,     5,     6,    70,    71,    42,    38,    44,    10,
      57,    45,    66,    46,    47,    48,    49,    50,    59,    51,
      52,    73,    74,    58,    60,    63,    67,    64,    65,    77,
      78,    39,    81,    83,    85,    86,    82,    30,     0,    79,
      75
};

static const yytype_int8 yycheck[] =
{
       5,     3,    65,    12,     3,    20,     3,    23,    24,     8,
       9,     8,     9,    12,     3,    12,     4,    19,    81,     8,
       9,    12,    10,    12,    12,    27,    25,    26,    25,    26,
      29,    30,    31,    32,    31,    32,    25,    26,    12,    44,
       3,    30,    31,    32,    12,     8,     9,    14,    15,    12,
      11,    53,    57,    12,    59,    21,    22,     5,     6,     0,
      21,    22,    25,    26,    51,    52,    31,     7,    28,    32,
       6,    13,    39,    15,    16,    17,    18,    19,    27,    21,
      22,    54,    55,    14,    13,     5,    12,     6,     6,     4,
      12,    14,     6,     6,     4,     6,    13,     6,    -1,    63,
      57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    12,    25,    26,    29,    30,    31,
      32,    34,    35,    36,    37,    39,    41,    42,     4,    10,
      12,    44,    46,    47,    48,    12,    46,    20,    42,    43,
      44,    12,    38,    12,    40,    12,    12,     0,     7,    39,
      41,    41,    31,    46,    28,    13,    15,    16,    17,    18,
      19,    21,    22,    45,    23,    24,    46,     6,    14,    27,
      13,     5,     6,     5,     6,     6,    41,    12,    11,    42,
      47,    47,    46,    48,    48,    43,    42,     4,    12,    40,
      36,     6,    13,     6,    36,     4,     6
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
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 2:

/* Line 1464 of yacc.c  */
#line 92 "pl0.y"
    { 
				//In program semantics
				printf("in start semantics...so parsing is done\n");
				return 0;
			;}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 99 "pl0.y"
    {
				//printf("in block TPERIOD\n");
				//now we can safely declare "main"
				char mainHelper[18];
				strcpy(mainHelper, "(void) main() {\n}\n");
				printf("%s\n", mainHelper);
				printf("%s\n", (yyvsp[(2) - (2)].sval));
			;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 109 "pl0.y"
    {
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
				(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
			;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 114 "pl0.y"
    {
				strcat((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));
				(yyval.sval) = strdup((yyvsp[(1) - (2)].sval));
			;}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 118 "pl0.y"
    {
				strcat((yyvsp[(1) - (2)].sval), (yyvsp[(2) - (2)].sval));
				(yyval.sval) = strdup((yyvsp[(1) - (2)].sval));
			;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 122 "pl0.y"
    {
				//printf("in procedure semantics: %s\n", $1);
				(yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
			;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 128 "pl0.y"
    {
					//printf("Here\n");
					//output the equivalent C language constant variable declaration
					//printf("%s %s%s", $1, $2, $3);
					strcat((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].sval));
										
					(yyval.sval) = strdup((yyvsp[(2) - (3)].sval));
					//printf("now here with: %s\n", $$);
				;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 138 "pl0.y"
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
				;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 150 "pl0.y"
    {
					//first concatenate this rules string values all together
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
					//then assigning the values that were concatenated to the non-terminal
					//so that it can continue to be used elsewhere in the grammar
					(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
					//printf("here with: %s\n", $$);
				;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 160 "pl0.y"
    {
				//TODO: add comment
				//output the equivalent C language variable declaration
				//printf("int %s%s\n", $2, $3);

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

			;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 178 "pl0.y"
    {
				//first concatenate this rules string values all together
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
				//add a space to format the variable list nicely
				strcat((yyvsp[(1) - (3)].sval), " ");
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
				//then assing the values that were concatenated to the non-terminal 
				//so that it can continue to be used elsewhere in the grammar
				(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
			;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 188 "pl0.y"
    {
				(yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
			;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 193 "pl0.y"
    {
					strcpy((yyvsp[(1) - (5)].sval),"(void) ");
					strcat((yyvsp[(1) - (5)].sval), (yyvsp[(2) - (5)].sval));
					strcat((yyvsp[(1) - (5)].sval), "() {\n\t");


					printf("\n\n%s\n", (yyvsp[(4) - (5)].sval));
					strcat((yyvsp[(1) - (5)].sval), (yyvsp[(4) - (5)].sval));
					strcat((yyvsp[(1) - (5)].sval), "\n}\n\n");
					(yyval.sval) = strdup((yyvsp[(1) - (5)].sval));
					//printf("here >%s<\n", $$);
					//printf("(void) %s() {\n\t%s\n}\n", $2, $4);
				;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 206 "pl0.y"
    {
					//TODO: add a comment explaining what is happening here
					//printf("in procedure: $$ = %s\n", $$);
					(yyval.sval) = strdup((yyvsp[(1) - (1)].sval));
				;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 212 "pl0.y"
    {
					//this is equivalent to a variable being assigned to the result of an
					//expression
					
					strcat((yyvsp[(1) - (3)].sval), " ");
					strcat((yyvsp[(1) - (3)].sval), "= ");
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
					(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
				;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 221 "pl0.y"
    {
					//this is equivalent to a function call
					strcat((yyvsp[(2) - (2)].sval), "();");					
					(yyval.sval) = strdup((yyvsp[(2) - (2)].sval));
				;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 226 "pl0.y"
    {
					//this should output the value of what is in this TIDENT variable
					//printf("printf(\"%%d\", %s);\n", $2);
					(yyval.sval) = strdup((yyvsp[(2) - (2)].sval));
				;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 231 "pl0.y"
    {
					//TODO: add a comment explaining this	
					//this outputs the equivalant C language code for the code that is in
					//the PL0 input file
					//printf("printf(\"%%d\", %s);\n", $2); //this works
			
					
					int lengthToAllocate = strlen("printf(\"%d\", ") + strlen((yyvsp[(2) - (2)].sval)) + strlen(");\0");
					
					char formattedExpression[lengthToAllocate];

					strcpy(formattedExpression, "printf(\"%d\", ");
					strcat(formattedExpression, (yyvsp[(2) - (2)].sval));
					strcat(formattedExpression, ");\0");	

					(yyval.sval) = strdup(formattedExpression);				
					//printf("in expression: $$ = %s\n", $$);
					
		 		;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 250 "pl0.y"
    {
					strcpy((yyvsp[(1) - (3)].sval), "{\n\t%s\n}");
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
					(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
					//printf("{\n\t%s\n}", $2);
				;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 256 "pl0.y"
    {
					strcpy((yyvsp[(1) - (4)].sval), "if(");
					strcat((yyvsp[(1) - (4)].sval), (yyvsp[(2) - (4)].sval));
					strcat((yyvsp[(1) - (4)].sval), ") {\n\t");
					strcat((yyvsp[(1) - (4)].sval), (yyvsp[(4) - (4)].sval));
					strcat((yyvsp[(1) - (4)].sval), "\n}\n");
					(yyval.sval) = strdup((yyvsp[(1) - (4)].sval));
				;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 264 "pl0.y"
    {
					strcpy((yyvsp[(1) - (4)].sval), "\twhile(");
					strcat((yyvsp[(1) - (4)].sval), (yyvsp[(2) - (4)].sval));
					strcat((yyvsp[(1) - (4)].sval), ") {\n\t");
					strcat((yyvsp[(1) - (4)].sval), (yyvsp[(4) - (4)].sval));
					strcat((yyvsp[(1) - (4)].sval), "\n}\n");
				;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 272 "pl0.y"
    {
						strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
						strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
						(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
					;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 277 "pl0.y"
    {
						(yyval.sval) = strdup((yyvsp[(1) - (1)].sval));					
					;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 281 "pl0.y"
    {
					strcat((yyvsp[(1) - (3)].sval), " ");
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
					strcat((yyvsp[(1) - (3)].sval), " ");
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
					(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));

				;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 291 "pl0.y"
    {
				//most of these are equivalent in C from what the PL0 language has set up
				//but the "not" operator is different so I'm account for that here
				(yyval.sval) = strdup("!");
			;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 302 "pl0.y"
    {
					//this simply takes the string values from this rule and assigns it back
					//to the non-terminal	
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
					(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
				;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 309 "pl0.y"
    {
					//this simply takes the string values from this rule and assigns it back
					//to the non-terminal
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
					strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
					(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
				;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 318 "pl0.y"
    { 
			//this simply takes the string values from this rule and assigns it back to the 
			//non-terminal
			strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
			strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
		;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 325 "pl0.y"
    { 
			//this simply takes the string values from this rule and assigns it back to the
			//non-terminal
			strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
			strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
		;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 335 "pl0.y"
    { 
				//this simply takes the string values from this rule and assigns it back to
				//the non-terminal
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(2) - (3)].sval));
				strcat((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
				(yyval.sval) = strdup((yyvsp[(1) - (3)].sval));
				
			;}
    break;



/* Line 1464 of yacc.c  */
#line 1873 "pl0.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1684 of yacc.c  */
#line 344 "pl0.y"


//-- Function Definitions -----

int main() {
	yyparse();
	return 0;
}

