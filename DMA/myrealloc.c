
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void  memcopy(void *,void *,size_t);
char * myrealloc(void *ptr,size_t size)
{
	 char *p;
	if(ptr==NULL)
	{
		return malloc(size);
	}
	if(size==0)
	{
		free(ptr);
		return NULL;
	}
	p=malloc(size);
	if(p==NULL)
	{
		printf("Memory cant allocate\n");
		return NULL;
	}
	memcopy(p,ptr,size);
//	printf("%d %d\n",p[0],p[1]);
	free(ptr);
	return p;
	
}
void  memcopy(void * dst,void * src,size_t size)
{
	int i;
	char *cdst,*csrc;
	cdst=(char *)dst;
	csrc=(char *)src;
	for(i=0;i<size;i++)
		cdst[i]=csrc[i];
}


