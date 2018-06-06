#include<stdio.h>
int PrintPrime(int,int);
int IsPrime(int);
int main()
{
	int m,n;
	printf("Enter the 1st & last Number: ");
	scanf("%d%d",&m,&n);
	printf("Prime Numbers between %d & %d are:\n ",m,n);
	PrintPrime(m,n);
	return 0;
}
int PrintPrime(int m,int n)
{
	int k,i;

	for(i=1;i<=n;i++)
	{
		k=IsPrime(i);
	if(k==1)
	printf("%d ",i);
	}
	printf("\n");
	return 0;
}
int IsPrime(int m)
{
	int p,i;
	for(i=2;i<m;i++)
		if(m%i==0)
		{
			p=0;
			break;
		}
		else
			p=1;
	return p;
}
