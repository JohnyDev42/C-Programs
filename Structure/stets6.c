#include<stdio.h>
typedef struct STU
{
	char name[10];
	int mark[10];
	int *ptr;
}STUDENT;
int main()
{
	STUDENT s,*ptr1;
	ptr1=&s;
	int x,i;
//	s.ptr=&x;
	ptr1->ptr=&x;
	scanf("%s",&ptr1->name);
	printf("Enter int array\n");
	for(i=0;i<5;i++)
		scanf("%d",&ptr1->mark[i]);
	printf("Enter value of x\n");
	scanf("%d",ptr1->ptr);
	printf("name:%s\nx=%d\nInt Array:\n",ptr1->name,*ptr1->ptr);
	for(i=0;i<5;i++)
		printf("%d\n",ptr1->mark[i]);
}
