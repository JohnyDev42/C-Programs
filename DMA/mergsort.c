#include<stdio.h>
#include<stdlib.h>
void * sort2arr(int *,int,int *,int,int*);
int main()
{
	int *ptr1=0,*ptr2=0,n1,n2,i,arr[5],*p=0,new;
	printf("Enter the no. of elements of arr1 & arr2:");
	scanf("%d%d",&n1,&n2);
	ptr1=(int *)malloc(n1*sizeof(int));
	ptr2=(int *)malloc(n2*sizeof(int));
	printf("Enter the elements of arr1:\n");
	for(i=0;i<n1;i++)
		scanf("%d",&ptr1[i]);
	printf("Enter the elements of arr2:\n");
	for(i=0;i<n2;i++)
		scanf("%d",&ptr2[i]);
	printf("The combined sorted array is:");
	p=sort2arr(ptr1,n1,ptr2,n2,&new);	
	for(i=0;i<new;i++)
		printf("%d ",*(p+i));
	printf("\n");
	
}
void * sort2arr(int * ptr1,int n1,int * ptr2,int n2,int *new)
{
	int *ptr3=0,temp,i,j,*ptr4=0,c=0;
	ptr3=realloc(ptr1,(n1+n2)*sizeof(int));
		for(i=0;i<n2;i++)
		{
			ptr3[n1+i]=ptr2[i];
		}
	for(i=0;i<n1+n2-1;i++)
		for(j=i+1;j<n1+n2;j++)
		{
				if(ptr3[i]>ptr3[j])
			{
			temp=ptr3[i];
			ptr3[i]=ptr3[j];
			ptr3[j]=temp;
			}

		}
		int k=0;
	ptr4=calloc(n1+n2,sizeof(int));
	for(i=0;(i<n1+n2-1);i++)
	{
		if(ptr3[i]!=ptr3[i+1])
		ptr4[k++]=ptr3[i];
	}
	ptr4[k++]=ptr3[n1+n2-1];
	*new=k;
	return ptr4;
}
