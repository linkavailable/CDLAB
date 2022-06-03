%{
#include<stdio.h>
#include<ctype.h>
%}
%token dig
%token id
%left '+' '-'
%left '*' '/'
%%
st:exp
;
exp:exp '+' exp
|exp '-' exp
|exp '*' exp
|exp '/' exp
|'{'exp'}'
|dig
|id
;
%%
int main()
{
printf("Enter the expression:");
if(yyparse()==0)
printf("\n Valid\n");
return 0;
}
int yyerror()
{
printf("\n Invalid\n");
return 0;
}
yywrap()
{
}
