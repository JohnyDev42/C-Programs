#include<stdio.h>
int main()
{
	int x;
	printf("Value of x is %d\n Address is %p\n Size of x %lu\n",x,&x,sizeof(x));
	int *ptr=&x;
	printf("Indirect value of x is %d\n Address is %p\n Size of ptr %lu\n",*ptr,ptr,sizeof(*ptr));
	printf("%lu\n",sizeof(ptr));
}
