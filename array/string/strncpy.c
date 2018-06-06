#include<stdio.h>
char mystrncpy(char d[],char s[],int n);
char mystrncpy(char d[],char s[],int n)
{
	int i=0,j,a;
	while(s[i])
	{
		a=i++;
	}
	for(i=0,j=0;i<n;i++,j++)
	{
		d[j]=s[i];
	}

	for(j=0;d[j]!='\0';j++)
	{
		printf("%c",d[j]);
	}
}
		

		

