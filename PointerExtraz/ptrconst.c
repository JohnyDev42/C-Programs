#include<stdio.h>
int main()
{
	int x=10,y=20;
	int * const ptr=&x; // Here ptr variable is constant,We can't give any other address to it directly.
//	ptr=&y;	//Invalid

	printf("x=*ptr=%d\n",*ptr);
	int **ptr1=&ptr;
	*ptr1=&y;

	printf("y=**ptr1=*ptr=%d\n",*ptr);

}
