#include<stdio.h>
#define PASTE(x,y) x ## y  //OR #define PASTE(x,y) x##y
int main()
{
	int xy=30;
	printf("%d\n",PASTE(x,y));
}
