#include<stdio.h>
int main()
{
int i,n,a,sum=0;
printf("Enter the no of integers you want to Add:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=1;i<=n;i++)
{
scanf("%d",&a);
sum+=a;
}
printf("Sum of Numbers is:%d\n",sum);
return 0;
}


