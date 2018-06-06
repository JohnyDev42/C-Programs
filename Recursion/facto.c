#include<stdio.h>
int main()
{
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	printf("Factorial of %d is %d\n",n,fact(n));
}
int fact(int n)
{
	if(n==1)
		return 1;
	return fact(n-1)*n;
}

