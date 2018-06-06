#include<stdio.h>
int main()
{
	int x=10,y=20;
	const int * const ptr=&x;	//Here both ptr & x are const, We cant change their values directly

	x=11;	//Valid
//	*ptr=12; //Invalid
//	ptr=&y	//Invalid
	int **ptr1=&ptr;	//We can change value of variable ptr & x By assigning address of ptr to another ptr1

	**ptr1=12;

	printf("x=*ptr=**ptr=%d\n",*ptr);
	*ptr1=&y;

	printf("y=*ptr=**ptr=%d\n",*ptr);
//	*ptr=5; Invalid
//	ptr=&x;

}
