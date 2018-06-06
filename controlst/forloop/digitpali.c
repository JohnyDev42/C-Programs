#include<stdio.h>
int main()
{
	int a,i,b,c,d;
	printf("Enter the Number: ");
	scanf("%d",&a);
	d=a;
	for(i=0;a>0;i++)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("Count=%d\nReverse=%d\n",i,c);
	if(d==c)
		printf("Its Palindrom\n");
	else
		printf("Its Not Palindrom\n");
}
