#include<stdio.h>
int main()
{
	int i,l;
	char str[]="kernel master";
	char str1[100];
	printf("Enter the string:");
	scanf("%[^\n]s",&str1);
	printf("%s",str1);
	printf("\nAfter reverse:");
	
	for(i=(sizeof(str)-2);i>=0;i--)
		printf("%c",str[i]);
	printf("\n");
	i=0;
	while(str1[i]!='\0')
	{
		l=i;
		i++;
	}
	for(i=l;i>=0;i--)
		printf("%c",str1[i]);
	printf("\n");

}

