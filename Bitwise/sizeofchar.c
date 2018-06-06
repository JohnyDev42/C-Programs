#include<stdio.h>
int main()
{
	char ch=0,p,c=0;
	p=ch|0x01;
	while(p)
	{
		p=p<<1;
		c++;
	}
	c=c/8;
	printf("Size of char:%d\n",c);
}
