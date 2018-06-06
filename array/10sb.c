#include<stdio.h>
int main()
{
	int i,arr[10],big,small,a=0,b=0;
	printf("Enter the array elements:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	big=arr[0];
	small=arr[0];
	for(i=0;i<10;i++)
	{
		if(big<arr[i])
		{
			big=arr[i];
			a=i;
		}
		if(small>arr[i])
		{
			small=arr[i];
			b=i;
		}
	}
	printf("\nBiggest is arr[%d]= %d\n",a,big);
	printf("Smallest is arr[%d]= %d\n",b,small);
}

