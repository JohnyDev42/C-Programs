#include<stdio.h>
double power(int,int);
long mult(int,int);
int main()
{
	int m,n;
	printf("Enter the value for m & n (m^n): ");
	scanf("%d%d",&m,&n);
	printf("The power result is %lf\n",power(m,n));
	return 0;
}
double power(int m,int n)
{
	float p;
	if(m==0)
		return 0;
	if(n==0)
		return 1;
	if(m<0&&n%2&&n>0)
	{
		m=-m;
		p=mult(m,n);
		return -p;
	}
	if(m<0&&n%2==0&&n>0)
	{
		m=-m;
		p=mult(m,n);
		return p;
	}
	if(m<0&&n<0&&n%2)
	{
		m=-m;
		n=-n;
		p=mult(m,n);
		return -(1/p);
	}
	if(m<0&&n<0&&n%2==0)
	{
		n=-n;
		m=-m;
		p=mult(m,n);
		return 1/p;
	}
	if(m>0&&n>0)
	{
		p=mult(m,n);
		return p;
	}
	if(m>0&&n<0)
	{
		n=-n;
		p=mult(m,n);
		return (1/p);
	}
}	



