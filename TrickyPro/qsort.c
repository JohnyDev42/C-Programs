#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct STUD
{
	int roll;
	int mark;
	char name[30];
};
int sort_rl(struct STUD *,struct STUD*);
int sort_mark(struct STUD*,struct STUD*);
int sort_name(struct STUD *,struct STUD *);
int main()
{
	static struct STUD ss[]={{4,33,"Karan"},{6,45,"Alia"},{3,76,"Madhuri"},{2,78,"Prakash"},{7,66,"Anil"}};
	int x,w;
	w=sizeof(struct STUD);
	printf("In Order of Roll Numbers:\n");
	qsort(ss,5,w,sort_rl);
	for(x=0;x<5;x++)
		printf("%d %s %d\n",ss[x].roll,ss[x].name,ss[x].mark);
	printf("In order of Marks:\n");
	qsort(ss,5,w,sort_mark);
	for(x=0;x<5;x++)
		printf("%d %s %d\n",ss[x].mark,ss[x].name,ss[x].roll);
	printf("In Order of Names:\n");
	qsort(ss,5,w,sort_name);
	for(x=0;x<5;x++)
		printf("%s %d %d\n",ss[x].name,ss[x].roll,ss[x].mark);
}
int sort_rl(struct STUD *t1,struct STUD *t2)
{
	return (t1->roll-t2->roll);
}
int sort_mark(struct STUD *t1,struct STUD *t2)
{
	return (t1->mark-t2->mark);
}
int sort_name(struct STUD *t1,struct STUD *t2)
{
	return (strcmp(t1->name,t2->name));
}
