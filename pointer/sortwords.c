#include<stdio.h>
#include<string.h>
#include "mystring.h"
int main()
{
	char name[10][100],temp[10];
	int i,j,k,n;
	printf("Enter the number of names:");
	scanf("%d",&n);
	printf("Enter the names:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(mystrcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("Sorted names:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",name[i]);
	}
}
