#include<stdio.h>
int fun();
int fun1();
static int t;
static char a,b;
int main()
{
	int i,n,j,m;
	printf("Enter how many times you want to call the function from main: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		fun();
//	printf("I am called %d%c%c\n",t,a,b);
	printf("Enter how many times you want to call from fun1():\n");
	scanf("%d",&m);
	for(j=1;j<=m;j++)
		fun1();
//	printf("I am called %d%c%c\n",t,a,b);
	return 0;
}
int fun1()
{
	fun();
}
int fun()
{
	int s;
//	char a,b;
	t++;
	s=t;
	if(s>100)
	{
		s=t%100;
	}
	if((s==1)||((s%10==1)&&(s>20)))
	{
		a='s';
		b='t';
	}
	else
		if((s==2)||((s%10==2)&&(s>20)))
		{
			a='n';
			b='d';
		}
		else
			if((s==3)||((s%10==3)&&(s>20)))
			{
				a='r';
				b='d';
			}
			else
			{
				a='t';
				b='h';
			}
	printf("I am called %d%c%c times\n",t,a,b);
	return t;
}

