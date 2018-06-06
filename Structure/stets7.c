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
		DATE *DOJ;
	}STUDENT;
	STUDENT s,*ptr;
	ptr=&s;
	printf("Enter the ID,Neme,DOB,DOJ\n");
	scanf("%d%s%d%d%d%d%d%d",&ptr->x,&ptr->name,&ptr->DOB.d,&ptr->DOB.m,&ptr->DOB.y,&ptr->DOJ->d,&ptr->DOJ->m,&ptr->DOJ->y);
	printf("ID:%d\nName:%s\nDOB:%d/%d/%d\nDOJ:%d/%d/%d\n",ptr->x,ptr->name,ptr->DOB.d,ptr->DOB.m,ptr->DOB.y,ptr->DOJ->d,ptr->DOJ->m,ptr->DOJ->y);
	
}
