//original line:
//int{WS}+\_*{WORD}+((,){WS}*\_*{WORD}+((\_*)|({DIGIT}*)|{WORD}*)*{WS}*{OP}*{WS}*{DIGIT}*)+;	multipleVariableFormatter(yytext, strlen(yytext));


int{WS}+\_*{WORD}+(\_*|{DIGIT}*|{WORD}*)*



int{WS}+\_*{WORD}+{WS}*

(
  
  (,){WS}*\_*{WORD}+
  
  (\_*|{DIGIT}*|{WORD}*)*
  
  {WS}*{OP}*{WS}*{DIGIT}*
  
  
)+;




int{WS}+\_*{WORD}+{WS}*

(
  
  (,){WS}*\_*{WORD}+
  
  (\_*|{DIGIT}*|{WORD}*|\,)*
  
  {WS}*{OP}*{WS}*{DIGIT}*
  
  
)+;

int{WS}+\_*{WORD}+(\_*|{DIGIT}*|{WORD}*)*{WS}*\,.*$										  //(\_*|{WORD}*|{DIGIT}*)*{WS}*

int{WS}+\_*{WORD}+(\_*|{DIGIT}*|{WORD}*)*{WS}*\,((({WS}*\_*{WORD}+(\_*|{WORD}*|{DIGIT}*)*{WS}*{OP}*{WS}*{DIGIT}*,)*)|({WS}*\_*{WORD}+(\_*|{WORD}*|{DIGIT}*);))	printf("i found: %s\n", yytext);



