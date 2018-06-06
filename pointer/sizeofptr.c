#include<stdio.h>
int main()
{
	int x,*p1=&x;
	char y,*p2=&y;
	float z,*p3=&z;
	long a,*p4=&a;
	printf("sizeof int *p1:%lu\n",sizeof(*p1));
	printf("sizeof char *p2:%lu\n",sizeof(*p2));
	printf("sizeof float *p3:%lu\n",sizeof(*p1));
	printf("sizeof long *p4:%lu\n",sizeof(*p1));
	printf("sizeof long p1:%lu\n",sizeof(p1));
	printf("sizeof long p2:%lu\n",sizeof(p1));
	printf("sizeof long p3:%lu\n",sizeof(p1));
	printf("sizeof long p4:%lu\n",sizeof(p1));
}
