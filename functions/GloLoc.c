#include<stdio.h>
int x;
int main()
{
	int x=10;
	printf("x=%d\n",x);
	 x=20;
	 f1();
}
int f1()
{
	printf("x=%d\n",x);
	x=30;
	f2();
	printf("x=%d\n",x);
	x=40;
}
int f2()
{
	printf("x=%d\n",x);
	x=50;
	printf("x=%d\n",x);
	x=60;
}

