#include<stdio.h>
int main()
{
	int a,b,c=0,d;
	printf("Enter the Number: ");
	scanf("%d",&a);
	d=a;
	while(a!=0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	if(d==c)
		printf("Its Palindrom\n");
	else
		printf("Its Not Palindrom\n");
}
