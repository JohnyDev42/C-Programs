#include<stdio.h>
void swap(int a[],int b[]);
int main()
{
	int a[]={1,2,3,4,5},b[5]={5,6,7,8,9};
	printf("Before swap a[]:\n");
	write_arr(a,5);
	printf("\nBefore swap b[]:\n");
	write_arr(b,5);
	swap(a,b);
	printf("\nIn main after swap:a[]=\n");
	write_arr(a,5);
	printf("\nIn main after swap:b[]=\n");
	write_arr(b,5);
}
int write_arr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
