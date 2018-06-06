#include<stdio.h>
void read_arr(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void write_arr(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
int main()
{
	int n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	read_arr(arr,n);
	printf("Entered Array is:\n");
	write_arr(arr,n);
	printf("Array after sorting descending order:\n");
	big=arr[0];
	for(i=0,j=1;i<n;i++,j++)
	{
		arr[j]>big;
		arr[i]=arr[j];
	}
	printf("Enter a integer to insert:");
	scanf("%d",&x);



	int arr[n];

}
