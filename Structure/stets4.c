#include<stdio.h>
typedef struct DATE
{
	int d,m,y;
}DATE;
int main()
{
	typedef struct STU
	{
		int x;
		char name[10];
		DATE DOB;
	}STUDENT;
	STUDENT s1;
	scanf("%d%s%d%d%d",&s1.x,s1.name,&s1.DOB.d,&s1.DOB.m,&s1.DOB.y);
	printf("ID:%d\nName:%s\nDOB:%d/%d/%d\n",s1.x,s1.name,s1.DOB.d,s1.DOB.m,s1.DOB.y);
	
}
