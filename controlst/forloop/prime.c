#include<stdio.h>
int main()
{
	int n,i,c=1;
	printf("Enter the Number: ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			c=0;
	}
	if(c==1)
		printf("Its Prime\n");
	else
		printf("Its Not Prime\n");
}
