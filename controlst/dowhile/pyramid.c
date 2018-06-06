#include<stdio.h>
int main()
{
	int n,i=1,j;
	printf("Enter the no. of row/col.: ");
	scanf("%d",&n);
	do
	{
		j=1;
		do
		{
			printf("* ");
			j++;
		}while(j<=i);
		printf("\n");
		i++;
	}while(i<=n);
//	printf("\n");

}

