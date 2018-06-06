#include<stdio.h>
int main()
{
	int i,arr[10],big,a=0,small;
//	big=arr[0];
//	small=arr[0];
	printf("Enter 10 the Numbers:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("10no.s are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
//	printf("Biggest is: ");
	big=arr[0];
	for(i=0;i<10;i++)
	{
	//	big=a[i];
		if(arr[i]>big)
		{
			big=arr[i];
			a=i;
		}

	}
	printf("\nBiggest is arr[%d]: %d\n",a,big);
	small=arr[0];
	int b=0;
//	printf("\n%d\n",small);
	for(i=0;i<10;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			b=i;
		}
	}
	printf("\nSmallest is arr[%d]: %d\n",b,small);
	return 0;
}

