/*Sum w/o using '+' */
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	printf("Result:%d\n",x-(~y)-1);
}
