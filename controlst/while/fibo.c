#include<stdio.h>
int main()
{
	int i=1,n,a=0,b=1,c=1;
	printf("Enter the Range of Fibonacci Series: ");
	scanf("%d",&n);
	do
	{
		printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
		i++;
	}while(i<=n);
	printf("\n");
}


