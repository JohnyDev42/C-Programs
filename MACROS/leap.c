#include<stdio.h>
#define LEAP(yr) ((yr%4==0)&&(yr%100!=0))?printf("Its a leap year\n"):(yr%400==0)?printf("Its a Leap year\n"):printf("Its not leap year\n");
int main()
{
	int d,m,y;
	printf("Enter the date:\n");
	scanf("%d%*[-/]%d%*[-/]%d",&d,&m,&y);
	LEAP(y);
}
