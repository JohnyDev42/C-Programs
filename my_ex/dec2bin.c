#include<stdio.h>
int main()
{
int d,b,base=1,m,n,nz=0;
printf("Enter the Decimal Number:");
scanf("%d",&d);
while(d>0)
{
n=d%2;
if(n==1){
nz++;}
m=n*base;
b+=m;
base*=10;
d=d/2;
}
printf("Binary digit of decimal is: %d\n",b);
printf("No. of Zeros in Binary is: %d\n",nz);
}
