/* Variable argument list that passed to another Functiom */

#include<stdio.h>
#include<stdarg.h>
void display(char *,...);
void show(char *,va_list);
int main()
{
	display("Hello",4,12,14,13,44);
}
void display(char *s,...)
{
	va_list ptr;
	va_start(ptr,s);
	show(s,ptr);
}
void show(char *t,va_list ptr1)
{
	int a,n,i;
	a=va_arg(ptr1,int);
	for(i=1;i<=a;i++)
	{
		n=va_arg(ptr1,int);
		printf("%d\n",n);
	}
}
