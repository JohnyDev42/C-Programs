#include<stdio.h>
float div(void);
int main()
{
	char c;
	printf("Enter the operation: ");
	scanf("%c",&c);
	if(c=='+')
		printf("%d",add());
	if(c=='-')
		printf("%d",sub());
	if(c=='*')
		printf("%d",mul());
	if(c=='/')
		printf("%f",div());
}
int add()
{
	int a,b,d;
	printf("Enter the value of a & b: ");
	scanf("%d%d",&a,&b);
	d=a+b;
	return d;
}
int sub()
{
	int a,b,d;
	 printf("Enter the value of a & b: ");
	 scanf("%d%d",&a,&b);
	d=a-b;
	return d;
}
int mul()
{
	int a,b,d;
	 printf("Enter the value of a & b: ");
	  scanf("%d%d",&a,&b);
	d=a*b;
	return d;
}
float div()
{
	int a,b;
	float d;
	  printf("Enter the value of a & b: ");
	   scanf("%d%d",&a,&b);
	d=(float)a/b;
	return d;
}
