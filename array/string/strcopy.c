#include<stdio.h>
#include<stdlib.h>
#include "mystring.h"
int main()
{
	char s[100],d[100];
	printf("Enter the Source String:");
	fgets(s,100,stdin);
	printf("Enter the Destination String:");
	fgets(d,100,stdin);
	printf("After Copy of Source to Destination: \n");
	printf("Destination:");
	mystrcpy(d,s);
	printf("\n");
}
