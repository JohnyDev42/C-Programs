#include<stdio.h>
int main()
{
	if(7&8)
		printf("a");
	if((~7&0x00f)==8)
		printf("b");

}
