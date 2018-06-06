#include<stdio.h>
int main()
{
	int j=0,m,n;
	printf("Enter the two Numbers for division:\n");
	scanf("%d%d",&m,&n);
	if(n==0)
		printf("Result=Infinite\n");
	else
	{
	while(n<=m)
	{
		j++;
		m=m-n;
	}
	printf("Result=%d\n",j);
	}
}
