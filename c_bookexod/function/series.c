/*x-x^3/3!+x^5/5!-x^7/7!+......=? */


#include<stdio.h>
double series(float x,int n);
long int fact(int);
double power(float,int);
int main()
{
	int n;
	float x;
	printf("Enter the value of x:");
	scanf("%f",&x);
	printf("Enter the range:");
	scanf("%d",&n);
	printf("The sum of Series is:%lf",series(x,n));
	return 0;
}
double series(float x,int n)
{
	int i,j,sign=1;
	float term,sum=0;
	for(i=1;i<n;i++)
	{
		sign=(i%2==0)?-1:1;
		j=2*i-1;
		term=sign*power(x,j)/fact(j);
		sum+=term;
	}
	return sum;
}
long int fact(int n)
{
	int i;
	long int f=1;
	if(n==0)
		return 1;
	for(i=n;i>1;i--)
		f=f*i;
	return f;
}
double power(float x,int n)
{
	int i;
	float p=1;
	for(i=1;i<=n;i++)
		p=p*x;
	return p;
}
