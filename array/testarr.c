#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	int arr[5]={};
	int arr1[10]={2.4,5.6,7.3};
	int arr2[3]={1,2,3,4,5};
	int arr3[0]={};
	int arr4[0]={1,2,3,4,5};
	int arr5[]={};
//	int arr['a'];
	printf("arr[5]={}\n");
	for(i=0;i<5;i++)
	printf("%d ",arr[i]);
	printf("\nsize=%d",sizeof(arr));

	printf("\narr1[10]={2.4,5.6,7.3}\n");
	for(j=0;j<10;j++)
		printf("%d ",arr1[j]);
	printf("\nsize=%d",sizeof(arr1));

	printf("\narr2[3]={1,2,3,4,5}\n");
	for(k=0;k<5;k++)
	{
		printf("%d ",arr2[k]);
	}
	printf("\nsize=%d",sizeof(arr2));

	printf("\narr3[0]={}\n");
	for(l=0;l<5;l++)
		printf("%d ",arr3[l]);
	printf("\nsize=%d",sizeof(arr3));

	printf("\narr4[0]={1,2,3,4,5}\n");
	for(m=0;m<7;m++)
		printf("%d ",arr4[m]);
	printf("\nsize=%d",sizeof(arr4));

	printf("\narr5[]={}\n");
	for(n=0;n<5;n++)
		printf("%d ",arr5[n]);
	printf("\nsize=%d",sizeof(arr5));
}
