#include<stdio.h>
void swap(int,int);
int main()
{

	int a=10,b=20;
	printf("Before swap:a=%d,b=%d\n &a=%p\t&b=%p\n",a,b,&a,&b);
	swap(a,b);
	printf("After swap:a=%d,b=%d\n&a=%p\t&b=%p\n",a,b,&a,&b);

}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("In fun:a=%d,b=%d\n&a=%p\t&b=%p\n",a,b,&a,&b);
}
