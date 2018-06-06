#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b,c[100];
	fgets(a,100,stdin);
//	scanf("%c",&b);
//	getchar();
	fgets(c,100,stdin);
//	fgets(b,100,stdin);
//	printf("%d\n",strcmp(a,b));
//	printf("%s\n",strchr(a,b));
	printf("%s\n",strstr(a,c));
}
