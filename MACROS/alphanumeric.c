#include<stdio.h>
#define ALPHANUM(c) if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z')))\
			    printf("Alphabetic\n");\
			else\
				if((c>='0')&&(c<='9'))\
				printf("Numeric\n");\
					else\
					printf("Special Character\n");
int main()
{
	char c;
	printf("Enter a Character:\n");
	scanf("%c",&c);
	ALPHANUM(c)
}
