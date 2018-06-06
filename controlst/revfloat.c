#include<stdio.h>
#include<math.h>
int main()
{
	float n,re=0,p,c,f;
	int m,rev=0,i=1,rem,b;
	printf("Enter the number: ");
	scanf("%f",&n);
	m=n;//integral
	p=n-m;//fractional
	while(m>0)
	{
		rem=m%10;
		rev=rev*10+rem;
	//	i*=10;
		m=m/10;
		
	}
	while(p>0)
	{
		re=re*0.1;
		c=p*10;
		b=c;
		f=b*0.1;
		re=re+f;
		p=c-b;
	}
	printf("Reverse=%d",rev);
	printf("Reverse=%f",re);
}
