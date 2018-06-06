#include<stdio.h>
#include<stdlib.h>
#include "mystring.h"
int main()
{
	char s1[100],s2[100];
	printf("Enter the string1:");
	fgets(s1,100,stdin);
	printf("Enter the String2:");
	fgets(s2,100,stdin);
	printf("After Concatenation: \n");
	mystrcat(s1,s2);
	printf("\n");
}
