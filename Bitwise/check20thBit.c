#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Integer\n");
	scanf("%d",&x);
	if(x&0x80000)
		printf("20th Bit is SET\n");
	else
		printf("20th Bit is CLEAR\n");
}
