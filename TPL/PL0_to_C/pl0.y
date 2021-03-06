%{
//FileName:      pl0.y
//Author:        John Coty Embry
//Last Modified: 04/23/2016
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
    

   //I will use these next two variables to help with avoiding segmentation faults
   int emptyConstExpr = 0;
   int emptyVarExpr = 0;
	
	int cameFromProcedure = 0;
	int beginWasVisitedFlag = 0;
	int inProcedurePreAction = 0;
	int justEndedProcedureList = 0;
	int test = 0;
	int statementWasVisitedFlag = 0;
	
//the flags below are used for sure
	int globalBlockFlag = 0;
	int procedureWasVisitedFlag = 0;
	int printedMain = 0;
	int inBegin = 0;
	int inStatementFromBegin = 0;

	
	
%}

%union {
    char *sval;
}

%token <sval> TNUMBER    // integer
%token <sval> TCOMMA     // ","
%token <sval> TEOL       // ";"
%token <sval> TPERIOD    // "."
%token <sval> TQUESTIONMARK // "?"
%token <sval> TEXCLAMATION	 // "!"
%token <sval> TLP		    // "("
%token <sval> TRP		    // ")"
%token <sval> TIDENT     // identifier
%token <sval> TEQ   	    // "="
%token <sval> TPOUND	    // "#"
%token <sval> TLT		    // "<"
%token <sval> TLTEQ	    // "<="
%token <sval> TGT		    // ">"
%token <sval> TGTEQ	    // ">="
%token <sval> TEQOP	    // ":="
%token <sval> TPLUS	    // "+"
%token <sval> TMINUS	    // "-"
%token <sval> TMULT	    // "*"
%token <sval> TDIV	    // "/"
%token <sval> TBEGIN     // "BEGIN"
%token <sval> TEND	    // "END"
%token <sval> TIF		    // "IF"
%token <sval> TTHEN	    // "THEN"
%token <sval> TWHILE	    // "WHILE"
%token <sval> TDO		    // "DO"
%token <sval> TCONST     // "CONST"
%token <sval> TVAR       // "VAR"
%token <sval> TPROCEDURE // "PROCEDURE"
%token <sval> TCALL	    // "CALL"
%token <sval> TODD		 // "ODD"

%type <sval> program
%type <sval> block
%type <sval> constexpr
%type <sval> constList
%type <sval> varexpr
%type <sval> varList
%type <sval> procedure

%type <sval> statement
%type <sval> statementList
%type <sval> condition
%type <sval> logicOP
%type <sval> expression
%type <sval> term
%type <sval> factor


%type <sval> beginProcedure
%type <sval> endProcedure
%type <sval> startBegin
%type <sval> endBegin

%%

start: 	program
	;

program:    block TPERIOD {

					//globalBlockFlag = 1;
               
               //here I should be able to append "}" for the end of main
	
					//if the code we are translating doesn't have a PROCEDURE in it, then
					//this flag would remain 0 and so the main would never be printed. This
					//fixes that problem
					if(procedureWasVisitedFlag == 0 && printedMain != 1) {
						printf("void main() {\n");
					}

					//and now to print the translated program and ending curly brace for main
               printf("%s\n}\n\n", $1);
					$$ = strdup($1);
					
					//now that I'm done, I'll return 0

					//I probably don't need this here unless I have another file to be parsed
					//right behind it without the memory being cleared..maybe..., but I'm doing it anyway
				
					procedureWasVisitedFlag = 0;
					return 0;
	
            }
    ;
block:	constexpr varexpr procedure {
				strcat($1, $2);
				strcat($1, $3);
				$$ = strdup($1);
			}
	|		constexpr procedure {
				strcat($1, $2);
				$$ = strdup($1);
			}
	|		varexpr procedure {
				strcat($1, $2);
				$$ = strdup($1);
			}
	|		procedure {
				//in procedure semantics
				$$ = strdup($1);
			}
	;
constexpr:	TCONST constList TEOL {
               //translate to the equivalent C language constant variable declaration

               //right now I'm treating all const...ants as integers
					//simply replace int with char or whatever you wish
					//to change the type for the constants
					strcpy($1, "const int ");
               strcat($2, $3);
    				strcat($2, "\n");
					strcat($1, $2);
               $$ = strdup($1);
            }
    ;
constList:  constList TCOMMA TIDENT TEQ TNUMBER	{
                //first concatenate this rules string values all together
                strcat($1, $2);
                //add a space to format the variable list nicely
                strcat($1, " ");
                strcat($1, $3);
                strcat($1, $4);
                strcat($1, $5);
                //then assing the values that were concatenated to the non-terminal
                //so that it can continue to be used elsewhere in the grammar
                $$ = strdup($1);
            }
    |       TIDENT TEQ TNUMBER  {
                //first concatenate this rules string values all together
                strcat($1, $2);
                strcat($1, $3);
                //then assigning the values that were concatenated to the non-terminal
                //so that it can continue to be used elsewhere in the grammar
                $$ = strdup($1);
            }
    ;
varexpr:	TVAR varList TEOL {
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
            int lengthHelper = strlen($1) + strlen($2) + strlen($3) + strlen(intHelper);
            char temp[lengthHelper];
            strcpy(temp, intHelper);
            //strcat(temp, $1);
            strcat(temp, $2);
            strcat(temp, $3);
            strcat(temp, "\n");
				
            $$ = strdup(temp);
     		}
    ;
varList:	TIDENT TCOMMA varList {
        		//first concatenate this rules string values all together
				strcat($1, $2);
         	//add a space to format the variable list nicely
         	strcat($1, " ");
            strcat($1, $3);
            //then assing the values that were concatenated to the non-terminal
            //so that it can continue to be used elsewhere in the grammar
            $$ = strdup($1);
         }
    |   	TIDENT {
				//'bubble up' the string
         	$$ = strdup($1);
        	}
    ;



procedure: 	beginProcedure TIDENT TEOL block TEOL {globalBlockFlag = 0;} procedure {
					//here I translate a function declaration from PL0 syntax into the equivalent C
					//Language statement
					strcpy($1, "void ");
               strcat($1, $2);
               strcat($1, "() {\n    ");
        			//$4 is the block which is (almost) anything inside the 'procedure' or 'function'
               strcat($1, $4);
               strcat($1, "\n}\n\n");
					
					strcat($1, $7);

               $$ = strdup($1);
					
            }

   |       beginProcedure TIDENT TEOL block endProcedure {
                strcpy($1, "void ");
                strcat($1, $2);
                strcat($1, "() {\n    ");
 
                strcat($1, $4);
                strcat($1, "\n}\n\n");
                $$ = strdup($1);

            }
	|    

   			{	if(inBegin == 1) {
						inStatementFromBegin = 1;
					}
				}
				statement {
            	$$ = strdup($2);
            }
    ;

beginProcedure: 	TPROCEDURE {
							globalBlockFlag = 1;
							procedureWasVisitedFlag = 1;
						}
	;

endProcedure:		TPROCEDURE {
							globalBlockFlag = 0;
						}
	;

statement:  TIDENT TEQOP expression {
               //this is equivalent to a variable being assigned to the result of an
               //expression

               strcat($1, " ");
               strcat($1, "= ");
               strcat($1, $3);

					strcat($1, ";\n");
						
               $$ = strdup($1);
            }
    |       TCALL TIDENT {
                //this is equivalent to a function call in C
                strcat($2, "();"); //changed from (); to () on 4/11/16
                $$ = strdup($2);
            }
    |       TQUESTIONMARK TIDENT {
               //this should output the value of what is in this TIDENT variable
					int length = strlen($2) + 18; //+ 18 for the custom print f string length
					char temp[length];
					strcpy(temp, "printf(\"%d\\n\", "); 
					strcat(temp, $2);
					strcat(temp, ");\n");
					$$ = strdup(temp);
            }
    |       TEXCLAMATION expression {
            	//TODO: add a comment explaining this
         		//this translates the equivalant C code for the code that is in
               //the PL0 input file
        
					//first figure out how much space is necessary for the custom string to be built
               int lengthToAllocate = strlen("printf(\"%d\\n\", ") + strlen($2) + strlen(");\0");
        			//allocate, then append all of the rest of the built strings together

               char formattedExpression[lengthToAllocate];
        
               strcpy(formattedExpression, "printf(\"%d\\n\", ");
               strcat(formattedExpression, $2);
               strcat(formattedExpression, ");\0");
        
               $$ = strdup(formattedExpression);
            }
    |       startBegin statementList endBegin {



					if(globalBlockFlag == 0 && printedMain != 1 && inBegin != 1 && inStatementFromBegin != 1) {
						//if justEndedProcedureList == 0, I know this did NOT
						//come from procedure list, so this should be the place
						//where I can correctly print main

						//if globalBlockFlag == 1 we know that I can straight from
						//the top of the grammar to here so this would also be
						//correct to print main here


						//when doing this I need to make sure that I am not coming from the statementList that is inside of
						//the TBEGIN statementList TEND rule
						

						//strcpy($1, "void main() {\n{\n");


						//printedMain = 1;
					}
					else {
						if(printedMain == 1) {
							strcat($1, "{\n");
						}
						else {
							strcpy($1, "{\n");
						}

					}
					strcat($1, $2);
					strcat($1, "\n}\n");
					//strcat($2, "\n");

               $$ = strdup($1);
            }
    |       TIF condition TTHEN statement {
                strcpy($1, "if(");
                strcat($1, $2);
                strcat($1, ") {\n    ");
                strcat($1, $4);
                strcat($1, "\n}\n");
                $$ = strdup($1);
            }
    |       TWHILE condition TDO statement {
                strcpy($1, "while(");
                strcat($1, $2);
                strcat($1, ") {\n    ");
                strcat($1, $4);
                strcat($1, "\n}\n");
            }
    ;

startBegin:	TBEGIN {
					inBegin = 1;

					if(globalBlockFlag == 0 && printedMain != 1) {
						//strcpy($1, "void main() {\n{\n");
						//$$ = strdup($1);
						$$ = strdup("void main() {\n");

						printedMain = 1;
					}
					else {
						$$ = strdup("");
					}	
				}
	;

endBegin: TEND {
				inBegin = 0;
			}
	;

statementList:  statement TEOL statementList {
						//add the semi-colon to the end of the statement (I removed this from happening)
                	//strcat($1, $2); //4/12/16 commented this out to remove the ';' from the end of the statement

						//and for formatting add a newline
						strcat($1, "\n");
						//add anything that comes back from statementList
                	strcat($1, $3);
						//give the final result over to the non-terminal
                	$$ = strdup($1);
						//printf("in statementlist: %s\n", $1);
                }
    |           statement {
                	$$ = strdup($1);
						
                }
    ;
condition:  TODD expression {

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

					strcpy($1, "(((");
					strcat($1, $2);
					strcat($1, ") % 2) != 0)");
					
            }
    |       expression logicOP expression {
                strcat($1, " ");
                strcat($1, $2);
                strcat($1, " ");
                strcat($1, $3);
                $$ = strdup($1);
            }
    ;
logicOP:    TEQ {
                
            }
    |       TPOUND {
                //most of these are equivalent in C from what the PL0 language has set up
                //but the "not" operator is different so I'm accounting for that here
                $$ = strdup("!=");
            }
    |       TLT {
                
            }
    |       TLTEQ {
                
            }
    |       TGT {
                
            }
    |       TGTEQ {
                
            }
    ;
expression: term {
 
            }
    |       expression TPLUS term {
                //this simply takes the string values from this rule and assigns it back
                //to the non-terminal
                strcat($1, $2);
                strcat($1, $3);
                $$ = strdup($1);

            }
    |       expression TMINUS term {
                //this simply takes the string values from this rule and assigns it back
                //to the non-terminal
                strcat($1, $2);
                strcat($1, $3);
                $$ = strdup($1);

            }
    ;
term:   factor {
            
        }
    |   term TMULT factor {
            //this simply takes the string values from this rule and assigns it back to the
            //non-terminal
            strcat($1, $2);
            strcat($1, $3);
            $$ = strdup($1);
        }
    |   term TDIV factor {
            //this simply takes the string values from this rule and assigns it back to the
            //non-terminal
            strcat($1, $2);
            strcat($1, $3);
            $$ = strdup($1);
        }
    ;
factor: TIDENT {
            
        }
    |   TNUMBER {
            
        }
    |   TLP expression TRP {
            //this simply takes the string values from this rule and assigns it back to
            //the non-terminal
            strcat($1, $2);
            strcat($1, $3);
            $$ = strdup($1);
        }
    ;
%%

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
