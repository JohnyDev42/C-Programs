#include<stdio.h>
#include "atoi.c"
int main(int argc,char *argv[])
{
	int c;
	c=argv[2][0];
	switch(c)
	{
		case '+':printf("%d\n",atoi(argv[1])+atoi(argv[3]));
			 break;
		case '-':printf("%d\n",atoi(argv[1])-atoi(argv[3]));
			 break;
		case '*':printf("%d\n",atoi(argv[1])*atoi(argv[3]));
			 break;
		case '/':printf("%d\n",atoi(argv[1])/atoi(argv[3]));
			 break;
		case '%':printf("%d\n",atoi(argv[1])%atoi(argv[3]));
	}
}

