#include<stdio.h>
int main()
{
int r;
float area,per;
printf("Enter the radius of circle:");
scanf("%d",&r);
area= 3.14*r*r;
per= 2*3.14*r;
printf("Area of Circle =%.2f\nPerimeter of Circle is= %.2f\n",area,per);
}

