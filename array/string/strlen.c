#include<stdio.h>
int mystrlen(char name[]);
int mystrlen(char name[])
{
	int i;
	for(i=0;name[i]!='\0';i++)
	{
		printf("i=%d\n",i);
//		if(name[i]=='\0')
//			break;
	}
	return (i-1);
}

