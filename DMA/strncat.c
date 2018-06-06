#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * strmncat(char *,int,char *,int);
int main()
{
	int m,n;
	char *str1=calloc(20,sizeof(char));
        char *str2=calloc(20,sizeof(char));
	printf("Enter the 1st String:");
 	scanf("%[^\n]s",str1);
	printf("Enter the 2nd String:");
	scanf("\n%[^\n]s",str2);	
	printf("Enter the No. of letters of str1:");
	scanf("%d",&m);
	printf("Enter the No. of letters of str2:");
	scanf("%d",&n);
	printf("After concatenation:%s\n",strmncat(str1,m,str2,n));
}
char * strmncat(char *str1,int m,char *str2,int n)
{
	char *str3=calloc(m+n,sizeof(char));
	str3=str1;
	strcpy(str3+m,str2);
	*(str3+m+n)='\0';
	return str3;
}
