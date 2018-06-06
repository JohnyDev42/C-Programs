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
	STUDENT s1;
	scanf("%c%d%f%lf",&s1.ch,&s1.x,&s1.fl,&s1.dl);
	printf("%c\t%d\t%f\t%lf\n",s1.ch,s1.x,s1.fl,s1.dl);
}
