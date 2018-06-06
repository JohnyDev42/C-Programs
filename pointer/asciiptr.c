#include<stdio.h>
int main()
{
	char a,b,high;
	char *p1=&a,*p2=&b;
	printf("Enter two  character for a & b\n");
//	getchar();
	scanf("\n%c\n%c",&a,&b);
	printf("a=%c\nb=%c\n",a,b);
	if(*p1>*p2)
		high=*p1;
	else
		high=*p2;
	printf("%c has higher ASCII\n",high);
}
