%{
#include <stdio.h>

unsigned lineCount = 1;

%}

WS [ \t\n]
WORD [a-zA-Z]
DIGIT [0-9]

%%
\n	lineCount++;

int
float
double
if
else
void
for
while

\/\/.*$
^\#.*$
[\(|\)|\,|\!|\{|\}|\[|\]|\+|\;|\=|\%|\<|\>]+


{WORD}+		printf("%s line %u\n", yytext, lineCount);  
{DIGIT}+
[ ]+
.
%%




int yywrap() { return 1; }
    
void main() {
  yylex();
}