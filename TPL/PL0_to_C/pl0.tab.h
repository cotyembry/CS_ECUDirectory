/* A Bison parser, made by GNU Bison 2.4.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1685 of yacc.c  */
#line 53 "pl0.y"

    char *sval;



/* Line 1685 of yacc.c  */
#line 90 "pl0.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


