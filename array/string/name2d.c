#include<stdio.h>
int main()
{
	int i;
	char name[5][50];
	printf("Enter the names:\n");
	for(i=0;i<5;i++)
	{
		scanf("%s",name[i]);
	}
	printf("Names are:\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",name[i]);
	}
}
