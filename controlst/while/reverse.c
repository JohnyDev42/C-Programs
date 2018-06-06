#include<stdio.h>
int main()
{
	int a,b,c=0,i=0;
	printf("Enter the Number: ");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("Reverse is %d\n",c);
}

