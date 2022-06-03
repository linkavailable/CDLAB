%{
#include<stdio.h>
#include<ctype.h>
%}
%token dig
%left '+' '-'
%left '*' '/'
%%
st:exp{printf("\nValid:%d",$1);}
;
exp:exp '+' exp 	{$$=$1+$3;}
|exp '-' exp 		{$$=$1-$3;}
|exp '*' exp 		{ $$=$1*$3;}
|exp '/' exp 		{if($3==0) yyerror("error"); else  $$=$1/$3;}
|dig 			{$$=$1;}
|'('exp')' 		{$$=$2;}
;
%%
int main()
{
printf("Enter the expression:");
if(yyparse()==0)
printf("\nSuccess\n");
return 0;
}
int yyerror()
{
printf("\nInvalid\n");
return 0;
}
yywrap()
{
}
