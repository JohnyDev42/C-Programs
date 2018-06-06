#include<stdio.h>
int count_num(int ,...);
int main()
{
	int a;
	count_num(4,23,4,4,3,5,9);
	//printf("%d\n");
}
int count_num(int b,...)
{
	int i;
	int *num=&b;
	for(i=1;i<=b;i++)
		printf("%d ",*(num+i));
}
