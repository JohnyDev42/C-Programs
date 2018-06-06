#include<stdio.h>
int main()
{
	int x=4;
	x=((x<<2)+(x<<1)+(x))>>1;
	printf("%d\n",x);
}
