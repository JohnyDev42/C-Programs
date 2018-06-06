#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter the 10 Numbers\n");
	while(i<=10)
	{
		scanf("%d",&n);
		sum+=n;
		i++;
	}
	printf("Sum=%d",sum);
}

