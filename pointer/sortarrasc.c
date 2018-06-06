#include<stdio.h>
int main()
{
	int arr[20],i,j,n,temp;
	printf("Enter the No. of array elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\nSorted Array in Ascending:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}

		}
		printf("%d ",arr[i]);
	}
}
