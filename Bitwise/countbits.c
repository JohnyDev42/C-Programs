/* Counts Bit '1' in a data value */
#include<stdio.h>
int main()
{
	int x,p,count=0;
	printf("Enter a Integer:");
	scanf("%d",&x);
	p=x;
	while(p)
	{
		if(p&0x01)
			count++;
		p=p>>1;
	}
	printf("No. of Bits:%d\n",count);
}
