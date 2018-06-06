#include<stdio.h>
int mystrstr(char a[],char b[])
{
	int i=0,j=0,s;
	while(a[i])
	{
		for(s=i,j=0;(a[s]!='\n')&&(b[j]!='\n');)
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
		i++;

	} 
		printf("Not Found\n");
		return -1;
		
}
