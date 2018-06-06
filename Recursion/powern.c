#include<stdio.h>
int main()
{
	int x,n;
	printf("Enter the Number & Power:");
	scanf("%d%d",&x,&n);
	printf("%d\n",power(x,n));
}
int power(int x,int n)
{
	if(n==0)
		return 1;
	return x*power(x,n-1);
}
