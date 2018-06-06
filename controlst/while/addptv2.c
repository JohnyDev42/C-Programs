#include<stdio.h>
int main()
{
	int i=1,sum=0,n;
	printf("Enter 10 Numbers:\n");
	while(i<=10)
	{
		scanf("%d",&n);
		if(n<0)
		{
			n=-n;
		}
		sum+=n;
		i++;
	}
	printf("Sum=%d\n",sum);
}

