#include<stdio.h>
#include "displayBin.c"
int funSearch(int,int);
int main()
{
	int a,pat;
	printf("Enter the Number & Pattern:");
	scanf("%d%d",&a,&pat);
	displayBin(a);
	printf("\nPattern Found:%d\n",funSearch(a,pat));
}
int funSearch(int a,int pat)
{
	int count=0,i=2;
	while(i)
	{
		if((pat&a)==pat)
		count++;
		pat=pat<<1;
		if(i==1)
			break;
		if(pat>=0x80000000)
			i--;
		
	}
	return count;
}
