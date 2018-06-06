#include<stdio.h>
int main()
{
	char str[50];
	int i,n=0,a=0;
	printf("Enter a string:\n");
	fgets(str,100,stdin);
	for(i=0;str[i++];)
	{
		if(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z')))
			a=1;
		if((str[i]>='0')&&(str[i]<='9'))
			n=1;
	}
	if(n==1&&a==1)
		printf("AlphaNumeric\n");
	else
		if(n==1)
			printf("Numeric\n");
		else
			if(a==1)
				printf("Alphabetic\n");
}
