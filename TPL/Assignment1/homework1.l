%{
#include <stdio.h>

unsigned lineCount = 1;
void functionFormatter(char*, size_t); //declare the subfunction with the types of the parameters
void singleVariableFormatter(char*, size_t);
void multipleVariableFormatter(char*, size_t);


//TODO: account for a function returning 'char*' or 'char *' or a generic type (if there is such a thing)
//TODO: what if multiple operators are given in a row when assigning a default value to a variable declaration
//TODO: what if after the operator there isn't a constant, but another varialbe?...make sure it has already been delared
%}

WS [ \t\n]
WORD [a-zA-Z]
OP [\+\-\/\*\^\=]
DIGIT [0-9]

%%
(\n)	lineCount++;
#.*$
(((void)|(int)|(float)|(double)){WS}{WORD}+{WS}*\(.*\))	functionFormatter(yytext, strlen(yytext)); 


int{WS}+\_*{WORD}+(\_*|{DIGIT}*|{WORD}*)*{WS}*{OP}*{WS}*{DIGIT}*;		singleVariableFormatter(yytext, strlen(yytext));

int{WS}+\_*{WORD}+((,){WS}*\_*{WORD}+((\_*)|({DIGIT}*)|{WORD}*)*{WS}*{OP}*{WS}*{DIGIT}*)+;	multipleVariableFormatter(yytext, strlen(yytext));


.
%%

//int{WS}+\_*{WORD}+((\_*)|({DIGIT}*|{WORD}*))*({WS}*{OP}*{WS}*{DIGIT}*;|((,){WS}*\_*{WORD}+((\_*)|({DIGIT}*)|{WORD}*)*{WS}*{OP}*{WS}*{DIGIT}*)+;)		printf("found >%s<\n", yytext);



int yywrap() { return 1; }
    
void main() {
  yylex();
}

//I use this function to format my string to be able to print out the data dictionary correctly
void functionFormatter(char* myString, size_t lengthOfArray) {
  char* functionName = malloc(lengthOfArray*sizeof(char)); //allocate the array
  int i = 0, j = 0; //I'll use these for help with constructing the functionName array
  
  
  //iterate through the char array and get just the function name
  //if we get here we know the form of the string is something like "word functionName (blah blah)"
  for( i; i < lengthOfArray; i++) {
    
    if(myString[i] == ' ') {
      i++; //now the next letters until the next space or a '(' is the function name I want
      while(myString[i] != ' ' && myString[i] != '(') { 
	functionName[j] = myString[i];
	i++;
	j++;
      }
      i = lengthOfArray; //this is to terminate the for loop
    }
    
  }
  
  printf("function %s : line %u\n", functionName, lineCount);
  free (functionName); //free the memory used
}

void singleVariableFormatter(char* fullStringWithVariableName, size_t lengthOfArray) {
  //when this is called, the string is either in the form "int varName;" or "int varName = 0;"
  //go through this char array and get the variable names
  char* variableName = malloc(lengthOfArray*sizeof(char));
  int i = 0, j = 0; //I'll use these for help with constructing the variableName array
  
  for( i; i < lengthOfArray; i++) {
  
    if(fullStringWithVariableName[i] == ' ') {
      i++; //the current location in the array must now be the start of the variable name
	   //from here the variable name will be ended with a ' ', ';', or a '=' sign
	
      while(fullStringWithVariableName[i] != ' ' && fullStringWithVariableName[i] != ';' && fullStringWithVariableName[i] != '=') {
	  variableName[j] = fullStringWithVariableName[i];
	  
	  i++;
	  j++;
      }
      i = lengthOfArray; //this is to terminate the for loop
    }
  
  }
  printf("variable name %s : line %u\n", variableName, lineCount);
  free(variableName); //free the memory used
}

void multipleVariableFormatter(char* lineThatContainsVariable, size_t lengthOfArray) {
  //when this is called, the string is either in the form "int varName, anotherName;" or something like "int varName = 0, anotherName;"
  //go through this char array and get the variable names

  char* variableName = malloc(lengthOfArray*sizeof(char));
  int i = 0, j = 0;
  
  for( i; i < lengthOfArray; i++) {
  
    //TODO
  
  }
}