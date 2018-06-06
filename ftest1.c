#include<stdio.h>
int main()
{
//	int diff(int,int);
	int a,b,dif;
	printf("Enter the value of a & b:\n");
	scanf("%d%d",&a,&b);
	dif=diff(a,b);
	printf("Difference=%d\n",dif);
	diff(int p,int q)
	{
		return p-q;
	}
}
