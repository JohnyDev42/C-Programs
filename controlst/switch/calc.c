#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter the Ecxpression");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		case '+': printf("%d\n",a+b);
			break;
		case '-': printf("%d\n",a-b);
			break;
		case '*': printf("%d\n",a*b);
			break;
		case '/': printf("%d\n",a/b);
			break;
		default: printf("Wrong Expression\n");
	}
}
