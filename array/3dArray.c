/* 	Declare a three dimensional array of elements for sales details of a store, for x number of items, sold by y number of sales men , for a period of z number of days. Take the sales values as input and print the array in matrix form for each day. Also find and print the following :
	1 ) Total sales by each sales man per day.
	2 ) Total sales of each item per day.
	3 ) Total sales made by each sales man for x number of days.
	4 ) Total sales of each item for x number of days.
	5 ) Total sales of the super market for x days.*/


#include<stdio.h>
int main()
{
	int arr[3][2][7],i,j,k;
	printf("Enter the No. of sales for Items,persons & dates:\n");
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			for(k=0;k<7;k++)
				scanf("%d",&arr[i][j][k]);

	printf("Sales Values for Items,Persons & Days:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<7;k++)
				printf("%3d",arr[i][j][k]);
		printf("\n");
		}
		printf("\n");

	}
	printf("Total Sales Made By each Sales man per Day:\n");
	for(i=0;i<3;)
}

