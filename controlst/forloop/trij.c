#include<stdio.h>
int main()
{
	int i,j,n,p;
	printf("Enter the no. of rows/col.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=n;
		for(j=1;j<=i;j++)
		{
			printf("%d ",p--);
		}
	printf("\n");
	}
}

