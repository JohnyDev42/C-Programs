#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char id[100];
int n,i;
printf("Enter the Id\n");
gets(id);
printf("Entered string:%s\n",id);
n=strlen(id);
for(i=0;i<n-5;i++)
printf("*");
for(i=n-5;i<n;i++)
printf("%c",id[i]);
printf("\n");
return 0;
}


