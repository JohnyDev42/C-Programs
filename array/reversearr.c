#include<stdio.h>
int main()
{
	int size,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array Before Reverse:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nArray After Reverse:\n");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
