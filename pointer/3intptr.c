#include<stdio.h>
int main()
{
	int x,y,z;
	int *ptr=&x;
	printf("Value of x is %d\n",*ptr);
	ptr=&y;
	printf("Value of y is %d\n",*ptr);
	ptr=&z;

	printf("Value of z is %d\n",*ptr);
}
