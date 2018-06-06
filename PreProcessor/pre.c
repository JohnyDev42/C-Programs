#include<stdio.h>
int main()
{
//#define OS 1 
#if OS==1
	printf("Welcome to Linux\n");
#elif OS==2
	printf("Welcome to Windows\n");
#elif OS==3
	printf("Welcome to MAC\n");
#else
	printf("Other OS\n");
#endif

}
