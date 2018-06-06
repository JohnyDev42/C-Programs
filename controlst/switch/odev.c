#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Number: ");
	scanf("%d",&a);
	switch(a%2)
	{
		case 0:printf("Even Number\n");
		       break;
		default:printf("Odd Number\n");
	}
}
