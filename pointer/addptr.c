#include<stdio.h>
int main()
{
	int x,y,*p1=&x,*p2=&y;
	printf("Enter the value of x & y\n");
	scanf("%d%d",&x,&y);
	printf("*p1 + *p2=%d\n",*p1+*p2);
}
