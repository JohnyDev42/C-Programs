#include<stdio.h>
int main()
{
	void swap();
	int n1=10,n2=8;
	swap(&n1,&n2);
	printf("n1=%d n2=%d",n1,n2);
}
void swap(int *a,int *b)
{
	*a^=*b;
	*b^=*a;
	*a^=*b;
}


