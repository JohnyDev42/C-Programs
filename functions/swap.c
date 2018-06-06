#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b;
	printf("Enter the value of a & b: ");
	scanf("%d%d",&a,&b);
       printf("Before Swap: a=%d b=%d\n",a,b);
       swap(a,b);
       return 0;
}
int swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("After swaping: a=%d b=%d\n",a,b);
	return 0;
}
