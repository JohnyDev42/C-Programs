#include<stdio.h>
#include<stdlib.h>
int main()

{
	int *ptr=malloc(4);
	printf("%p\n",ptr);
	free(ptr);
	int *p=realloc(ptr,8);
	printf("%p\n",ptr);
	printf("%p\n",p);
}
