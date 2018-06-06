#include<stdio.h>
#include "atoi.c"
int main()
{
	char str[100];
	printf("Enter the numeric string:");
	fgets(str,100,stdin);
	atoi(str);
//	printf("Integer Value:%d\n",atoi(str));

}
