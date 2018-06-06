#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter the expression to Calculate: ");
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+')
		printf("%d\n",a+b);
	else
		if(c=='-')
			printf("%d\n",a-b);
		else
			if(c=='*')
				printf("%d\n",a*b);
			else
				if(c=='/')
					printf("%f\n",(float)a/b);
				else
					printf("Wrong Expression\n");
}

