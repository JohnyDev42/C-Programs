#include<stdio.h>
extern int se,st;
int sell(int se)
{
	static int ts;
//	printf("Max. Items can be sold: %d\n",st);
//	printf("Enter the N0. of Items to sell\n");
//	scanf("%d",&se);
	if(se>st)
	{
		printf("Enter Items less than %d\n",st+1);
		return ts;
	}
	st=st-se;
	ts+=se;
	return ts;
}
