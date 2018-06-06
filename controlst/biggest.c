#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three Numbers :");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("Biggest is %d\n",a);
		else
			printf("Biggest is %d\n",c);
	}
	else
	{
		if(b>c)
			printf("Biggest is %d\n",b);
		else
			printf("Biggest is %d\n",c);
	}
}
