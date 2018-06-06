#include<stdio.h>
#include<stdlib.h>
#include "mystring.h"
int main()
{
	char name[100];
	printf("Enter the string:");
	fgets(name,100,stdin);
	mystrlwr(name);
	printf("\n");
}
