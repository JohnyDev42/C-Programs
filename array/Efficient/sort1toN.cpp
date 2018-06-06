/* Sort array 1 to n */
#include<iostream>
using namespace std;
void sortit(int arr[],int);
int main()
{
	int arr[]={10,14,1,12,8,4,9,2,3,7,6,11,15,5,13};
	int n=sizeof(arr)/sizeof(arr[0]);
	sortit(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}
void sortit(int arr[],int n)
{
	int temp;
	for(int i=0;i<n;i++)
		while(i!=(arr[i]-1))
		{
			temp=arr[i];
			arr[i]=arr[arr[i]-1];
			arr[arr[i]-1]=temp;
		}
}
