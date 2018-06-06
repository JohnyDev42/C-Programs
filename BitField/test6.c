#include<stdio.h>
struct STU
{
	unsigned int x;
	long int y:33;
	unsigned int z;
}s1;
int main()
{
	unsigned int *p1=&s1.x;
	unsigned int *p2=&s1.z;
	printf("%lu\n",p2-p1);
}
