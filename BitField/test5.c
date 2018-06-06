#include<stdio.h>
struct STU
{
	unsigned int x;
	unsigned int y:33;
	unsigned int z;
}s1;
int main()
{
	printf("%lu\n ",sizeof(s1));

}
