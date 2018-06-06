#include<stdio.h>
#include "displayBin.c"
int main()

{
	int a,start,end;
	printf("Enter the Number,start & end point to toggle:\n");
	scanf("%d%d%d",&a,&start,&end);
	printf("Before toggle:a=");
	displayBin(a);
	a=toggleBit(a,start,end);
	printf("\nAfter toggle:a=\n");
	displayBin(a);
}
int toggleBit(int a,int start,int end)
{
	for(int i=start;i<=end;i++)
		a=a^(0x01<<i);
	return a;
}
