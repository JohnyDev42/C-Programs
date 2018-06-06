#include<stdio.h>
#include "swap1.c"
int main()
{
	int arr[2]={10,20};
	printf("Before swap:arr[0]=%d,arr[1]=%d\n",arr[0],arr[1]);
	swap(arr);
	printf("Before swap:arr[0]=%d,arr[1]=%d\n",arr[0],arr[1]);
}
