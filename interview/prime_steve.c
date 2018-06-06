#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	printf("Enter the range:");
	scanf("%d",&n);
	int prime[n+1];
	for(i=0;i<=n;i++)
		prime[i]=1;
	prime[0]=0;
	prime[1]=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(prime[i]==1)
		{
			for(j=2;i*j<n;j++)
				prime[i*j]=0;
		}
	}
}
