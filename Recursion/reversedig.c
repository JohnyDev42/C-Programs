#include<stdio.h>
int main()
{
	int n;
	printf("Enter a NUmber:");
	scanf("%d",&n);
	printf("%d\n",revDig(n));
}
int revDig(int n)
{
	static int rev=0;
	if(n==0)
		return 0;
	rev=rev*10+n%10;
	n=n/10;
	revDig(n);
	return rev;

}
