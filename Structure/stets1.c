#include<stdio.h>
typedef struct STU
{
	char ch;
	int x;
	float fl;
	double dl;
}STUDENT;
int main()
{
	scan(STUDENT);
	print(STUDENT);
	STUDENT s1={'a',1,2.2f,127.78};
	STUDENT s2;
	print(s1);
	scan(s2);
	print(s2);	
}
scan(STUDENT s)
{
	scanf("%c%d%f%lf",&s->ch,&s->x,&s->fl,&s->dl);
}
print(STUDENT s)
{
	printf("%c\t%d\t%f\t%lf\n",s->ch,s->x,s->fl,s->dl);
}
