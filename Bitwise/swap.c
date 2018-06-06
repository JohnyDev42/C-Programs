#include<stdio.h>
void swap(int*,int*);
int main()
{
	int x=10,y=20;
	printf("Before swap:\nx=%d y=%d\n",x,y);  
	swap(&x,&y);
	printf("After swap:\nx=%d y=%d\n",x,y);
}
void swap(int *x,int *y)
{
	*x=*x^*y;
	*y=*x^*y;
	*x=*x^*y;
}
