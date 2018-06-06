#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the 1st Number:");
		scanf("%d",&m);
	printf("Enter the Last Number:");
	scanf("%d",&n);
	while(m<=n)
	{
		printf("%d ",m);
		m++;
	}
	printf("\n");
}
