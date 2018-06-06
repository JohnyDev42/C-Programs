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
	int (*fun_calc[])(int,int)={ADD,SUB,MUL,DIV,MOD};
	int a,b,c;
	char ch;
	printf("Enter the Operation:");
	scanf("%d%c%d",&a,&ch,&b);
	if(ch=='+')
		c=0;
	else
		if(ch=='-')
			c=1;
		else
			if(ch=='*')
				c=2;
			else
				if(ch=='/')
					c=3;
				else
					if(ch=='%')
						c=4;
					else
						return 0;
	printf("%d\n",fun_calc[c](a,b));
}

