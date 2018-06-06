#include<stdio.h>
struct STU
{
	unsigned int x:1;
	unsigned int y:1;
	unsigned int z:1;
}s1;
int main()
{
	printf("%lu\n",sizeof(s1));
}
