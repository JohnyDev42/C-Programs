#include<stdio.h>
#include<string.h>
#include "mystring.h"
int main()
{
	char a[100],b[100],c[100];
	printf("Enter string1:");
	fgets(a,100,stdin);
	printf("Enter string2:");
	fgets(b,100,stdin);
	printf("Enter string for replace:");
	fgets(c,100,stdin);
	mystrstr_rep(a,b,c);
//	printf("%d\n",mystrstr(a,b));
}
