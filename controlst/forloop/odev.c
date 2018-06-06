#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the 1st & last Number: ");
	scanf("%d%d",&m,&n);
	printf("Even: ");
	for(i=m;i<=n;i++)
	{
		if(i%2==0)
			printf("%d ",i);
	}
	printf("\n");
	printf("Odd: ");
	for(j=m;j<=n;j++)
	{
		if(j%2!=0)
			printf("%d ",i);
	}
	printf("\n");
}
