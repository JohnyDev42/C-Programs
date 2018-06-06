#include<stdio.h>
int main()
{
	int size,i,j,temp;
	printf("Enter the size of Array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the array elements:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("\nElements of Array Before Reverse:\n");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\nElements of Array After Reverse:\n");
	for(i=0,j=size-1;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

