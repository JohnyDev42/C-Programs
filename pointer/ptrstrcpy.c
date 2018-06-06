#include<stdio.h>
#include<string.h>
int main()
{
	char name[10];
	char *name1="kernel";
	char *(*ptr)(char *,char *);
	ptr=strcpy;
	printf("%s",ptr(name,name1));
}
