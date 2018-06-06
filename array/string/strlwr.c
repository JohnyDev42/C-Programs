#include<stdio.h>
char mystrlwr(char name[])
{
	int i;
	for(i=0;;i++)
	{
		if(name[i]=='\0')
			break;
		if((name[i]>='A')&&(name[i]<='Z'))
			name[i]=name[i]+32;
	}
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
}

