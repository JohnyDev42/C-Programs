#include<stdio.h>
int mystrnicmp(char a[],char b[],int n)
{
	int i,v;
	for(i=0;i<n;i++)
	{
		if((a[i]>='a')&&(a[i]<='z')&&(b[i]>='A')&&(b[i]<='Z'))
		{
			if(a[i]=b[i]+32)
				v=0;
		}
		else
			if((a[i]>='A')&&(a[i]<='Z')&&(b[i]>='a')&&(b[i]<='z'))
			{
				if(b[i]=a[i]+32)
					v=0;
			}
			else
				if(a[i]==b[i])
		 			v=0;
				else
				{
					v=a[i]-b[i];
					break;
				}
	}
	if(v==0)
		printf("After comparing %d letters Both are same\n",n);
	else
		if(v>0)
			printf("After comparing %d letters 1st string is Greater\n",n);
		else
			printf("After comparing %d letters 2nd string is Greater\n",n);
	return v;
}
