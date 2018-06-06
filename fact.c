#include<stdio.h>
long fact(int);
int main()
{
	long a,f;
	printf("Enter the value ");
	scanf("%ld",&a);
	f=fact(a);
	printf("Fact is %ld\n",f);
}
long fact(int a)
{
	int facto;
	if(a==0)
		facto=1;
	facto=fact(a-1)*a;
	return facto;
}
