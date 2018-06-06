#include<stdio.h>
int main()
{
	if(!0==1)
		printf("%d",!0);
	else
		printf("n");
	int x=97,y=0,z=5;
//	int y=sizeof(x++);
	printf("\n%d",y);
	 x=-2;
	x=x>>1;
	printf("%d\n",x);
	x=1;
	int a=x&&y&&z++;
	printf("%d",z);
}
