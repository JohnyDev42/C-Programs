#include<stdio.h>
 struct STU
{
	char *name;
	int age;
	int mark;
};
int main()
{

	struct STU s1={.age=15,.name="Sana"};
	printf("%s %d\n",s1.name,s1.age);
}
