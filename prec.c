#include<stdio.h>
int main()
{
int x,y,z;
x=y=z=10;
(x+(y=z)&& y>0)?printf("True\n"):printf("False\n");
}
