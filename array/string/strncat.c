#include<stdio.h>
char mystrncat(char s1[],char s2[],int n);
char mystrncat(char s1[],char s2[],int n)
{
	int i=0,j;
	while(s1[i])
	{
		i++;
	}
//	printf("i=%d\n",i);

//	i=i-1;
	for(j=0;j<n;j++)
	{
		s1[i]=s2[j];
		i++;
	}
	

	
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c",s1[i]);
	}
}
