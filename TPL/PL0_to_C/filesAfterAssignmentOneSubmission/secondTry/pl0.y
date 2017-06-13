%{
//FileName:      pl0.y
//Author:        John Coty Embry
//Last Modified: 04/11/2016
//Class:         Theory of Programming Language
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
    int yyerror(const char *string) { printf("Error! %s\n", string); return 1; }
    
    int globalBlockFlag = 1;    
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


%%
program:    block TPERIOD {

					//globalBlockFlag = 1;
               
               //here I should be able to append "}" for the end of main

					printf("final\n\n");

               printf("%s\n\"}\"\n", $1);
					$$ = strdup($1);
					
					printf("\n\ndone\n\n");
					//now that I'm done, I'll return 0
					return 0;
            }
    ;
block:	constexpr varexpr procedure {
      	   //if not local, put a main in here
				if(globalBlockFlag == 1) {
					//TODO: add a comment here
					//if we are in the global 'block' flow, we can safely add the main function here
					//first allocate enough space to hold all the characters + the custom main string
					//then concatenate them all together. Finally assign the final string to $$ to be
					//returned and used
					int length = strlen($1) + strlen($2) + strlen($3) + 17; //+ 17 for the mainHelper string length
					char mainHelper[length];
					strcpy(mainHelper, "void main() {\n");
					strcat(mainHelper, $1);
					strcat(mainHelper, $2);
					strcat(mainHelper, $3);
					$$ = strdup(mainHelper);		

					printf("set to 0...1\n");
					//make sure to reset the flag for use next time (if it ever is used again)
					globalBlockFlag = 0;
				}
				else {
					//if we are not in the global 'block' flow, just get the values of the rule/grammar
					//and let them be returned
					strcat($1, $2);
      	   	strcat($1, $3);
      	   	$$ = strdup($1);
				}
				
      	}
    |		constexpr procedure {

				if(globalBlockFlag == 1) {
					//TODO: add a comment here
					//if we are in the global 'block' flow, we can safely add the main function here
					//first allocate enough space to hold all the characters + the custom main string
					//then concatenate them all together. Finally assign the final string to $$ to be
					//returned and used
					int length = strlen($1) + strlen($2) + 17; //+ 17 for the mainHelper string length
					char mainHelper[length];
					strcpy(mainHelper, "(void) main() {\n");
					strcat(mainHelper, $1);
					strcat(mainHelper, $2);
					//strcat(mainHelper, $3);
					$$ = strdup(mainHelper);

					printf("set to 0...2\n");		
					//make sure to reset the flag for use next time (if it ever is used again)
					globalBlockFlag = 0;
				}
				else {		
					strcat($1, $2);
	         	$$ = strdup($1);
					
				}
        	}
    |		varexpr procedure {
				printf("1here with: >%s<, >%s<\n\n", $1, $2);
				if(globalBlockFlag == 1) {
					
					//TODO: add a comment here
					//if we are in the global 'block' flow, we can safely add the main function here
					//first allocate enough space to hold all the characters + the custom main string
					//then concatenate them all together. Finally assign the final string to $$ to be
					//returned and used
					int length = strlen($1) + strlen($2)+ 17; //+ 17 for the mainHelper string length
					char mainHelper[length];
					strcpy(mainHelper, "(void) main() {\n");
					strcat(mainHelper, $1);
					strcat(mainHelper, $2);
					//strcat(mainHelper, $3);
					$$ = strdup(mainHelper);
				
					printf("set to 0...3\n");
					//make sure to reset the flag for use next time (if it ever is used again)
					globalBlockFlag = 0;
				}
				else {
					strcat($1, $2);
           	 	$$ = strdup($1);
            	
				}	
        	}
    |		procedure {
				printf("2here with: %s\n\n", $1);
				if(globalBlockFlag == 1) {
					//TODO: add a comment here
					//if we are in the global 'block' flow, we can safely add the main function here
					//first allocate enough space to hold all the characters + the custom main string
					//then concatenate them all together. Finally assign the final string to $$ to be
					//returned and used
					int length = strlen($1) + 17; //+ 17 for the mainHelper string length
					char mainHelper[length];
					strcpy(mainHelper, "(void) main() {\n");
					strcat(mainHelper, $1);
					//strcat(mainHelper, $2);
					//strcat(mainHelper, $3);
					$$ = strdup(mainHelper);
			
					printf("in procedure: %s\n\n", $$);

					printf("set to 0...4\n");
					//make sure to reset the flag for use next time (if it ever is used again)
					globalBlockFlag = 0;
				}
				else {
					
            	$$ = strdup($1);
				}
        	}
    ;
constexpr:	TCONST constList TEOL {
               //printf("Here\n");
               //output the equivalent C language constant variable declaration
               //printf("%s %s%s", $1, $2, $3);
               strcat($2, $3);
    				strcat($2, "\n");
               $$ = strdup($2);
               //printf("now here with: %s\n", $$);
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
                //printf("here with: %s\n", $$);
            }
;
varexpr:	TVAR varList TEOL {
         	//TODO: add comment
				//output the equivalent C language variable declaration
          	//printf("int %s%s\n", $2, $3);
                
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
         	$$ = strdup($1);
        	}
    ;
procedure:  TPROCEDURE TIDENT TEOL block TEOL procedure {

					strcpy($1, "(void) ");
               strcat($1, $2);
               strcat($1, "() {\n    ");
        
        
               //printf("\n\n%s\n", $4);
               strcat($1, $4);
               strcat($1, "\n}\n\n");
					
					strcat($1, $6);
				
					printf("start procedure\n\n");
					printf("%s\n", $6);
					printf("end procedure\n\n");

               $$ = strdup($1);
            }
    |       TPROCEDURE TIDENT TEOL block TEOL {
					
                strcpy($1, "(void) ");
                strcat($1, $2);
                strcat($1, "() {\n    ");
        
        
                strcat($1, $4);
                strcat($1, "\n}\n\n");
                $$ = strdup($1);

					printf("start mini procedure\n\n");
					printf("%s\n", $$);
					printf("\n\nend mini procedure\n\n");

            }
    |       statement {
               //TODO: add a comment explaining what is happening here
               //printf("in procedure: $$ = %s\n", $$);
					//strcat($1, "\n");
					//printf("just a statement: %s\n", $1);
               $$ = strdup($1);
					//printf("in statement: %s\n", $1);	
            }
    ;
statement:  TIDENT TEQOP expression {
               //this is equivalent to a variable being assigned to the result of an
               //expression
    
               strcat($1, " ");
               strcat($1, "= ");
               strcat($1, $3);

					
					strcat($1, ";\n"); //TODO: figure out how this ';' gets duplicated so I can remove this if statement
					
						
               $$ = strdup($1);
            }
    |       TCALL TIDENT {
                //this is equivalent to a function call
                strcat($2, "()"); //changed from (); to () on 4/11/16
                $$ = strdup($2);
            }
    |       TQUESTIONMARK TIDENT {
               //this should output the value of what is in this TIDENT variable
					int length = strlen($2) + 18; //+ 17 for the custom printf string length
					char temp[length];
					strcpy(temp, "printf(\"%d\", "); 
					strcat(temp, $2);
					strcat(temp, ");\n");
					$$ = strdup(temp);
            }
    |       TEXCLAMATION expression {
                //TODO: add a comment explaining this
                //this outputs the equivalant C language code for the code that is in
                //the PL0 input file
                //printf("printf(\"%%d\", %s);\n", $2); //this works
        
        
                int lengthToAllocate = strlen("printf(\"%d\", ") + strlen($2) + strlen(");\0");
        
                char formattedExpression[lengthToAllocate];
        
                strcpy(formattedExpression, "printf(\"%d\", ");
                strcat(formattedExpression, $2);
                strcat(formattedExpression, ");\0");
        
                $$ = strdup(formattedExpression);
                //printf("in expression: $$ = %s\n", $$);
            }
    |       TBEGIN statementList TEND {
					//not sure what I was trying to do on the next line so I will comment it out for now            	
					//strcpy($1, "{\n    %s\n");
					strcpy($1, "{\n");
            	strcat($1, $2);
					strcat($1, "\n}");
               $$ = strdup($1);
					//printf("in begin: %s, %s, %s\nend\n", $1, $2, $3);					
               //printf("{\n\t%s\n}", $2);
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
                strcpy($1, "    while(");
                strcat($1, $2);
                strcat($1, ") {\n    ");
                strcat($1, $4);
                strcat($1, "\n}\n");
            }
    ;
statementList:  statement TEOL statementList {
						//add the semi-colon to the end of the statement
                	strcat($1, $2);
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
						//printf("in plain statementlist statement: %s\n", $1);
                }
    ;
condition:  TODD expression {
    				

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
                //but the "not" operator is different so I'm account for that here
                $$ = strdup("!");
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
    
    
    yyparse();
    return 0;
}
