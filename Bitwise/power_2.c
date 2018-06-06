#include<stdio.h>
int main()
{
	int x,counter=0;
	printf("Enter the number:");
	scanf("%d",&x);
	while(x!=0)
	{
		if(x&0x01)
			counter++;
		x=x>>1;
	}
	if(counter==1)
		printf("power of 2\n");
	else
		printf("Not power of 2\n");
}
