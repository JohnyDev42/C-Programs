/* Program returning Structure pointer from function...*/
#include<stdio.h>

struct STU
{
	char name[100];
	int age;
}s1,s2;
struct STU * elder(struct STU *,struct STU *);
int main()
{
	printf("Enter the Name & age of Student1:\n");
	getchar();
	fgets(s1.name,100,stdin);
	scanf("%d",&s1.age);
//	getchar();
	printf("Enter the Name & age of Student2:\n");
	fgets(s2.name,100,stdin);
	scanf("%d",&s2.age);
	printf("Elder student is %s & age is \n",elder(&s1,&s2)->name);
}
struct STU * elder(struct STU *st1,struct STU *st2)
{

	return (*st1).age>(*st2).age?st1:st2;
}
