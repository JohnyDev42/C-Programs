/* Given an array of integers, sort it in such a way that the odd numbers appear first and the even numbers appear later. The odd numbers should be sorted in descending order and the even numbers should be sorted in ascending order. */

#include<stdio.h>
#include<stdlib.h>
//This func. is used in qsort to decide the relative oreder of elements at address p & q.
int comparator(const void *p,const void *q)
{
	int a=*(const int *)p;
	int b=*(const int *)q;
	if((a&1)&&(b&1))	//Both odd,Put the greater of two 1st.
		return b-a;
	if(!(a&1)&&!(b&1))	//Both Even,Put the smaller of two 1st
		return a-b;
	if(a&1)			//a is Odd,put a 1st
		return -1;
	return 1;		//a is even,put b 1st.
}
void printArr(int arr[],int size)
{
	int i;
	for( i=0;i<size;i++)
		printf("%d ",arr[i]);
}
int main()
{
	int arr[]={2,3,1,6,4,8,9,5,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,size,sizeof(arr[0]),comparator);	//Sorting Library Function.
	printf("Output Array is:\n");
	printArr(arr,size);
}
