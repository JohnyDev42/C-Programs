#include<stdio.h>
#include<limits.h>
int main()
{
	int x,a;
#define MILLI(age) age*365*24*60*60*1
#if INT_MAX<MILLI(12)	
#error integer cant hold value of age in MILLI
#endif
	x=MILLI(12);
	printf("age in milliseconds is %d\n",x);
}
