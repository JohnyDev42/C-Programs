#include<stdio.h>
#include<string.h>
int main()
{
	char *src="Kernelmaster";
	char dst[5];
	strcpy(dst,src);
	printf("%s\n",dst);
}
