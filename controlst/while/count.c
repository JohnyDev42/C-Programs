#include<stdio.h>
int main()
{
	int a,c=0,b;
	printf("Enter the Number:");
	scanf("%d",&a);
	if(a==0)
		printf("Numbers of digit is %d\n",c++);
	while(a>0)
	{
		b=a%10;
		c++;
		a=a/10;
	}
	printf("No. of Digits in Number is %d\n",c);
}
