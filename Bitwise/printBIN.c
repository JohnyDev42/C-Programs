#include<stdio.h>
#include<limits.h>
int printBin(int);
/*
int main()
{
	unsigned int x;
	printf("Enter Integer(<=32768):");
	scanf("%d",&x);
	printBin(x);
}*/
int printBin(int x)
{
	long int mask=2147483648;
	while(mask)
	{
		if(mask & x)
			printf("1");
		else
			printf("0");
		mask=mask>>1;
	}
}
