/* WAP using void (*f)(int,void(*)()) */

#include<stdio.h>
void fun1();
int main()
{
	void (*f)(int,void (*)());
	void fun(int,void (*)());
//	void fun1();
	void (*f1)();
	f1=fun1;
	f=fun;
	(*f)(5,f1);
}
void fun(int a,void (*q)())
{
	printf("Success\n");
	fun1();
}
void fun1()
{
	printf("Hello\n")	;
}
