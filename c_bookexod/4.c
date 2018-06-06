#include<stdio.h>
void fun(int arr[]);
int main()
{
	int arr[5]={5,10,15,20,25};
	fun(arr);

}
void fun(int arr[])
{
	int i=5,sum=0;
	while(i>2)
	sum=sum+arr[--i];
	printf("sum=%d\n",sum);
}
