#include<stdio.h>
int main()
{
	int j=0,m,n,c;
	printf("Enter the two Numbers for division:\n");
	scanf("%d%d",&m,&n);
	if(m==0)
	{
		printf("Division not possible\n");
		return 0;
	}
	else
		if(n==0)
		{
		printf("Result=Infinite\n");
		return 0;
		}
	else
		if(m==n)
		{
		printf("Result=%d\n",1);
		return 0;
		}
	else
		if(m<0&&n<0)
	{
		c=1;
		m=-m;
		n=-n;
	}
	else
		if(m<0&&n>0)
	{
		c=0;
		m=-m;
	}
	else
		if(m>0&&n<0)
	{
		c=0;
		n=-n;
	}
	else
		if(m>0&&n>0)
	{
		c=1;
	}
	while(n<=m)
	{
		j++;
		m=m-n;
	}
	if(c==0)
	printf("Result=%d\n",-j);
	else
		printf("Result=%d\n",j);
	
}
