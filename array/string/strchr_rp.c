#include<stdio.h>
int mystrchr_rp(char a[],char b,char c)
{
	int i;
	for(i=0;(a[i]!='\0')&&(a[i]!='\n');i++)
	{
		if(a[i]==b)
		{
			printf("Found at Index %d\n",i);
			a[i]=c;
			printf("After Replacing:%s\n",a);
			return i;
		}

	}
	return -1;
	
}
