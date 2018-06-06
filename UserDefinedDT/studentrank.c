#include<stdio.h>
typedef struct STU
{
	char name[10];
	int mark;
}STUDENT;
void printStu(STUDENT *);
void sortStu(STUDENT *);
int main()
{
	STUDENT s[10]={{"Preet",85},{"Rekha",76},{"Raja",68},{"Peter",34},{"Bob",56},{"Hari",25},{"Tittu",5},{"Sonu",88},{"Mona",20},{"Arun",95}};
	printStu(s);
}
void printStu(STUDENT *s)
{
	int i=0;
	sortStu(s);
	printf("Topper:%s\tMark:%d\n",s[0].name,s[0].mark);
	printf("Students Above 60%%>\n");
	while(s[i].mark>=60)
	{
		printf("%s\tMark:%d\n",s[i].name,s[i].mark);
		i++;
	}
	printf("Students Above 30%%>\n");
	while(s[i].mark>30)
	{
		printf("%s\tMark:%d\n",s[i].name,s[i].mark);
		i++;
	}
	printf("Students Below 30%%>\n");
	while(s[i].mark<30&&i<10)
	{
		printf("%s\tMark:%d\n",s[i].name,s[i].mark);
		i++;
	}
	printf("***Students Rankwise***\n");
	for(i=0;i<10;i++)
	{
		printf("Rank:%d\t%s\tMark:%d\n",i+1,s[i].name,s[i].mark);
	}
}
void sortStu(STUDENT *s)
{
	int i,j;
	STUDENT temp;
	for(i=0;i<9;i++)
		for(j=i+1;j<10;j++)
			if(s[i].mark<s[j].mark)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
}
