#include<stdio.h>
char mystrcat(char s1[],char s2[]);
char mystrcat(char s1[],char s2[])
{
	int i=0,j;
	while(s1[i])
	{
		i++;
	}
//	printf("i=%d\n",i);

/*	for(j=0;s2[j]!='\0';j++)
	{
		if(s2[j]=='\n')
		{
			j=j+1;
		}
		printf("%c",s2[j]);
	}
*/
	i=i-1;
	for(j=0;s2[j]!='\0';j++)
	{
		if(s2[j]=='\n')
		{
			j++;
		}
		s1[i]=s2[j];
		i++;
	}
	

	
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c",s1[i]);
	}
}
