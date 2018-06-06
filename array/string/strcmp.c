#include<stdio.h>
int mystrcmp(char a[],char b[])
{
	int i,v;
	for(i=0;(a[i]!='\0')||(b[i]!='\0');i++)
	{
		if(a[i]==b[i])
			v=0;
		else
		{
			v=a[i]-b[i];
			break;
		}
	}
	if(v==0)
		printf("Both strings are same\n");
	else
		if(v>0)
			printf("1st String is greater\n");
		else
			printf("2nd String is greater\n");
	return v;
}
