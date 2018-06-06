#include<stdio.h>
int main()
{
	int n;
	printf("Enter a NUmber:");
	scanf("%d",&n);
	printf("%d\n",countDig(n));
}
int countDig(int n)
{
	static int i=0;
	if(n==0)
		return 0;
	n=n/10;
	i++;
	countDig(n);
	return i;
}
