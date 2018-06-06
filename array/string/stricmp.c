#include<stdio.h>
int mystricmp(char a[],char b[])
{
	int i,v;
	for(i=0;(a[i]!='\0')||(b[i]!='\0');i++)
	{
		if((a[i]>='a')&&(a[i]<='z')&&(b[i]>='A')&&(b[i]<='Z'))
		{
			if(a[i]==(b[i]+32))
				v=0;
		}
		else
			if((a[i]>='A')&&(a[i]<='Z')&&(b[i]>='a')&&(b[i]<='z'))
			{
				if(a[i]==(b[i]-32))
					v=0;
			}
			else
				if((a[i]==b[i]))
					v=0;
					else
					{
						v=a[i]-b[i];
						break;
					}
	}

	if(v==0)
		printf("Both string are same\n");
	else
		if(v>0)
			printf("1st string is greater\n");
		else
			printf("2nd string is greater\n");
	return v;
}
