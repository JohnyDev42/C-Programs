#include<stdio.h>
int main()
{
	int a,b;
	int (*ptr)(const char*,...);
	ptr=scanf;
	ptr("%d%d",&a,&b);
	ptr=printf;
	ptr("%d %d",a,b);
}
