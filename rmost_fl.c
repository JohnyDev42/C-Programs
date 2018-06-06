#include<stdio.h>
int main()
{
float a;
printf("Enter a float Number:");
scanf("%f",&a);
int rmost=(int)a%10;
printf("Right most Digit of Float is: %d\n",rmost);
}
