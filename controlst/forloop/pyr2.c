#include<stdio.h>
int main()
{
	int i,j,n,p;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");
		p=i;
		for(j=1;j<=i;j++)
			printf("%d ",p--);
		printf("\n");
	}
}

