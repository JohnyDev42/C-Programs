#include<stdio.h>

int main()
{
	int a,b;
	char c;
	int (*calc(char))(int,int);
	int (*ptr)(int,int);
	printf("Enter the Operation:");
	scanf("%d%c%d",&a,&c,&b);
	ptr=calc(c);
	printf("%d\n",ptr(a,b));
}

int ADD(int a,int b)
{
	return a+b;
}
int SUB(int a,int b)
{
	return a-b;
}
int MUL(int a,int b)
{
	return a*b;
}
int DIV(int a,int b)
{
	return a/b;
}
int MOD(int a,int b)
{
	return a%b;
}
int (*calc(char c))(int a,int b)
{
	switch(c) 
	{
		case '+':return ADD;
		case '-':return SUB;
		case '*':return MUL;
		case '/':return DIV;
		case '%':return MOD;
	}
}
