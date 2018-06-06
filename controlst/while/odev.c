#include<stdio.h>
int main()
{
	int n,m,i,j;
	printf("Enter the 1st Number:");
	scanf("%d",&m);
	printf("Enter the Last Number:");
	scanf("%d",&n);
	i=m;
	j=m;
	printf("Odd Numbers are:");
	while(i<=n)
	{
		if(i%2)
			printf("%d ",i);
	i++;
	}
	printf("\n");
	printf("Even Numbers are:");
	while(j<=n)
	{
		if(j%2==0)
			printf("%d ",j);
		j++;
	}
	printf("\n");
}	
