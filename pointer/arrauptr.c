#include<stdio.h>
int main()
{
	int i,arr[10]={1,2,3,4,5,6,7,8,9};
	int *ptr=arr;
	for(i=0;i<10;i++)
	{
		printf("Address of arr[%d] is %p\n",i,ptr+i);
		printf("arr[%d]=%d\n",i,*(ptr+i));
	}
}
