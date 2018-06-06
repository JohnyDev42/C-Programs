#include<stdio.h>
#include<stdlib.h>
#include "mystring.h"
int main()
{
	int n;
	char s1[100],s2[100];
	printf("Enter the string1:");
	fgets(s1,100,stdin);
	printf("Enter the String2:");
	fgets(s2,100,stdin);
//	printf("After Concatenation: \n");
	printf("Enter the no. of letters to be Concatenated: ");
	scanf("%d",&n);
	printf("After concatenation:\n");
	mystrncat(s1,s2,n);
	printf("\n");
}
