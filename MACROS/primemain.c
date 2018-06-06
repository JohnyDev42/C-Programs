#include<stdio.h>
//#include<math.h>
#include "prime.c"
int main()
{
	int n,a;
	printf("All Prime numbers upto:");
	scanf("%d",&n);
	printf("Prime numbers are:\n");
	PRIME(n);
	printf("\nEnter a number to check prime:\n");
	scanf("%d",&a);
	ISPRIME(a);
}
