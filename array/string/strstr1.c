#include<stdio.h>
int mystrstr(char a[],char b[])
{
	int i,j,s;
	for(i=0;a[i++];)
	{
		for(s=i,j=0;(a[s]!='\n')&&(b[j]!='\n')&&a[s]&&b[j];)
		{
			if(a[s]==b[j])
			{
				s++;
				j++;
			}
			else
				break;
		}
		if((b[j]=='\0')||(b[j]=='\n'))
		{
			printf("Found at index %d\n",s-j);
			return s-j;
		}

	} 
		printf("Not Found\n");
		return -1;
		
}
