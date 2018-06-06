#include<stdio.h>
#include<limits.h>
int main()
{
	int n,a,i=1,big,small;
	printf("Enter the range of Numbers & a");
	scanf("%d",&n);
	big=INT_MIN;
	small=INT_MAX;
	printf("Enter the Numbers:\n");
	while(i<=n)
	{
		
		scanf("%d",&a);
		if(a<small)
			small=a;
		if(a>big)
			big=a;
		i++;
	}
	printf("Smallest is %d\nBiggest is %d\n",small,big);
}

