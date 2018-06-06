#include<stdio.h>
int main()
{
	//int a,*p1=&a;
	int *ptr=(int *)0x7ffc77cf4e74;;
//	printf("%d\t%p\n",*p1,p1);
	printf("%d\t%p\n",*ptr,ptr);
	*ptr=20;
	printf("%d\n",*ptr);
}
