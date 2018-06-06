#include<stdio.h>
int main()
{
	int n,total=21,c;
	printf("\t\tGAME STARTS\t\t\n");
	printf("INSTRUCTION:\nPick 1 to 4 Matches from 21 matches & Last the CHOOSER will the LOOSER\n");
	printf("User Goes first:\n");
GAME:
	if(total==1)
	{
		printf("*****Computer Won*****\n");
		printf("^^^^^USER LOOSER^^^^^\n");
		return 0;
	}
	printf("Pick matches:");
	scanf("%d",&n);
	if(n>4||n<0)
	{
		printf("Pick Matches between 1 to 4\n");
		goto GAME;
	}
	total=total-n;
	if(total>15)
		c=total-16;
	else
		if(total>10)
			c=total-11;
		else
			if(total>5)
				c=total-6;
			else
				if(total>1)
					c=total-1;
	total=total-c;
	printf("Computer picked:%d\n",c);
	printf("Remain:%d\n",total);
	goto GAME;

}
