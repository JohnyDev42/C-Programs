#include<stdio.h>
#define foo(m,n) m ## n
int main()
{
	char kl[10]="jack";
	printf("%s\n",foo(k,l));
}
