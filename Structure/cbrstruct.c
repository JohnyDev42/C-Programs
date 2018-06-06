#include<stdio.h>

struct STU
	{
		int ID;
		char name[10];
		char fname[10];
		int d,m,y;
		char CN[10];
		int duration;
	}s2;
int main()
{
	void printstd(struct STU *);
	struct STU s1={1,"PETER","SHAM",1,2,1999,"Embedded",6};
	printf("STudent ID:%d\nName:%s\nFName:%s\nDOB:%d/%d/%d\nCourse Name:%s\nDuration:%d\n",s1.ID,s1.name,s1.fname,s1.d,s1.m,s1.y,s1.CN,s1.duration);
	s2.ID=2;
	printstd(&s2);

}
void printstd(struct STU *s)
{
	scanf("%s%s%d%d%d%s%d",&(*s).name,&(*s).fname,&(*s).d,&(*s).m,&(*s).y,&(*s).CN,&(*s).duration);
	printf("STudent ID:%d\nName:%s\nFName:%s\nDOB:%d/%d/%d\nCourse Name:%s\nDuration:%d\n",(*s).ID,(*s).name,(*s).fname,(*s).d,(*s).m,(*s).y,(*s).CN,(*s).duration);
}
