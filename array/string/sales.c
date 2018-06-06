#include<stdio.h>
int main()
{
	int sales[3][4],i,j,ti=0,items;
	for(i=0;i<3;i++)
	{

		for(j=0;j<4;j++)
		{
			printf("Enter the Sales of person-%d Item-%d:",(i+1),(j+1));
			scanf("%d",&sales[i][j]);
		}
	}

	printf("The details of sales:\n");
	printf("Rows are persons & Columns are Items\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%5d",sales[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		int sum=0;
		for(j=0;j<4;j++)
		{
			sum=sum+sales[i][j];
		}
		printf("Total Sales of person-%d is %d\n",(i+1),sum);
	}
	for(i=0;i<4;i++)
	{
		items=0;
		for(j=0;j<3;j++)
		{
			items=items+sales[j][i];
		}
		printf("Total Item-%d sale is %d\n",(i+1),items);
		ti+=items;
	}
	printf("Total sale is %d\n",ti);
}
