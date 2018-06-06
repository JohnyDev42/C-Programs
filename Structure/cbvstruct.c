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
	void printstd(struct STU );
	struct STU s1={1,"PETER","SHAM",1,2,1999,"Embedded",6};
	s2.ID=2;
	printf("Enter the name,fname,DOB,course name and duration of student2:\n");
	scanf("%s%s%d%d%d%s%d",s2.name,s2.fname,&s2.d,&s2.m,&s2.y,&s2.CN,&s2.duration);
	printstd(s1);
	printstd(s2);

}
void printstd(struct STU s)
{

	printf("STudent ID:%d\nName:%s\nFName:%s\nDOB:%d/%d/%d\nCourse Name:%s\nDuration:%d\n",s.ID,s.name,s.fname,s.d,s.m,s.y,s.CN,s.duration);
	
}
