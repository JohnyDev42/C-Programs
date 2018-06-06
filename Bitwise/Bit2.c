/* Replace bits from start to end from y to x */


#include<stdio.h>
#include "displayBin.c"
int replaceFun(int a,int start,int end,int b)
{
	start=start-1;
	end=end-1;
	int x=0x01<<start,y,z;
	while(start<=end)
	{
		y=0x01<<start++;
		x=x|y;
	}
	z=b&x;
	a=z|(a&~x);
	return a;
}


int main()
{
	int a,b,start,end;
	printf("Enter the values of a & b:");
	scanf("%d%d",&a,&b);

	printf("Before replace a:");
	displayBin(a);
	printf("\nBefore replace b:");
	displayBin(b);
	printf("\nEnter the start & end point to replace:");
	scanf("%d%d",&start,&end);
	a=replaceFun(a,start,end,b);
	printf("\nAfter replace a:");
	displayBin(a);
	printf("\n");
}

