#include<stdio.h>
int main()
{
float p,r,t,si;
printf("Enter the principal: ");
scanf("%f",&p);
printf("Enter the rate:");
scanf("%f",&r);
printf("Enter the no. of year:");
scanf("%f",&t);
si=(p*t*r)/100;
printf("Simple Interest= %.2f\n",si);
}

