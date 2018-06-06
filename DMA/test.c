#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *p1=0,*p2=0,*p3;
	int a=3;
	p1=malloc(100*sizeof(char));
	p2=malloc(100*sizeof(char));
/*	scanf("%[^\n]%*s\n%2[^\n]s",a,p1,p2);
	printf("%s\n%s\n",p1,p2);
	printf("%s\n",strcat(p1,p2));
*/
	scanf("%*[^(a-f)]s",p1);
	printf("%s",p1);
	}
