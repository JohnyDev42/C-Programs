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
	STUDENT s,*ptr;
	ptr=&s;
//	scanf("%c%d%f%lf",&ptr->ch,&ptr->x,&ptr->fl,&ptr->dl);
	scanf("%c%d%f%lf",&(*ptr).ch,&(*ptr).x,&(*ptr).fl,&(*ptr).dl);
//	printf("%c\t%d\t%f\t%lf\n",ptr->ch,ptr->x,ptr->fl,ptr->dl);
	printf("%c\t%d\t%f\t%lf\n",(*ptr).ch,(*ptr).x,(*ptr).fl,(*ptr).dl);
}
