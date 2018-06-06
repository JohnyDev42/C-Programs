#include<stdio.h>
int BinDec(int);
int main()
{
	int a;
	printf("Enter the Binary Number: ");
	scanf("%d",&a);
	printf("Decimal Value is:%d\n",BinDec(a));
}
int BinDec(int a)
{
	int c=0,i=1,b;
	if(a==0)
		c=0;
	while(a>0)
	{
		b=a%10;
		c=c+b*i;
		i=i*2;
		a=a/10;
	}
	return c;
}
