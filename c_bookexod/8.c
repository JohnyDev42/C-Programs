
#include<stdio.h>
void fun(int arr[],int i,int j)
{
	if(i>j)
		return;
	fun(arr,i+1,j);
	printf("%d ",arr[i]);
}
int main()
{
	int arr[]={1,6,2,7,3,4,8,10,9,5};
	fun(arr,2,7);
}
