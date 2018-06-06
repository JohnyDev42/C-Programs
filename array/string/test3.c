#include<stdio.h>
int main()
{
	int x=10;
	const int y=5;
	const int *p1=&x,**p2=&p1,***p3=&p2;
//	printf("x=%p\t%u",&x,&x);

//	printf("y=%p\t%u\n",&y,&y);
	printf("%d\n",***p3);
}
	
