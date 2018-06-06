#include<stddef.h>
void * memcpy(void *dst,const void *src,size_t len)
{
	char *d=dst;
	const char *s=src;
	while(len--)
		*d++=*s++;
	return dst;
}
