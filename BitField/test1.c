#include<stdio.h>
struct DATE
{
	unsigned int d:5;
	unsigned int m:4;
	unsigned int y;
};
int main()
{
	struct DATE dt={31,2,2018};
	printf("size of Date:%lu\n",sizeof(dt));
	printf("DAte is %d/%d/%d\n",dt.d,dt.m,dt.y);
}

