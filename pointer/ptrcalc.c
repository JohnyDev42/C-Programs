#include<stdio.h>
int main()
{
	int a,b;
	char c;
	int (*ptr)(int,int);
	int ADD(int,int);
	int SUB(int,int);
	int MUL(int,int);
	int DIV(int,int);
	printf("Enter the operation:");
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+')
		ptr=ADD;
	else
		if(c=='-')
			ptr=SUB;
		else
			if(c=='*')
				ptr=MUL;
			else
				if(c=='/')
					ptr=DIV;
				else{
					printf("Try Valid Operation\n");
					return 0;
				}
	printf("Result:%d\n",ptr(a,b));
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
