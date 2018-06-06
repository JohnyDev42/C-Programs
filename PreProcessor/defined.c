#include<stdio.h>
//#define MAC 1
int main()
{
#if defined  MAC
	printf("Defined\n");
#endif
#if !defined(MAC)
//#else
	printf("Not Defined\n");
#endif

}
