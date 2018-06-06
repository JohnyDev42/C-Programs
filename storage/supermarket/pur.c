#include<stdio.h>
extern int pr,st;
int pur(int pr)
{
	static int tp;
//	printf("You can Purchase max.:%d\n",stl-st);
//	printf("Enter the No. of Items to purchase\n");
//	scanf("%d",&pr);
	if(pr>100-st)
	{
		printf("Enter items less than %d\n",(st));
		return tp;
	}
	st=st+pr;
	tp+=pr;
	return tp;
}
