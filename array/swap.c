#include<stdio.h>
int main()
{
	int size,i,j,temp;
	printf("Enter the size of Array1 & Array2:");
	scanf("%d",&size);
	int arr1[size];
	int arr2[size];
	printf("Enter the elements of array1:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr1[i]);
	
	printf("Enter the elements of Array2:\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr2[i]);
	
	printf("Before Swapping:\n");
	printf("Array1:");
	for(i=0;i<size;i++)
		printf("%d ",arr1[i]);
	printf("\nArray2:");
	for(i=0;i<size;i++)
		printf("%d ",arr2[i]);

	printf("After Swapping in Reverse order:\n");
	for(i=0,j=size-1;(i<size)&&(j>=0);i++,j--)
	{
		temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;
	}
	printf("\nArray1:");
	for(i=0;i<size;i++)
		printf("%d ",arr1[i]);
	printf("\nArray2:");
	for(i=0;i<size;i++)
		printf("%d ",arr2[i]);
	printf("\n");
}


