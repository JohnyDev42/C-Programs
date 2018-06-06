#include<stdio.h>
int fun(char array[])
{
	return sizeof(array)/sizeof(char);
}
main()
{
	char str[10];
	printf("%d\n",sizeof(char));
	printf("The dimension of array is %d ",sizeof(str));
	printf("The dimension of array is %d ",fun(str));
}
