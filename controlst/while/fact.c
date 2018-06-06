#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf("Enter the value for 'n':");
	scanf("%d",&n);
	while(i<=n)
	{
		fact*=i;
		i++;
	}
	printf("Factorial is %d\n",fact);
}

