#include<stdio.h>
#include"date.h"
#include "validate.c"
int leap=0,i=1;
int main()
{
	void Add_days(int);
	int a,b;
	printf("Enter the date:\n");
	scanf("%d%d%d",&dt.d,&dt.m,&dt.y);
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
//	printf("Enter the days to subtract\n");
//	scanf("%d",&b);
//	Sub_days(b);
//	printf("After subtracting\nDate:%d/%d/%d\n",dt.d,dt.m,dt.y);
}
void Add_days(int a)
{
	int y,m=0,b=0,l=365,offset=0,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(dt.y%100!=0&&dt.y%4==0||dt.y%400==0)
	{
		l=366;
		month[2]=29;
	}

	for(i=1;i<dt.m;i++)
		offset=offset+month[i];
	offset=offset+dt.d;
	printf("off:%d\n",offset);
	a=offset+a;
	printf("a=%d\n",a);
	dt.d=0;
	dt.m=0;
	while(a>l)
	{
		if(dt.y%100!=0&&dt.y%4==0||dt.y%400==0)
	{
		a=a-366;
		(dt.y)++;
		l=366;
		month[2]=29;
	}
		else
		{
			a=a-365;
			l=365;
			(dt.y)++;
			month[2]=28;
		}
	}

	printf("a=%d\n",a);
	for(i=1;;i++)
	{
		if(a<=month[i])
			break;
		a=a-m;
		m=m+month[i];
		(dt.m)++;
		printf("a%d\n",a);
	}
	printf("%d\n",dt.d);

	dt.d=dt.d+a;
}
