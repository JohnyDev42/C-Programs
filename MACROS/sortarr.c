#include<stdio.h>
#include<stdlib.h>
#define SORT(ptr) for(i=0;i<n-1;i++)for(j=i+1;j<n;j++)if(ptr[i]>ptr[j]){temp=ptr[i];ptr[i]=ptr[j];ptr[j]=temp;}
int main()
{
	int n,*ptr=0,i,j,temp;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",ptr+i);
	SORT(ptr);
	printf("After sorting:\n");
	for(i=0;i<n;i++)
		printf("%5d",ptr[i]);
}
