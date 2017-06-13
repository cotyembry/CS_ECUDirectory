%{
#include <stdio.h>

int yylex();
int yyerror(const char * string) { printf("Error! %s\n", string); }
 
int isFloat = 0;
%}

%code requires {

//#define YYSTYPE float

}

%union { //here I would be able to define multiple types for different variables
  float fval;
}

%token <fval> INTEGER
%token <fval> FLOAT
%token NAME
%token <fval> expression
%token <fval> factor

%%

start:	expression	{ if(isFloat)	printf("= %f\n", $1);
			  else 		printf("= %f\n", $1); }
     ;

expression:	expression
	  |	NUMBER		printf("found: %f\n", $1);
	  ;

%%

  int main() {
    yyparse();
    return 0;
  }
