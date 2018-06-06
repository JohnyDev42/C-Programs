#include<stdio.h>
#include<string.h>
#include "mystring.h"
int main()
{
	char a[100],b[100];
	printf("Enter string1:");
	fgets(a,100,stdin);
	printf("Enter string2:");
	fgets(b,100,stdin);
	printf("%d\n",mystricmp(a,b));
//	printf("%s\n",a);
//	printf("%s\n",b);
}
