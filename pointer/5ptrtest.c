#include<stdio.h>
int main()
{
	int *p1=0,*p2=0,*p3=0;
	int x;
	p1=&x;
	p2=&x;
	p3=&x;
	printf("x value using \n*p1=%d\n*p2=%d\n*p3=%d\n",*p1,*p2,*p3);
	x=10;
	printf("After changing x=10 Values of:\n *p1=%d\n*p2=%d\n*p3=%d\n",*p1,*p2,*p3);
	*p1=20;
	printf("After changing *p1: x is %d\n",x);
	*p2=30;
	printf("After changing *p2: x is %d\n",x);
	*p3=40;
	printf("After changing *p3: x is %d\n",x);
}
