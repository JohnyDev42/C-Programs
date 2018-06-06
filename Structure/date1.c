#include<stdio.h>
#include"date.h"
#include "validate.c"
int daysInMonth(int,int);
int leap=0,i=1,maxDay=0;
int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
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
	if((dt.y)%4==0&&((dt.y)%100==0||(dt.y)%400==0))
		arr[2]=29;
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
	maxDay=arr[dt.m];
	while(dt.d>maxDay)
	{

		dt.d-=maxDay;
		dt.m+=1;
		if(dt.m==13)
		{
			dt.m=1;
			dt.y+=1;
		}
		if(dt.y%4==0&&(dt.y%100==0||dt.y%400==0))
			arr[2]=29;
		maxDay=arr[dt.m];
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
		if(dt.m==0)
		{
			dt.m=12;
			dt.y-=1;
		}
		if(dt.y%4==0&&(dt.y%100==0||dt.y%400==0))
			arr[2]=29;
	maxDay=arr[dt.m];
	dt.d=maxDay-a;
	while(a>=maxDay)
	{
		a-=maxDay;
		dt.m-=1;
		if(dt.m==0)
		{
			dt.m=12;
			dt.y-=1;
		}
		if(dt.y%4==0&&(dt.y%100==0||dt.y%400==0))
			arr[2]=29;
		maxDay=arr[dt.m];
		dt.d=maxDay-a;
	}
	}
}
