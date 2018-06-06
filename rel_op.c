#include<stdio.h>
int main()
{
int a,b;
printf("Enter the value of two integer:");
scanf("%d %d",&a,&b);
printf("The relation between two integers are:");
printf("%d<%d: %d\n",a,b,a<b);
printf("%d>%d: %d\n",a,b,a>b);
printf("%d<=%d: %d\n",a,b,a<=b);
printf("%d>=%d: %d\n",a,b,a>=b);
printf("%d==%d: %d\n",a,b,a==b);
printf("%d!=%d: %d\n",a,b,a!=b);
return 0;
}



