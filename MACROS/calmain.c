#include<stdio.h>
#include "calc.c"
#include "calc.c"
int main()
{
	int a,b,res;
	char c;
	printf("Enter the operation:\n");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		case '+':res=ADD(a,b);
			 break;
		case '-':res=SUB(a,b);
			 break;
		case '*':res=MUL(a,b);
			 break;
		case '/':res=DIV(a,b);
	}
	printf("Result:%d\n",res);
}
