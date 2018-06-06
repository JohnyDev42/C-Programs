#include<stdio.h>
void rotate(int *,int *,int *);
int main()
{
	int a=10,b=20,c=30;
	printf("Before Rotate:a=%d b=%d c=%d\n",a,b,c);
	rotate(&a,&b,&c);
	printf("After Rotate:a=%d b=%d c=%d\n",a,b,c);

}
void rotate(int *pa,int *pb,int *pc)
{
	int t;
	t=*pa;
	*pa=*pb;
	*pb=*pc;
	*pc=t;
}
