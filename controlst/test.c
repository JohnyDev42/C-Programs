#include<stdio.h>
int main()
{
 	static int arr[5];
	int i,b[5];
	for(i=0;i<=5;i++)
	{
		printf("%d %d %d\n",i,arr[i],b[i]);
//		a++;
	}
}
