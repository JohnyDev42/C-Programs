#include<stdio.h>
struct STU
{
	char name[10];
	int age;
}s1,s2;
char * elder(int *,int *);
int main()
{
	printf("Enter the name and age of Student1:\n");
	scanf("%s%d",s1.name,&s1.age);
	printf("Enter the name and age of Student2:\n");
	scanf("%s%d",s2.name,&s2.age);
	printf("%s is elder\n",elder(&s1.age,&s2.age));
}
char* elder(int *a,int *b)
{
	return *a>*b?s1.name:s2.name;
}
