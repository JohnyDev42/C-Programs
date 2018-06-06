#include<stdio.h>
int main()
{
	int a,b,*p1=&a,*p2=&b;
	printf("p1=%p\tp2=%p\n",p1,p2);
//	printf("p1+p2=%p\n",p1+p2);
	printf("p1-p2=%lu\n",p1-p2);
	printf("p1-5=%p\n",p1-5);
	printf("p1+5=%p\n",p1+5);
	printf("++p1=%p\n",++p1);
	printf("--p2=%p\n",--p2);
	printf("p1++=%p\n",p1++);
	printf("p2--=%p\n",p2--);
}
