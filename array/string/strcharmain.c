#include<stdio.h>
#include<string.h>
#include "mystring.h"
int main()
{
	char a[100],b;
	printf("Enter string1:");
	fgets(a,100,stdin);
	printf("Enter the Character to search in String:");
	scanf("%c",&b);
	printf("%d\n",mystrchr(a,b));
}
