#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,m6,sum;
float per;
printf("Enter the marks:");
scanf("%d\n%d\n%d\n%d\n%d\n%d",&m1,&m2,&m3,&m4,&m5,&m6);
sum=m1+m2+m3+m4+m5+m6;
per=(float)sum*100/600;
printf("Percentage of total marks is:%.2f\n",per);
return 0;
}
