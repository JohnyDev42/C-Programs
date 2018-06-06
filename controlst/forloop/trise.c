#include<stdio.h>
int main()
{
	int i,j,n,p=1;
	printf("Enter the no. of rows/col.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%.2d ",p++);
		//	printf(" ");
		}
	printf("\n");
	}
}

