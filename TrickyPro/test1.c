#include<stdio.h>
int main()
{
	char name[10];
	scanf("%*[^\n]s%*[\n]%s",name);
	printf("%s",name);
}
