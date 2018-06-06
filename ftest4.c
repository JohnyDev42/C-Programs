#include<stdio.h>
int main(int argc,char **argv)
{
	printf("Enter the character");
	getchar();
	sum(argv[1],argv[2]);
}
sum(num1,num2)
	int num1,num2;
{
	return num1+num2;
}


