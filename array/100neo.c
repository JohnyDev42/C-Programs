#include<stdio.h>
int main()
{
	int a[100],i;
	for(i=0;i<100;i++)
	{
		a[i]=i+1;
		printf("%d ",a[i]);
	//	if(a[i]%2==0)
	}
	printf("\nEven no.s:\n");
	for(i=0;i<100;i++)
	{
		if(a[i]%2==0)
			printf("%d ",a[i]);
	}
	printf("\nOdd no.s:\n");
	for(i=0;i<100;i++)
	{
		if(a[i]%2!=0)
			printf("%d ",a[i]);
	}
	printf("\nNew no.s:\n");
	for(i=0;i<100;i++)
	{
		a[i]=a[i]+5;
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

		

