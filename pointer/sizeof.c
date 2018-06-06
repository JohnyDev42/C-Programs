#include<stdio.h>
#include "sizeof2.c"
int size_of(int*);
int main()
{
	int a;
	float b;
	char c;
	printf("int=%lu\n",my_sizeof(a));
	printf("char=%lu\n",my_sizeof(c));
//	printf("float=%d\n",size_of(&b));
//	printf("%d",(char *)(ptr+1)-(char*)ptr);
}

	
