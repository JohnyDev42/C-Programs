#include<stdio.h>
int main()
{
	int i;
	char arr[]={'k','e','r','n','e','l',' ','m','a','s','t','e','r'};
	char arr1[]={'k','e','r','n','e','l','\0'};
	char str[]="kernel master";
	printf("%s\n",arr1);
	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	printf("%c",arr[i]);
	printf("\n%s\n",str);
}
