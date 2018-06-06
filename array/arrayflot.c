#include<stdio.h>
int main()
{
	int size,i;
	float arr[size]={1.5,2.5,3.5};
	printf("Enter the size:\n");
	scanf("%d",&size);
	printf("Enter the array elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
