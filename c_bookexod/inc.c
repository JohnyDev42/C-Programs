#include<stdio.h>
int main()
{
int b,a=10;
b=a++ + a-- * ++a;
printf("%d %d %d %d",b,a,a++,--a);
/*printf("%d\n",b);
printf("%d\n",a);
printf("%d\n",a++);
printf("%d\n",--a);*/
}

