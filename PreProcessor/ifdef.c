#include<stdio.h>
//#define OLD
int main()
{
	int a,b,c;
#ifdef OLD
	a=2;b=3;c=4;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
#else
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("c=%d\n",c);
#endif
}
