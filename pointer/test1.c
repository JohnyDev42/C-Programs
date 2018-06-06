#include<stdio.h>
#include<string.h>
int str_cmp(char *,char *);
int main()
{
	char a[10],b[10];
	fgets(a,10,stdin);
	fgets(b,10,stdin);
//	scanf("%[^\n]s",a);
//	scanf("%[^\n]s",b);
	printf("%d\n",str_cmp(a,b));
	
}
int str_cmp(char *a,char *b)
{
	for(;(*a==*b)&&((*a!='\0')||(*b!='\0'));a++,b++);
	return *a-*b;
}
