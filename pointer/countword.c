#include<stdio.h>
#include<string.h>
int wcount(char *str);
int main()
{
	char str[500];
	printf("Enter the string:");
	fgets(str,500,stdin);
	printf("No. of words in string:%d\n",wcount(str));
}
int wcount(char *str)
{

	int i,c=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]==' ')&&(str[i+1]!=' ')&&(str[i+1]!='\0')&&(str[i+1]!='\n'))
			c++;
	}
	return c;
}
