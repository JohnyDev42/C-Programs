/*Count no. of bits to be flipped to convert A to B */

#include<stdio.h>
#include "displayBin.c"
int main()
{
	int a,b,i,count=0,mask=0x8000;
	printf("Enter two Numbers:\n");
	scanf("%d%d",&a,&b);
	displayBin(a);
	printf("\n");
	displayBin(b);
	for(i=0;i<32;i++)
	{
		if((a&mask)!=(b&mask))
			count++;
		mask=mask>>1;
	}
	printf("No. of Bits to be changed:%d\n",count);

}
