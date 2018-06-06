#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two Numbers:");
	scanf("%d%d",&a,&b);
	int c=testBit(a,b);
	if(c==1)
		printf("True\n");
	else
		printf("False\n");
}
int testBit(int a,int b)
{
	if(b>=15&&b<=0)
		return 0;
	else
		if((a>>b)&0x01==1)
			return 1;
		else
			return 0;
}
