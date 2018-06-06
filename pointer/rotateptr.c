#include<stdio.h>
int main()
{
	int x=10,y=20,z=30,*p1=&x,*p2=&y,*p3=&z,*t;
	
	printf("Before swapping \nx=%d\ny=%d\nz=%d\n",*p1,*p2,*p3);
	*t=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=*t;
	printf("After swapping\nx=%d\ny=%d\nz=%d\n",*p1,*p2,*p3);
}
