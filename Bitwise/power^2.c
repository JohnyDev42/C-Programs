/* Best logic to find power of 2 */
#include<stdio.h>
int main()
{
	int x,count=0;
	printf("Enter a Number:");
	scanf("%d",&x);
	while(x!=0)
	{
		x=x&(x-1);
		count++;
	}
	if(count==1)
		printf("Power of 2\n");
	else
		printf("Not Power of 2\n");
}
