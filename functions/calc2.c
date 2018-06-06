#include<stdio.h>
int main()
{
	int x,y;
	char c;
	printf("Enter the operation: ");
	scanf("%d%c%d",&x,&c,&y);
	if(c=='+')
		add(x,y);
	if(c=='-')
		sub(x,y);
	if(c=='*')
		mul(x,y);
	if(c=='/')
		div(x,y);
}
add(int a,int b)
{
	printf("Sum=%d\n",a+b);
}
sub(int a,int b)
{
	printf("Subtraction=%d\n",a-b);
}
mul(int a,int b)
{
	printf("Multiplication=%d\n",a*b);
}
div(int a,int b)
{
	printf("Division=%f\n",(float)a/b);
}
