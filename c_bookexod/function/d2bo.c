#include<stdio.h>
int func(int,int);
int main()
{
	int n,base;
	char b;
	printf("Enter Choice:\nBin to Dec:'b'\nOct to Dec:'o'\n");
	scanf("%c",&b);
	printf("Enter the Number: ");
	scanf("%d",&n);
	base=(b=='b')?2:8;
	printf("Decimal=%d",func(n,base));
	printf("\n");
	return 0;
}
int func(int a,int b)
{
	int rem,d,dec,i=1;
	while(a>0)
	{
		rem=a%10;
		d=rem*i;
		dec+=d;
		i=i*b;
		a=a/10;
	}
	return dec;
}

	

