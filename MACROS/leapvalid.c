#include<stdio.h>
#include "validate.c"
int main()
{
	int d,m,y,leap=0,i=1;
	printf("Enter a date:\n");
	scanf("%d%*[-/]%d%*[-/]%d",&d,&m,&y);
	IsValid(d,m,y);
	if(i==0)
	printf("Not valid\n");
	else
		printf("Valid\n");
	if(leap==1)
		printf("LeapYear\n");
	else
		printf("NotLeap\n");

}
