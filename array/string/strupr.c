#include<stdio.h>
char mystrupr(char name[])
{
	int i;
	for(i=0;;i++)
	{
		if(name[i]=='\0')
			break;
		if((name[i]>='a')&&(name[i]<='z'))
			name[i]=name[i]-32;
	}
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
}

