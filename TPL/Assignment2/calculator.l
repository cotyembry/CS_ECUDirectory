%{
#undef yywrap
#include <stdio.h>
#include <stdlib.h>

#include "calculator.tab.h"

extern yylval; //I'm not sure I need this since I define yylval as a double
%}

%%
[0-9]+\.[0-9]+	{ yylval = atof(yytext); return NUMBER; } //also what is the yylval specifically
[0-9]+		{ yylval = atoi(yytext); return NUMBER; }
[ \t]		; //this ignores whitespace since ';' is like a null expression
\n		return 0; //logical EOF in my case currently for this calculator project
.		return yytext[0]; //I need this part explained
%%




int yywrap() { return 1; }