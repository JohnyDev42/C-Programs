#include<stdio.h>
int main()
{
int yr;
printf("Enter a Year:");
scanf("%d",&yr);
((yr%4==0)&&(yr%100!=0))?printf("Its a leap year\n"):(yr%400==0)?printf("Its a Leap year\n"):printf("Its not leap year\n");
return 0;
}

