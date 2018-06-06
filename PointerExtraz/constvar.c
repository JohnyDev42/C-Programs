#include<stdio.h>
int main()
{
	const int x=10;  //Here x value cant be change using 'x' directly
//	x=20; //can't change const variable directly
	printf("Before scan x=%d\n",x);
	scanf("%d",&x); //But we can change variable using its address 

	printf("x=%d\n",x);
	int *ptr=&x;
	*ptr=5;		//We can change 'x' value using pointer.
	printf("x=*ptr=%d\n",x);
}
