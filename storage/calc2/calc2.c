#include<stdio.h>
int add();
int sub();
int mul();
float div();
int a,b;
float res;
char c;
int main()
{
	printf("Enter the operation: ");
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		
		case '+':res=add();
			 break;
		case '-':res=sub();
			 break;
		case '*':res=mul();
			 break;
		case '/':res=div();
			 break;
		default:printf("Enter valid operation...\n");
	}
	printf("The result is= %f \n",res);
}
