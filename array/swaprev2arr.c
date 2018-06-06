#include<stdio.h>
int main()
{
	int l,size1,size2,i,j,temp,temp1,temp2,a=0,b=0;
	printf("Enter the size of Array1:");
	scanf("%d",&size1);
	int arr1[size1];
	printf("Enter the elements of array1:\n");
	for(i=0;i<size1;i++)
		scanf("%d",&arr1[i]);
	printf("Enter the size of Array2:");
	scanf("%d",&size2);
	int arr2[size2];
	printf("Enter the elements of Array2:\n");
	for(i=0;i<size2;i++)
		scanf("%d",&arr2[i]);
	
	printf("Before Swapping:\n");
	printf("Array1:");
	for(i=0;i<size1;i++)
		printf("%d ",arr1[i]);
	printf("\nArray2:");
	for(i=0;i<size2;i++)
		printf("%d ",arr2[i]);
//reverse1	
	for(i=0,j=size1-1;i<j;i++,j--)
	{
		temp1=arr1[i];
		arr1[i]=arr1[j];
		arr1[j]=temp1;
	}
	//reverse2
	for(i=0,j=size2-1;i<j;i++,j--)
	{
		temp2=arr2[i];
		arr2[i]=arr2[j];
		arr2[j]=temp2;
	}

	if(size1>size2)
	{
		l=size2;
		a=size1-size2;
		arr2[size1];
	}

	if(size2>size1)
	{
		l=size1;
		b=size2-size1;
		arr1[size2];
	}
//Swap
		for(i=0;i<l;i++)
		{
			temp=arr1[i];
			arr1[i]=arr2[i];
			arr2[i]=temp;
		}
		
	while(a--)
	{
		arr2[size1+1]=arr1[size1+1];
		size1++;
	}
	while(b--)
	{
		arr1[size2+1]=arr2[size2+1];
		size2++;
	}

	for(i=0;i<size1;i++)
	{
		printf("%d ",arr1[i]);
	}
	
	printf("\n");
	for(i=0;i<size2;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
