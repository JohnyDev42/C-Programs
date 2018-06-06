/* Find odd or even using bitwise */
#include<stdio.h>
int main()
{
	int x;
	printf("Enter the Number:");
	scanf("%d",&x);
	if(x&0x01)
		printf("Odd\n");
	else
		printf("Even\n");
}
