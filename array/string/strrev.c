#include<stdio.h>
char mystrrev(char name[])
{
	int i,j=0,a,temp;
	while(name[j])
	{
		a=j++;
	}
	for(i=0,j=a-1;i<j;i++,j--)
	{
		temp=name[i];
		name[i]=name[j];
		name[j]=temp;
	}
	printf("%s",name);
}
