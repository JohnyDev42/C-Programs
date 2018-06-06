#include<stdio.h>
int main()
{
	float a=12.345;
	printf("a=%f\n",a);
	printf("a=%10f\n",a);
	printf("a=%10.5f\n",a);
	printf("a=%10.2f\n",a);
	printf("a=%.3f\n",a);
	int x,y;
	printf("Enter the width:");
	scanf("%d",&x);
	printf("a=%*f\n",x,a);
	printf("Enter the precision:");
	scanf("%d",&y);
	printf("a=%*.*f\n",x,y,a);
	printf("a=%.*f\n",y,a);
}
