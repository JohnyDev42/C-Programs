#include<stdio.h>
int mystrchr(char a[],char b)
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
			return i;
	}
	return -1;
	
}
