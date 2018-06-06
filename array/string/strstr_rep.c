#include<stdio.h>
int mystrstr_rep(char a[],char b[],char c[])
{
	int i=0,j=0,s,k;
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
			for(i=s-j,k=0;(c[k]!='\0')&&(c[k]!='\n');i++,k++)
			{
				a[i]=c[k];
			}
			printf("After Replace:%s\n",a);
			return s-j;
		}
		i++;

	} 
		printf("Not Found\n");
		return -1;
		
}
