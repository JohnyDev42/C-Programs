#include<stdio.h>
void atoi(char *str)
{
	int i,val=0,num,n;
	for(i=0;str[i]&&str[i]!='\n';i++)
	{
		if((str[i]>='0')&&(str[i]<='9'))
			n=1;
		else
		{	
			n=0;
			break;
		}
	}
	if(n==1)
	{
		for(i=0;str[i]&&(str[i]!='\n');i++)
		{	
			num=str[i]-'0';
			val=val*10+num;
		//	printf("%d\n",num);
		}

	}
	if(n==0)
	{
		printf("Enter Numeric String Only!\n");
		return;
	}

	printf("Integer Value:%d\n",val);
}
