#include<stdio.h>
int main()
{
	int i;
	int arr[10]={[5]=5,[7]=7,[9]=10};
	for(i=0;i<10;i++)
		printf("arr[%d]=%d\n",i,arr[i]);
}
