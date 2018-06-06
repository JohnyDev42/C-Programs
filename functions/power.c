#include<stdio.h>
long mult(int m,int n)
{
	int i,mul=0;
	for(i=1;i<=n;i++)
		mul+=m;
//	printf("Mul=%d\n",mul);
	return mul;
}
