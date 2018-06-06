#include<stdio.h>
int sqrval(char);
int main()
{
	int a,sqr;
	printf("Enter a:\n");
	scanf("%d",&a);
	sqr=sqrval(&a);
	printf("Square of %d is %d\n",a,sqr);
}
int sqrval(int a)
{
	printf("%d\n",a);
	a=a*a;
	return(a);
}
