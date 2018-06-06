/*sum=1+2+4+7+11+16+...*/
#include<stdio.h>
int main()
{
	int n,i,sum=0,c=1;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",c);
		c=c+i;
		sum=sum+c;
	}	
	printf("\nSum= %d\n",sum);
}

