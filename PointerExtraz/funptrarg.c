#include<stdio.h>
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
int main()
{
	int a,b;
	char c;
	printf("Enter the Operation:");
	scanf("%d%c%d",&a,&c,&b);
	int (*ptr)(int,int);
	switch(c)
	{
		case '+':ptr=ADD;
			 break;
		case '-':ptr=SUB;
			 break;
		case '*':ptr=MUL;
			 break;
		case '/':ptr=DIV;
			 break;
		case '%':ptr=MOD;
	}
	fun(ptr,a,b);
}
int fun(int (*ptr)(int,int),int a,int b)
{
	printf("%d\n",ptr(a,b));
}
