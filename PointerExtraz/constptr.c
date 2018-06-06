#include<stdio.h>
int main()
{
	int x=10;
	const int *ptr=&x; //or, int const *ptr=&x;  //Here *ptr points to a constant integer variable.
//	*ptr=10;	//We can't change constant int using *ptr directly
	x=15;		//We can change value of 'x' using directly
	printf("x=%d\n",x);
	int **ptr1=&ptr;
	**ptr1=20;
	printf("x=**ptr1=%d\n",*ptr);
}
