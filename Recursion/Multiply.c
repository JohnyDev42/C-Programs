/* Multiply two Numbers Using Recursion */

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two Numbers:");
	scanf("%d%d",&a,&b);
	printf("Result:%d\n",multi(a,b));
}
int multi(int a,int b)
{
	if(b==0)
		return 0;
	if(b>0)
		return (a+multi(a,b-1));
	if(b<0)
		return  -multi(a,-b);
}
