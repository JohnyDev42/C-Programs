#include<stdio.h>
int main()
{
	float x=1.1;
	int p,c=0;
	p=0x01;
	while(p)
	{
		p=p<<1;
		c++;
	}
	c=c/8;
	printf("Sizeof float:%d\n",c);
}
