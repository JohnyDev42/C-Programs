#include<stdio.h>
#include<stdarg.h>
#include<string.h>
	char * convert(unsigned int,int);
int main()
{
	int i=15;
//	char * convert(unsigned int,int);
	void myprintf(char *,...);
	char  msg[]="This is my printf";
	myprintf("Message:%si=%di=%o",msg,i,i);
}
void myprintf( char *fmt,...)
{
	char *p;
	char *s;
	unsigned u;
	int i;
	va_list argp;
	va_start(argp,fmt);
	for(p=fmt;*p!='\0';p++)
	{
		if(*p!='%')
		{
			putchar(*p);
			continue;
		}
		p++;
		
			switch(*p)
			{
				case 'c':i=va_arg(argp,int);
					 putchar(i);
					 break;
				case 'd':i=va_arg(argp,int);
					 if(i<0){
						 i=-i;
						 putchar('-');
					 }
					 puts(convert(i,10));
					 break;
				case 'o':u=va_arg(argp,unsigned int);
					 puts(convert(u,8));
					 break;
				case 's':s=va_arg(argp,char *);
					 puts(s);
					 break;
				case 'x':u=va_arg(argp,unsigned int);
					 puts(convert(u,16));
					 break;
				case 'u':u=va_arg(argp,unsigned int);
					 puts(convert(u,10));
					 break;
				case '%':puts("%");
					 break;
			}
	}
	va_end(argp);
}
char * convert(unsigned int num,int base)
{
	static char buff[33];
	char *ptr;

	ptr=&buff[sizeof(buff)-1];
	*ptr='\0';
	do
	{
		*--ptr="0123456789abcdef"[num % base];
		num/=base;
	}while(num!=0);
	return ptr;
}
