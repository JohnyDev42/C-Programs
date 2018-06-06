#include<stdio.h>
int main()
{
int yr;
printf("Enter the year:");
scanf("%d",&yr);
(yr%100)?((yr%4)?printf("Not Leapyear\n"):printf("Leap Year\n")):((yr%400)?printf("Not Leapyear\n"):printf("Leap year\n"));
}
