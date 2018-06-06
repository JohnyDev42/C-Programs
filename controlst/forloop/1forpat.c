#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1,j=1;i<=n;)
	{
		if(j<=i)
		{
		printf("* ");
		j++;
		continue;
		}
		
		if(j>i)
		{
		printf("\n");
		i++;
		j=1;
		}
	}
}
