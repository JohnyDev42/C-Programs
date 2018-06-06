#include<stdio.h>
int main()
{
	int sze=ret_val(sizeof(float));
	printf("\nsize id %d",++sze);
	printf("\nsize id %lu",sizeof(float));
}
int ret_val(int ret_val)
{
	ret_val+=2.5;
	return ret_val;
}
