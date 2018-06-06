#include<stdio.h>
int main()
{
	int i,j,n,p;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		p=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",p++);
		}
		p=p-2;
		for(j=1;j<=i-1;j++)
			printf("%d",p--);
		printf("\n");
	}
	n--;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		p=n-i+1;
		for(j=1;j<=n+1-i;j++)
			printf("%d",p++);
		p=p-2;
		for(j=1;j<=n-i;j++)
			printf("%d",p--);
	printf("\n");
	}
}
