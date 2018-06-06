#include<stdio.h>
int main()
{
	char c;
	printf("Enter the operation: ");
	scanf("%c",&c);
	if(c=='+')
		add();
	if(c=='-')
		sub();
	if(c=='*')
		mul();
	if(c=='/')
		div();
}
add()
{
	int a,b;
	printf("Enter the value of a & b: ");
	scanf("%d%d",&a,&b);
	printf("Sum=%d\n",a+b);
}
sub()
{
	int a,b;
	 printf("Enter the value of a & b: ");
	 scanf("%d%d",&a,&b);
	printf("Subtraction=%d\n",a-b);
}
mul()
{
	int a,b;
	 printf("Enter the value of a & b: ");
	  scanf("%d%d",&a,&b);
	printf("Multiplication=%d\n",a*b);
}
div()
{
	int a,b;
	  printf("Enter the value of a & b: ");
	   scanf("%d%d",&a,&b);
	printf("Division=%f\n",(float)a/b);
}
