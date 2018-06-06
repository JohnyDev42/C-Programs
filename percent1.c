#include<stdio.h>
int main()
{
int m,n,i,sum=0;
float per;
printf("Enter the no. of Subjects:");
scanf("%d",&n);
printf("Enter the marks\n");
for(i=1;i<=n;i++)
{
scanf("%d",&m);
sum+=m;
}
printf("Total:%d\n",sum);
per=(float)sum/n;
printf("Percentage of total marks is:%.2f\n",per);
return 0;
}

