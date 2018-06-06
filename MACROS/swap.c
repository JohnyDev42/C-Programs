#include<stdio.h>
#define MAC(swap,dt,rt) rt swap(dt a,dt b){\
			rt t;t=*a,*a=*b,*b=t;}
MAC(iswap,int*,int)
MAC(fswap,float*,float)

int main()
{
	int a=10,b=20;
	float c=5.5,d=7.5;
	printf("Before swap:a=%d b=%d\n",a,b);
	iswap(&a,&b);
	printf("After swap:a=%d b=%d\n",a,b);
	printf("After swap:c=%f d=%f\n",c,d);
	fswap(&c,&d);
	printf("After swap:c=%f d=%f\n",c,d);
}
