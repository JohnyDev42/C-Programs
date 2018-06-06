#include<stdio.h>
int main()
{
	int i,j,k,n,in;
	float arr[50],temp,x,temp1;
	printf("Enter the vector size:");
	scanf("%d",&n);
	printf("Enter the vector elements:\a");
	for(i=0;i<n;i++)
		scanf("%f",&arr[i]);
	printf("Enter the element to insert:");
	scanf("%f",&x);
	printf("Position of Insert:");
	scanf("%d",&in);
//	temp=arr[in-1];
//	arr[in-1]=x;
	for(j=n-1;j>=in-1;j--)
		for(k=j+1;k>j;k--)
		{
			arr[k]=arr[j];
		}
	arr[in-1]=x;
	printf("After Insert:\n");
	for(i=0;i<=n;i++)
		printf("%f ",arr[i]);
	printf("\n");
}



