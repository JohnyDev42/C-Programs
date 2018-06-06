/*Add 10 +ve Numbers only and ignore the -ve */
#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter 10 Numbers:\n");
	while(i<=10)
	{
		scanf("%d",&n);
		if(n>=0)
		{
			
		sum+=n;
			i++;
		}
	}
	printf("Sum=%d\n",sum);
}
		

