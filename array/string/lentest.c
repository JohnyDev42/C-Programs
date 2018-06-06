#include<stdio.h>
#include<stdlib.h>
#include"mystring.h"
int main()
{
	char name[100];
	printf("Enter the name: ");
	fgets(name,100,stdin);
	printf("Size=%lu\n",sizeof(name));
	printf("Length of string is: %d\n",mystrlen(name));
}
