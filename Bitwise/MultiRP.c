/* #Russian Peasant (Multiply two numbers using bitwise operators) 

Given two integers, write a function to multiply them without using multiplication operator.

There are many other ways to multiply two numbers (For example, see this). One interesting method is the Russian peasant algorithm. The idea is to double the first number and halve the second number repeatedly till the second number doesn’t become 1. In the process, whenever the second number become odd, we add the first number to result (result is initialized as 0)  */

#include<stdio.h>
int main()
{
	int a,b,res=0;
	printf("Enter two Numbers:");
	scanf("%d%d",&a,&b);
	while(b>0)
	{
		if(b&1)
			res=res+a;
		a=a<<1;
		b=b>>1;
	}
	printf("Result=%d\n",res);
}
