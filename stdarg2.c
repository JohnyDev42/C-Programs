/*functions are passed as  Variable Arguments */

#include<stdio.h>
#include<stdarg.h>
void display(char *,...);
int main()
{
	int (*p1)();
	int (*p2)();
	int fun1(),fun2();
	p1=fun1;
	p2=fun2;
	display("Bye",p1,p2);
}
void display(char *s,...)
{
	int (*pp1)(),(*pp2)();
	va_list ptr;
	typedef int (*funptr)();
	va_start(ptr,s);
	pp1=va_arg(ptr,funptr);
	(*pp1)();
	pp2=va_arg(ptr,funptr);
	(*pp2)();
}
int fun1()
{
	printf("Hello\n");
}
int fun2()
{
	printf("Hi\n");
}
