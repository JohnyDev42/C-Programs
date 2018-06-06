#include<stdio.h>
int factor(int);
int main()
{
	register int i,j;
	int n,p1,p2;
	printf("Enter the range:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p1=factor(i);
		for(j=1;(j<=n)&&(j!=i);j++)
		{
			p2=factor(j);
		if((i==p2)&&(j==p1))
			printf("Amicable Pair: %d & %d\n",i,j);
		}
		if(i==p1)
			printf("Perfact Number: %d\n",i);
	}
}
int factor(int j)
{
	register int i;
	int sum=0;
	for(i=1;i<j;i++)
	{
		if(j%i==0)
			sum=sum+i;
	//	printf("%d\n",sum);
	}
	return sum;
}
