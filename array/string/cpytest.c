#include<stdio.h>
#include"strcpy.c"
int main()
{
	char *src="Kernelmaster";
	char dst[5];
	mystrcpy(dst,src);
	printf("%s\n",dst);
}
