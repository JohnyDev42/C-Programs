#include<stdio.h>
#include<string.h>
int test(char *arr)
{
	int n,i;
	n=strlen(arr);
	printf("%d\n",n);
	for(i=0;i<n;i++)
		printf("%c",arr[i]);
}
int main()
{
//	char arr[]="arun sahu";
	char arr[]={'a','r','u','n','s','a','h','u'};
	test(arr);
	return 0;
}
