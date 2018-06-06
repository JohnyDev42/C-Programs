/*1+1/4+1/9+1/16+....*/

#include<stdio.h>
float series(int);
int main()
{
	int n;
	printf("Enter the range:");
	scanf("%d",&n);
	printf("Sum=%f\n",series(n));
	return 0;
}
float  series(int n)
{
	int i;
	float sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=1/(float)(i*i);
//		printf("%f\n",sum);
	}
	return sum;
}
