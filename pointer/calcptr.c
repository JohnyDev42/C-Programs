#include<stdio.h>
void calc(int,int,int *,int *,int *,int *,int *);
int main()
{
	int a,b,sum,sub,mul,div,mod;
	printf("Enter two integers:");
	scanf("%d%d",&a,&b);
	calc(a,b,&sum,&sub,&mul,&div,&mod);
	printf("Sum=%d\nSubtraction=%d\nMultiplication=%d\nDivision=%d\nModulus=%d\n",sum,sub,mul,div,mod);

}
void calc(int a,int b,int *padd,int *psub,int *pmul,int *pdiv,int *pmod)
{
	*padd=a+b;
	*psub=a-b;
	*pmul=a*b;
	*pdiv=a/b;
	*pmod=a%b;
}
