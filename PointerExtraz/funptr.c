#include<stdio.h>
char* strrev(char *str)
{
	int i,j,k;
	for(i=0;str[i]!=0;i++);
	for(j=0,k=i-1;j<k;j++,k--)
	{
		char c;
		c=str[j];
		str[j]=str[k];
		str[k]=c;
	}
	return str;
}
int main()
{
	char *(*retstrrev())(char *);
	char *(*ptr)(char *);
	char str[20]="Hello World";
	ptr=retstrrev();
	printf("%s\n",ptr(str));
}
char *(*retstrrev())(char *str)
{
	return strrev;
}
