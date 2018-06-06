#include<stdio.h>
#include<string.h>
void revwstr(char *str)
{
	int l,i;
	l=strlen(str);
	for(i=l-1;i>=0;i--)
	{
		if((str[i]==' ')||(str[i]=='\n'))
		{
			str[i]='\0';
			printf("%s ",&str[i]+1);
		}
	
	}
	printf("%s\n",str);
}
int main()
{
	char str[100];
	printf("Enter the string:");
//	fgets(str,100,stdin);
	scanf("%[^\n]s",str);
	revwstr(str);
}
