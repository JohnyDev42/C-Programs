#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Integer: ");
	scanf("%d",&a);
	if(a>=0)
		printf("Magnitude is %d\n",a);
	else
		printf("Magnitude is %d\n",-a);
}
