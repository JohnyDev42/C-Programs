#include<stdio.h>
float add(int a,float b)
{
	return a+b;
}
int main()
{

	float (*fp)(int,float);
	float res,add(int,float);
	fp=add;
	res=add(5,5.5);
	printf("%f\n",res);
	res=(*fp)(6,6.5);
	printf("%f\n",res);
}
