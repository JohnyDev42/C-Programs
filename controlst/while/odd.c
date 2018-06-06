#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the 1st Number:");
	scanf("%d",&m);
	printf("Enter the last Number:");
	scanf("%d",&n);
	printf("Odd Numbers between %d & %d are:",m,n);
	while(m<=n)
	{
		if(m%2)
			printf("%d ",m);
		m++;
	}
	printf("\n");
}
