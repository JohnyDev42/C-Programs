#include<stdio.h>
int ADD(int,int);
int (*ptr)(int,int);
int main()
{
	ptr=ADD;
	printf("Res=%d\n",ptr(1,4));
}
int ADD(int x,int y)
{
	return x+y;
}
