#include<stdio.h>
#include<stdlib.h>
#include "mystring.h"
int main()
{
	int n;
	char s[100],d[100];
	printf("Enter the Source String:");
	fgets(s,100,stdin);
	printf("Enter the Destination String:");
	fgets(d,100,stdin);
	printf("Enter the no. of letters you want to Copy:");
	scanf("%d",&n);
	printf("After Copy of Source to Destination: \n");
	printf("Destination:");
	mystrncpy(d,s,n);
	printf("\n");
}
