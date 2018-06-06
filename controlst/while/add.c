#include<stdio.h>
int main()
{
	int n=0,sum=0;
	printf("Enter the numbers:");
	while(n>=0)
	{
		sum+=n;
		scanf("%d",&n);
	}
	printf("Sum=%d\n",sum);
}


