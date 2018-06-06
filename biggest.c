#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter the three integer Numbers:");
scanf("%d %d %d",&a,&b,&c);
d=(a>b)?a:b;
(c>d)?printf("Biggest is %d\n",c):printf("Biggest is %d\n",d);

return 0;
}

