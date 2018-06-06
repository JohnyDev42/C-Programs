#include<stdio.h>
#define my_sizeof(type) ((char*)(&type+1)-(char*)(&type))
int main()
{
	int x=10;
	float y;
	double z;
	printf("sizeof(int)=%d\n",my_sizeof(x));
	printf("sizeof(float)=%d\n",my_sizeof(y));
	printf("sizeof(double)=%d\n",my_sizeof(z));
}
