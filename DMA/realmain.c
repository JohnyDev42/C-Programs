#include<stdio.h>
#include<stdlib.h>
#include "myrealloc.c"
int main()
{
	int *ptr=malloc(5*sizeof(int));

	int *p2=0,i;
	printf("ptr=%p\tp2=%p\n",ptr,p2);

	for(i=0;i<5;i++)
		scanf("%d",ptr+i);
	p2=(int *)myrealloc(ptr,10*sizeof(int));
	printf("address of p2=%p\tp2\n",p2);
	for(i=0;i<10;i++)
		printf("%d ",*(p2+i));
	printf("address of ptr=%p\tptr:\n",ptr);
	for(i=0;i<5;i++)
		printf("%d ",*(ptr+i));
}
