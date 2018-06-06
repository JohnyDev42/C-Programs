#include<stdio.h>
#include "displayBin.c"
int ToDate( int m,int d,int y)
{
	y=y-1900;
	d=d<<7;
	m=m<<12;
	return (y|d|m);
}
int extractMonth(int a)
{
	return (a>>12);
}
int extractDay(int a)
{
	a=a>>7;
	for(int i=5;i<32;i++)
		a=a&(~(0x01<<i));
	return a;
}
int extractYear(int a)
{
	for(int i=7;i<32;i++)
		a=a&(~(0x01<<i));
	return (a)+1900;
}

int main()
{
	int a,d,m,y;
	printf("Enter the Date(d/m/y):");
	scanf("%d%*[/-]%d%*[/-]%d",&d,&m,&y);
	a=ToDate(m,d,y);
	displayBin(a);
	printf("\n");
	printf("Month:%d\n",extractMonth(a));
	printf("Day:%d\n",extractDay(a));
	printf("Year:%d\n",extractYear(a));
}


