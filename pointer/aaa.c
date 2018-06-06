#include<stdio.h>
int main()
{

	int *temp;
	char *arr[]={"white","green"};
	printf("%d",*arr[0]);
//	*temp=*arr[0];
//	*arr[0]=*arr[1];
//	*arr[1]=*temp;
	scanf("%c",arr[0]);
	printf("%s\n%s",arr[0],arr[1]);
	}

