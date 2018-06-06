#include<stdio.h>
#include "sizeof.c"
int main()
{
	char c;
	printf("%d\n",msizeof(&c));
}
