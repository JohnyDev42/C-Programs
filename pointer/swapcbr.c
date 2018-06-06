#include<stdio.h>
void swap(int *,int *);
int main()
{

	int a=10,b=20;
	printf("Before swap:a=%d,b=%d\n &a=%p\t&b=%p\n",a,b,&a,&b);
	swap(&a,&b);
	printf("After swap:a=%d,b=%d\n &a=%p\t&b=%p\n",a,b,&a,&b);

}
void swap(int *pa,int *pb)
{
	int t;
	t=*pa;
	*pa=*pb;
	*pb=t;
	printf("In fun:a=%d,b=%d\n &a=%p\t&b=%p\n",*pa,*pb,pa,pb);
}
