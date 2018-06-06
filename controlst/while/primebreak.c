#include<stdio.h>
int main()
{
	int n,i=2,c=0;
	printf("Enter the Number: ");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
			break;
		c++;
		i++;
	}
	if(i>=n)
		printf("Prime\n");
	else
		printf("Not Prime\n");
}
