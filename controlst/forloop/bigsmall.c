#include<stdio.h>
#include<limits.h>
int main()
{
	int n,i,a,big,small;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Enter the numbers: ");
	big=INT_MIN;
	small=INT_MAX;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(big<a)
			big=a;
		else(small>a)
			small=a;
	}
	printf("Biggest is %d\nSmallest is %d\n",big,small);
}



