#include<stdio.h>
float div(int,int);
int main()
{
	int x,y;
	char c;
	printf("Enter the operation: ");
	scanf("%d%c%d",&x,&c,&y);
	if(c=='+')
		printf("%d\n",add(x,y));
	if(c=='-')
		printf("%d\n",sub(x,y));
	if(c=='*')
		printf("%d\n",mul(x,y));
	if(c=='/')
	{
		float r=div(x,y);
		printf("%f\n",r);
	}
}
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
int sub(int a,int b)
{
	int subs;
	subs=a-b;
	return subs;
}
int mul(int a,int b)
{
	int mult;
	mult=a*b;
	return mult;
}
float div(int a,int b)
{
	float divi;
	divi=(float)a/b;
	return divi;
}
