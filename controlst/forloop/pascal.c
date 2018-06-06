#include<stdio.h>
int main()
{
	int i,j,n,c;
	printf("Enter the Number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=1;
		for(j=1;j<=i;j++)
		{
			if(j==1||j==i)
			printf("%d ",1);
			else
			{
				c=c*(i-j+1)/(j-1);
				printf("%d ",c);
			}
		}
		printf("\n");
	}
}

