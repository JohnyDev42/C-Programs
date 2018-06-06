#include<stdio.h>
#define MAC(s) #s
int main()
{
	char name[]="Arun";
	int x=90;
	printf("Mark of MAC(%s) is MAC(%d)",name,x);
}
