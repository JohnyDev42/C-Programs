#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number:");
	scanf("%d",&n);
	printf("%d\t",fibo(n));
}
int fibo(int n)
{
	if((n==1)||(n==2))
		return 1;
	return fibo(n-1)+fibo(n-2);
}
