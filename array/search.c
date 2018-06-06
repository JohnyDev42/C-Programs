#include<stdio.h>
void main()
{
	int i,a,arr[]={2,3,3,3,15,20,5};
	printf("Enter the no. you want to search: \n");
	scanf("%d",&a);
	for(i=0;i<(sizeof(arr)/4);i++)
	{
		if(a==arr[i])
		{
			printf("Found at:arr[%d]\n",i);
			return;
		}
			
/*		else
			printf("Not found\n");*/
	}
	printf("Not found\n");
}

