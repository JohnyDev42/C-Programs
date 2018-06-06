#include<stdio.h>
#include<math.h>
int main()
{
	double n,r,f,l,g,j=0.1,re,si=0;
	int m,d=0,i,k,p,s,z=1,w=0;
	printf("Enter the Number: ");
	scanf("%lf",&n);
	p=n;
	r=n-p;
	while(n>=1)
	{

	f=fmod(n,10);
	m=f;
	d=d*10+m;
	n=n/10;
	}
	g=d;
	printf("g=%lf\n",g);
	for(i=0;d>0;i++)
	{
		k=d%10;
		g=0.1*g;
		d=d/10;
	}
	printf("g=%lf\n",g);
	while(r>0)
	{
		re=r*10;
		s=re;
		si+=s*z;
		printf("si=%lf\n",si);
		z*=10;
		r=re-s;
		if(s==0)
			break;
	}
//	printf("si=%d\n",si);
	printf("Reverse=%lf\n",si+g);
}
