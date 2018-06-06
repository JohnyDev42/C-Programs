#include<stdio.h>
int main()
{
	int n,arr[100],size=0,i,j,temp;
	printf("Enter the Integer number:");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		arr[i]=n%2;
		n=n/2;
		size++;
	}
/*	printf("size=%d\n",size);
	for(i=0;i<size;i++)
		printf("%d",arr[i]);
	printf("\n");*/
	printf("Binary of Integer is:");
	for(i=0,j=size-1;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	for(i=0;i<size;i++)
		printf("%d",arr[i]);
	printf("\n");
}


