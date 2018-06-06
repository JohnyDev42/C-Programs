#include<stdio.h>
int main()
{
	int i,j,p;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i-1;j++)
			printf("  ");
		p=10;
		for(j=1;j<=6-i;j++)
			printf(" %d",p--);
		for(j=1;j<=1;j++)
			printf(" %d",5);
		p=6-i-1;
		for(j=1;j<=6-i;j++)
			printf(" %d",p--);
		printf("\n");
	}
	for(i=6,j=1;i<=6,j<=1;j++,i++)
		printf("            %d\n",6-j);
}


