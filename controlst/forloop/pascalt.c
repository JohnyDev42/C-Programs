#include<stdio.h>
int main()
{
	int i,j,n,c;
	printf("Enter the Number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=1;
		for(j=1;j<n-i+1;j++)
			printf("   ");
		for(j=1;j<=i;j++)
		{
			if(j==1||j==i)
				printf("%6d",1);
			else
			{
				c=c*(i-j+1)/(j-1);
				printf("%6d",c);
			}
		}
		printf("\n");
	}
}

