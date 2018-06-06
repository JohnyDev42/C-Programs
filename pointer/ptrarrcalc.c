#include<stdio.h>
int main()
{
	int a,b,i;
	char c;
	int ADD(int,int);
	int SUB(int,int);
	int MUL(int,int);
	int DIV(int,int);
	int (*ptr[4])(int ,int)={ADD,SUB,MUL,DIV};
	printf("Enter the operation:\n");
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+')
		i=0;
	else
		if(c=='-')
			i=1;
		else
			if(c=='*')
				i=2;
			else
				if(c=='/')
					i=3;
				else
				{
					return 0;
				}

		printf("Result:%d\n",ptr[i](a,b));
}
int ADD(int x,int y)
{
	return x+y;
}
int SUB(int x,int y)
{
	return x-y;
}
int MUL(int x,int y)
{
	return x*y;
}
int DIV(int x,int y)
{
	return x/y;
}
