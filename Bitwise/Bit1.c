#include<stdio.h>
int main()
{
	int a=0xaabbccdd;
	printf("%x\n",(a&0xfff00000)>>20);
	printf("%x\n",a&0xfffff);

}
