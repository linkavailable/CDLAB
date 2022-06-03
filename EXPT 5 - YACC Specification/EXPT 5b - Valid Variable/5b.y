%{
#include<stdio.h>
%}
%token DIGIT LETTER
%%
stmt:A
     ;
A: LETTER B
 ;
B: LETTER B
 | DIGIT B
 | LETTER
 | DIGIT
 ;
%%
int main(){
printf("enter string \n");
if(yyparse()==0)
printf("valid");
return 0;
}
int yyerror()
{
printf("invalid");
return 0;
}
yywrap()
{}