#include<stdio.h>
int main()
{
	int x=1,c=0,p;
	p=x|0x01;
	while(p)
	{
		p=p<<1;
		c++;
	}
	c=c/8;
	printf("%d\n",c);
}
//int mysize()
