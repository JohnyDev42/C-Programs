#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **a,i,j,rows,cols;
	printf("Enter the row number:");
	scanf("%d",&rows);
	a=(int **)malloc(rows*sizeof(int));
	printf("Enter the columns:");
	scanf("%d",&cols);
	for(i=0;i<rows;i++)
	a[i]=(int *)malloc(cols*sizeof(int));
	printf("Enter arr elemets:\n");
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			scanf("%d",&a[i][j]);
	printf("Entered arr is:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
			printf("%5d",a[i][j]);
	printf("\n");
	}
	printf("\n");
}

