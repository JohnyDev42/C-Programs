#include<stdio.h>
int main()
{
	int y=1,x;
	printf("Enter number:");
	scanf("%d",&x);
	while(y<x)
	{
		y=y<<1;
	}
	if(x==y)
		printf("power of 2\n");
	else
		printf("not power of 2\n");

}
