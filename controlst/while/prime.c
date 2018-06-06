#include<stdio.h>
int main()
{
	int a,i=2,n=1;
	printf("Enter the Number:");
	scanf("%d",&a);
	while(i<a)
	{
		if(a%i==0)
			n=0;
		i++;
	}
	if(n==0)
	printf("Not Prime\n");
	else
		printf("Prime \n");
}
