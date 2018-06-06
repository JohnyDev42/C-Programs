#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the Number of row/col.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((i%2!=0&&j%2!=0)||(i%2==0&&j%2==0))
			printf("%d ",1);
			else
			{
				printf("%d ",0);
			}
		}
		printf("\n");
	}
}
