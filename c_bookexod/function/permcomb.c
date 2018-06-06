#include<stdio.h>
long int perm(int,int);
long int comb(int,int);
long int fact(int);
int main()
{
	int n,r;
	printf("Entre the value of n & r : ");
	scanf("%d%d",&n,&r);
	printf("Permutation p(%d,%d)=%ld\n",n,r,perm(n,r));
	printf("Combination c(%d,%d)=%ld\n",n,r,comb(n,r));
	return 0;
}
long int perm(int n,int r)
{
	long int p;
	p=fact(n)/fact(n-r);
	return p;
}
long int comb(int n,int r)
{
	long int c;
	c=fact(n)/(fact(r)*fact(n-r));
	return c;
}
long int fact(int n)
{
	int i;
	long int fact=1;
	for(i=1;i<=n;i++)
		fact=fact*i;
	return fact;
}
