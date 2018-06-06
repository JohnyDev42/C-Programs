#include<stdio.h>
#include<string.h>
#include "mystring.h"
int main()
{
	char a[100],b,c;
	printf("Enter string1:");
	fgets(a,100,stdin);
	printf("Enter the Character to search in String:");
	scanf("%c",&b);
	printf("Enter the Character to replace:");
	scanf("\n%c",&c);
	mystrchr_rp(a,b,c);
}
