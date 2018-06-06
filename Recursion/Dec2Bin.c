#include<stdio.h>
int main()
{
	int n;
	printf("Enter a NUmber:");
	scanf("%d",&n);
	dec2bin(n);
}
int dec2bin(int n)
{
	int bin;
	if(n==0)
		return 0;
	bin=n%2;
//	printf("%d",bin);
	n=n/2;
	dec2bin(n);
	printf("%d",bin);

}
