#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter a string:\n");
	scanf("%s",str);
	printf("%d\n",strLen(str));
}
int strLen(char *str)
{
	static int i=0;
	if(str[i]=='\0')
		return 0;
	i=i+1;
	strLen(str);
	return i;
}
