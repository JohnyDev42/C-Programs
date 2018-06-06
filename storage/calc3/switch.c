#include<stdio.h>
extern int a,b;
void oper(char c)
{
	float res;
	switch(c)
	{
		case '+':res=a+b;
			 break;
		case '-':res=a-b;
			 break;
		case '*':res=a*b;
			 break;
		case '/':res=(float)a/b;
			 break;
		default:return;
	}
	printf("Result is %f\n",res);
}
