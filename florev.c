#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//void rev(char a[],int);
static char a[];
int main()
{
	char a[100];
	int len;
	printf("Enter the float number: ");
//	scanf("%s",&a[100]);
	gets(a);
	len=strlen(a);
	printf("%f\n",atof(a));
	rev(a,len);
	return 0;
}
void rev(char a[],int n)
{
	int i;
	for(i=n;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}


