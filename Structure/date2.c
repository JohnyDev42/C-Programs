#include<stdio.h>
#include"date.h"
#include "validate.c"
int daysInMonth(int,int);
int leap=0,i=1,maxDay=0;
int main()
{
	void Add_days(int);
	void Sub_days(int);
	int a,b;
	printf("Enter the date:\n");
	scanf("%d%*[/-]%d%*[/-]%d",&dt.d,&dt.m,&dt.y);
	IsValid(dt.d,dt.m,dt.y);
	if(i==0)
	{
		printf("Enter a valid Date...\n");
		return 0;
	}
	printf("Enter the days to add:\n");
	scanf("%d",&a);
	Add_days(a);
	printf("After adding\nDate:%d/%d/%d\n",dt.d,dt.m,dt.y);
	printf("Enter the days to subtract\n");
	scanf("%d",&b);
	Sub_days(b);
	printf("After subtracting\nDate:%d/%d/%d\n",dt.d,dt.m,dt.y);
}
void Add_days(int a)
{
	dt.d+=a;
	maxDay=daysInMonth(dt.m,dt.y);
	while(dt.d>maxDay)
	{
		dt.d-=maxDay;
		dt.m+=1;
		if(dt.m==13)
		{
			dt.m=1;
			dt.y+=1;
		}
		maxDay=daysInMonth(dt.m,dt.y);
	}
}
void Sub_days(int a)
{
	if(a<dt.d)
		dt.d=dt.d-a;
	else
	{
		a=a-dt.d;
		dt.m=dt.m-1;
		printf("a=%d\n",a);
		if(dt.m==0)
		{
			dt.m=12;
			dt.y-=1;
		}
	maxDay=daysInMonth(dt.m,dt.y);
	dt.d=maxDay-a;
	while(a>=maxDay)
	{
		a-=maxDay;
		printf("a=%d\n",a);
		dt.m-=1;
		if(dt.m==0)
		{
			dt.m=12;
			dt.y-=1;
		}
		maxDay=daysInMonth(dt.m,dt.y);
		dt.d=maxDay-a;
	}
	}
}
		
int daysInMonth(int m,int y)
{
	if(m==4||m==6||m==9||m==11)
		return 30;
	else
		if(m==2)
		{
			if(y%4==0&&(y%100==0||y%400==0))
				return 29;
			else
				return 28;
		}
		else
			return 31;
}
