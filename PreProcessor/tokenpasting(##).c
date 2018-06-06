#include<stdio.h>
#define MAC(a,b) a##b
int main()
{
	int x1=1,x2=2,x3=3,x4=4,i;
	for(i=1;i<5;i++)
		printf("%d ",MAC(x,i));
}
