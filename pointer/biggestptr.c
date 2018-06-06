#include<stdio.h>
int main()
{
	int x,y,z,*p1=&x,*p2=&y,*p3=&z,big;
	printf("Enter the values of 3 Integers:\n");
	scanf("%d%d%d",p1,p2,p3);
	if(*p1>*p2)
	{
		if(*p1>*p3)	
			big=*p1;
	}
	else
		if(*p2>*p3)
			big=*p2;
		else
			big=*p3;
	printf("Biggest is %d\n",big);
}
