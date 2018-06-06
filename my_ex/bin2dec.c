#include<stdio.h>
int main()
{
int b,d=0,base=1,m,n;
printf("Enter the Binary Digit:");
scanf("%d",&b);
while(b>0)
{
n=b%10;
m=n*base;
d+=m;
base*=2;
b=b/10;
}
printf("Decimal Value of Binary is: %d",d);
}

