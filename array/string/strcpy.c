#include<stdio.h>
char mystrcpy(char d[],char s[]);
char mystrcpy(char d[],char s[])
{
	int i,j;
	for(i=0,j=0;s[i]!='\0';i++,j++)
	{
		d[j]=s[i];
	}
	d[j]='\0';
}
		

		

