#include<stdio.h>
struct BIT
{
	int x:2;
	int y:3;
	long int z;
};
int main()
{
	struct BIT x;
//	printf("%d %d %d \n",sizeof(x.x),sizeof(x.y),sizeof(x.z)); //sizeof can't apply to a bit-field
	printf("size of(x)=%lu\n",sizeof(x));
	printf("size unsigned int=%lu\nlong int=%lu\n",sizeof(unsigned int),sizeof(long int));
}
