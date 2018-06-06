#include<stdio.h>
#include<string.h>
void cpy_str(char *,char *);
int main()
{
	int i;
	char *ptr[3];
	printf("size=%d\n",sizeof(ptr));

	fgets(ptr[0],10,stdin);
	fgets(ptr[1],10,stdin);
	printf("%s\n",ptr[1]);
//	cpy_str(ptr[1],ptr[0]);
	printf("%s\n",ptr[1]);
}
void cpy_str(char *dest,char *src)
{
	while(*src)
	{
		*dest=*src;
		src++;
		dest++;
	}
	*dest='\0';
}
