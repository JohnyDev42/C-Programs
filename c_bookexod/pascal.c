#include<stdio.h>
long int comb(int,int);
long int fact(int);
int main()
{
	int i,j,n;
	printf("Enter the no. of Rows: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
			printf("%5ld",comb(i,j));
		printf("\n");
	}
	return 0;
}
long int comb(int i,int j)
{
	int c;
	c=fact(i)/(fact(j)*fact(i-j));
	return c;
}
long int fact(int f)
{
	int i;
	long int fact=1;
	if(f==0)
		fact=1;
	for(i=1;i<=f;i++)
		fact=fact*i;
	return fact;
}

