#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr=0,n,i,j,temp;
	printf("Enter the size of array:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",(ptr+i));
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}	
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",ptr[i]);
	free(ptr);
	ptr=0;
	printf("\n");
}
