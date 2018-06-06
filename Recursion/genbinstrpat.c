/*Generate all possible Binary String Pattern */

#include<stdio.h>
#include<string.h>
void findBin(char *str,int index);
int main()
{
	char str[20]="1??0?101";
//	printf("Enter the Binary with Wild Characters:");
//	scanf("%[^\n]s",str);
	printf("Original:%s\n",str);
	findBin(str,0);
}
void findBin(char *str,int index)
{
	char str1[10];
	strcpy(str1,str);
	if(index==strlen(str)-1)
	{
		printf("%s\n",str1);
		return;
	}
	if(str[index]=='?')
	{
		str1[index]='0';
		findBin(str1,index+1);
		str1[index]='1';
		findBin(str1,index+1);
	}
	else
		findBin(str1,index+1);
}
