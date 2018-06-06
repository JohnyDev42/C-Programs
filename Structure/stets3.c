#include<stdio.h>
typedef struct STU
{
	char name[10];
	int mark[10];
	int *ptr;
}STUDENT;
int main()
{
	STUDENT s1;
	int x,i;
	s1.ptr=&x;
	scanf("%s",s1.name);
	printf("Enter int array\n");
	for(i=0;i<5;i++)
		scanf("%d",&s1.mark[i]);
	printf("Enter value of x\n");
	scanf("%d",s1.ptr);
	printf("name:%s\nx=%d\nInt Array:\n",s1.name,*s1.ptr);
	for(i=0;i<5;i++)
		printf("%d\n",s1.mark[i]);
}
