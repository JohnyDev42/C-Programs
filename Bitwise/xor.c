/* xor operation w/o using '^'operator */
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	printf("Result:%d\n",((~x)&y)|(x&(~y)));

}
