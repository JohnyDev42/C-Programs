#include<stdio.h>
void pfact(int);
int main()
{
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	printf("Prime Factors: ");
	pfact(n);
	printf("\n");
	return 0;
}
void pfact(int n)
{
	int i;
	for(i=2;n!=1;i++)
		while(n%i==0)
		{
			printf("%d ",i);
			n=n/i;
		}
}
