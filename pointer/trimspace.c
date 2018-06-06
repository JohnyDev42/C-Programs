#include<stdio.h>
#include<string.h>
void trim(char *,int);
int main()
{
	char str[100];
	char *ptr=str;
	int i,j,l;
	printf("Enter the string:\n");
	fgets(str,100,stdin);
	trim(str,strlen(str));
}
void trim(char *str,int l)
{
	char *ptr=str;
	int i,j;
	l=strlen(str);
	printf("strlen=%d\n",l);
	for(j=l-1;j>0;j--)
	{
		if((str[j]==' ')||(str[j]=='\n'))
			str[j]='\0';
		else
			break;
	}
	l=strlen(str);
//	printf("%d\n",l);
	for(i=0;i<l-1;i++)
	{
		if(str[i]==' ')
			ptr++;
		else
			break;
	}
	for(i=0;*ptr!='\0';i++)
	{
		str[i]=*ptr;
		ptr++;
	}
	str[i]='\0';
	printf("%s\n",str);
	printf("strlen=%lu\n",strlen(str));
}
