#include<stdio.h>
int main()
{
	int a,b;
	char c;
	do
	{
		printf("Enter the operation: ");
		scanf("%d%c%d",&a,&c,&b);
		switch(c)
		{
			case '+':printf("sum=%d\n",a+b);
			       break;
			case '-':printf("Subtract=%d\n",a-b);
			       break;
			case '*':printf("Multiply=%d\n",a*b);
			       break;
 			case '/':printf("Division=%d\n",a/b);
			       break;
			default:printf("Invalid Operation\n");
		}
	}while(c);
}
