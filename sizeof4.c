#include<stdio.h>
#include<string.h>
int main()
{
	char *p="hello";
	char c[]="hello";
	printf("p=%lu\tc=%lu\tlength of c=%d\n",sizeof(p),sizeof(c),strlen(c));
	printf("*p=%lu\t*c=%lu\n",sizeof(*p),sizeof(*c));
	return 0;
}
