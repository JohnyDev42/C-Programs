#include<stdio.h>
int main()
{
	int i,j,k,n;
	float arr[50],temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
  		scanf("%f",&arr[i]);
	for(j=0;j<n;j++)
		for(k=0;k<n;k++)
			if(arr[k]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
	for(i=0;i<n;i++)
		printf("%f ",arr[i]);
	return 0;
}
