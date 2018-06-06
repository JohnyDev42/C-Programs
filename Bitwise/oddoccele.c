/* Function to return only odd occuring element*/
#include<stdio.h>
int findOdd(int arr[],int n)
{
	int res=0,i;
	for(i=0;i<n;i++)
		res^=arr[i];
	return res;
}
int main()
{
	int arr[]={12,12,14,90,14,14,14};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Odd occuring element is %d\n",findOdd(arr,n));
	return 0;
}
