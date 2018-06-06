#include<stdio.h>
int roman(int,int,char);
int main()
{
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	if(n>=1000)
		n=roman(n,1000,'m');
	if(n>=500)
		n=roman(n,500,'d');
	if(n>=100)
		n=roman(n,100,'c');
	if(n>=50)
		n=roman(n,50,'l');
	if(n>=10)
		n=roman(n,10,'x');
	if(n>=5)
		n=roman(n,5,'v');
	if(n>=1)
		roman(n,1,'i');
	printf("\n");
	return 0;
}
int roman(int n,int k,char c)
{
	if(n==9)
	{
		printf("ix");
		return 0;
	}
	if(n==4)
	{
		printf("iv");
		return 0;
	}
	while(n>=k)
	{
		printf("%c",c);
		n=n-k;
	}
	return n;
}
