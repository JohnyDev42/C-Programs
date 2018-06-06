#include<stdio.h>
void displayBin(int x)
{
	int mask,i;
	for(i=15;i>=0;i--)
	{
		mask=1<<i;
		(x&mask)?printf("1"):printf("0");
		if(i%8==0)
			printf(" ");
	}
}
/*void main()
{
	int x=16;
	displayBin(x);
}*/
