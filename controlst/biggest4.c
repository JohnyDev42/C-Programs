#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the 4 Numbers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
				printf("Biggest is %d\n",a);
			else
				printf("Biggest is %d\n",d);
		}
		else
			if(c>d)
				printf("Biggest is %d\n",c);
			else
				printf("Biggset is %d\n",d);
	}
	else
		if(b>c)
		{
		if(b>d)
		printf("Biggest is %d\n",b);
		else
			printf("Biggest is %d\n",d);
		}
	else
	  	if(c>d)
		printf("Biggest is %d\n",c);	
		else
			printf("Biggest is %d\n",d);

}

