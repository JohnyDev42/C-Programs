#include<stdio.h>
int main()
{
	int i,j,n,p;
	printf("Enter the No. of rows/col.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
			printf("   ");
		p=n-i+1;
		for(j=1;j<=n-i+1;j++)
			printf("%3d",p++);
		p=p-2;
		for(j=1;j<=n-i;j++)
			printf("%3d",p--);
		printf("\n");
	}
	return 0;
}

