#include<stdio.h>
struct STU
{
	unsigned int x:1;
	unsigned int :0;
	unsigned int z:3;
}s1;
int main()
{
	printf("%lu\n",sizeof(s1));	
	s1.z=13;
	printf("%d\n",s1.z);
}
