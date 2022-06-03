%{
#include"y.tab.h"
#include<math.h>
%}
%%
[a-zA-Z]+ {return id;}
[0-9]+    {return dig;}
[+]       {return '+';}
[-]       {return '-';}
[*]       {return '*';}
[/]       {return '/';}
[\t]+;
[\n]      {return 0;}
.         {return yytext[0];}
%%
