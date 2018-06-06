#include<stdio.h>
int main()
{
int call;
printf("Enter the no. of calls:");
scanf("%d",&call);
(call<=100)?printf("price:%d\n",250):printf("price:%.2f\n",(250+(float)(call-100)*1.25));
}
