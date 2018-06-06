#include<stdio.h>
int main()
{
	int p=10,q=10,r=10;
	p<<2>>1;
	r<<=2>>1;
	printf("%d %d %d\n",p,q<<2>>1,r);
}
