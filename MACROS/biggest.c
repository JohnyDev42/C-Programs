#include<stdio.h>
#define MAX(a,b) a>b?a:b
int main()
{
	int a,b,c;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	c=MAX(a,b);
	printf("Biggest is %d\n",c);
}
