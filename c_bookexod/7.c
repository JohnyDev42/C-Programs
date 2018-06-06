#include<stdio.h>
int main()
{
	int i,j,a[10]={1};//{1,2,3,4,5,6};
	for(i=0;i<10;i++)
		for(j=0;j<i;j++)
			a[i]+=a[j];
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
}
