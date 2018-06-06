#include<stdio.h>
#include "test.c"
#include "add.c"
#include "sub.c"
#include "mul.c"
#include "div.c"
#include "mod.c"
float calculator(int,char,int);
int main()
{

	int m,n;
	char c;
	printf("Enter the Operation: ");
	scanf("%d%c%d",&m,&c,&n);
	printf("Result: %f",calculator(m,c,n));
	return 0;
}
float calculator(int m,char c,int n)
{
//	int add(int,int);
//	int sub(int,int);
//	int mul(int,int);
//	float div(int,int);
//	int mod(int,int);
	float res;
	switch(c)
	{
		case '+':res=add(m,n);
			 return res;
		case '-':res=sub(m,n);
			 return res;
		case '*':res=mul(m,n);
			 return res;
		case '/':res=div(m,n);
			 return res;
		case '%':res=mod(m,n);
			 return res;
	}
}


