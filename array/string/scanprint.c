#include<stdio.h>
int main()
{
	char str[]="kernel master";
	char str1[20];
	char str2[20];
	char str3[20];
	scanf("%s",str1);
	printf("str1=%s\n",str1);
	printf("enter string2 without space:\n");
	scanf("\n%10s",str2);
	printf("str2=%10s\n",str2);
	printf("Enter the string3 with space:");
	scanf("\n%10[^\n]s",str3);
	printf("str3=%s\n",str3);
	printf("str=%s\n",str);
}

