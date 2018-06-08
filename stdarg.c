/* Function which takes variable arguments */

#include<stdio.h>
#include<stdarg.h>
int sum(int,...);
int main()
{
	printf("Sum=%d\n",sum(3,23,5,7));
	return 0;
}
int sum(int num_args,...)
{
	int res=0,i;
	va_list ap;
	va_start(ap,num_args);
	for(i=0;i<num_args;i++)
	{
		res+=va_arg(ap,int);
	}
	va_end(ap);
	return res;
}
