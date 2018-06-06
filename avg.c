#include<stdio.h>
int main()
{
int i,a,sum=0,n;
float avg;
printf("Enter the no. of Numbers");
scanf("%d",&n);
printf("Enter the Numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a);
sum=sum+a;
}
avg=(float)sum/(float)n;
printf("Average=%f",avg);
return 0;
}
