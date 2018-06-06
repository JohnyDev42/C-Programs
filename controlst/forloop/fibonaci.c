#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c=0;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("Fibonaci Series:");
	for(i=1;i<=n;i++)
	{
		//printf("%d ",c);
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
}
