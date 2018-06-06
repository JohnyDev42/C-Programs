#include<stdio.h>
void opar(char);
int a,b;
char c;
int main()
{
	printf("Enter the operation: ");
	scanf("%d%c%d",&a,&c,&b);
	oper(c);
	return 0;
}

