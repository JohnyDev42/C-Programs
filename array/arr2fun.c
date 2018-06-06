#include<stdio.h>
const int roll=4;
const int sub=3;
void display(float marks[roll][sub]);
int main()
{
	float marks[4][3]={
		{50.5,65.5,39.5},
		{60.5,48.6,48.5},
		{54.6,46.2,63.5},
		{46.7,76.3,34.8}};
	display(marks);
	return 0;
}
void display(float stdmarks[roll][sub])
{
	int i,j;
	for(i=0;i<roll;i++)
		{
			printf("\nRoll No.:%d",i);
			for(j=0;j<sub;j++)
				printf("%10.2f ",stdmarks[i][j]);
		}
}
