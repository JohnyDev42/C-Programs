#include<stdio.h>
int main()
{
	int a;
	printf("Enter the no. of Calls : ");
	scanf("%d",&a);
	if(a<=100)
		printf("Bill Amount:%d\n",250);
	else
		printf("Bill Amount: %.2f\n",250+(float)(a-100)*1.25);
}
