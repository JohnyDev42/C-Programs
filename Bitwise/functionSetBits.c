/*  Write a functionsetbits(x,p,n,y)that returns x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.

e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then you need to strip off 3 bits of y (111) and put them in x at position
10xxx010 to get answer 10111010. Your answer should print out the result in binary form although input can be in decimal form.
Your output should be like this:
x = 10101010 (binary)
	y = 10100111 (binary)
	setbits n = 3, p = 6 gives x = 10111010 (binary).  */


#include<stdio.h>
#include "printBIN.c"
int SetBits(int ,int,int,int);
int main()
{
	int x,y,n,p;
	printf("Enter the Values of x,y,n,p:");
	scanf("%d%d%d%d",&x,&y,&n,&p);
	printf("Before Operation:\nx=");
	printBin(x);
	printf("\nBefore Operation:\ny=");
	printBin(y);
	x=SetBits(x,p,n,y);
	printf("\nAfter Operation\nx=");
	printBin(x);
}
int SetBits(int x,int p,int n,int y)
{
	int i=0;
	while(i<n)
	{
		if(y&(0x01<<i))
			x=x|(0x01<<p-1);
		else
			x=x&(~(0x01<<p-1));
		i++;
		p--;
	}
	return x;
}
