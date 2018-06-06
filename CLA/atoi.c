#include<stdio.h>
 int atoi(char *str)
{
	int i=0,n;
	 int num=0;
	if(str[i]=='-')
		i++;
	while((str[i]!=' ')&&(str[i]))
	{
		if((str[i]>='0')&&(str[i]<='9'))
		{
			n=str[i]-'0';
			num=num*10+n;
		}
		else
		{
			printf("Enter valid Number\n");
			return 0;
		}
		i++;
	}
		if(str[0]=='-')
		return -num;
	return num;
}
