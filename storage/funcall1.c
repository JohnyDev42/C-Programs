#include<stdio.h>
void fun();
void fun1();
static int t;
static char a,b;
int main()
{
	int i,j;
	printf("How many times you want to call fun() from main:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		fun();
