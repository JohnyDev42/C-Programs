/* Print integer and float values as Strings */

#include<stdio.h>
int main()
{
	int a=5;float b=15.5;
	char str[20];
	sprintf(str,"a=%d b=%f",a,b);
	puts(str);
}
