#include<stdio.h>
int main()
{
	int a[3]={1,2,3};
	int *p=a;
	int *r=&p;
//	printf("%d",(**r));
	char data[2][3][2]={0,1,2,3,4,5,6,7,8,9,10,11};
	printf("%o\n",data[0][2][1]);
}
