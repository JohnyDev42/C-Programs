#include<stdio.h>
int main()
{
	int a=1;
	void *ptr=&a;
	if((char *)ptr)
		printf("Little Endinal\n");
	else
		printf("Big Endian\n");

}
