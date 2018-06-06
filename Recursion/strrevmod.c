#include<stdio.h>
void swap(char *p1,char *p2)
{
	char t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
void strrev(char*,int,int);
int main()
{
	char str[]="string";
	int i=0,j=sizeof(str)-2;
	strrev(str,i,j);
	printf("%s\n",str);
}
void strrev(char *str,int i,int j)
{
	if(i>=j)
		return;
	swap(&str[i],&str[j]);
	strrev(str,i+1,j-1);
}
