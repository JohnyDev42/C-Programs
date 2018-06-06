#include<stdio.h>
int main()
{
int n,m,sum=0;
printf("Enter the Number:");
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum+=m;
n=n/10;
}
printf("Sum: %d\n",sum);
return 0;
}
