#include<stdio.h>
void strrev(char *,int j);
int main()
{
	char str[]="string";
	int j=sizeof(str)-2;
	strrev(str,j);
}
void strrev(char *str,int j)
{
	if(j<0)
		return;
	printf("%c",str[j]);
	strrev(str,j-1);
}
