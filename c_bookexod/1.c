#include<stdio.h>
int main()
{
	int i=0,j=0,arr[6]={4,6,2,0,5,10};
	while(arr[i])
	{
		j+=arr[i];
		i++;
	}
	printf("%d",j);
	return 0;
}
