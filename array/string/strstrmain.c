#include<stdio.h>
#include<string.h>
#include "str_str.c"
//#include "mystring.h"

int main()
{
	char a[100],b[100];
	printf("Enter string1:");
//	fgets(a,100,stdin);
	scanf("%[^\n]s",a);

	printf("Enter string2:");
	scanf("\n%[^\n]s",b);
	//fgets(b,100,stdin);
	printf("Found at %d\n",mystrstr(a,b));
//	printf("%d\n",mystrstr(a,b));
}
