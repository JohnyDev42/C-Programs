#include<stdio.h>
int main()
{
	int a=10,b=0,c=0;
	scanf("%d",&a);
	*(a<20?&b:&c)=30;
	printf("b=%d c=%d\n",b,c);
}
