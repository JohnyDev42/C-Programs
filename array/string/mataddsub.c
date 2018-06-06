#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the rows & columns of matrices:\n");
	scanf("%d%d",&m,&n);
	int mat1[n][n],mat2[m][n];
	printf("Matrix-1:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Value for mat1[%d][%d]:",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Matrix-2:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Values for mat2[%d][%d]:",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}

	printf("Matrix-1\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix-2\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",mat2[i][j]);
		}
		printf("\n");
	}

	printf("Mat1 + Mat2 =\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",mat1[i][j]+mat2[i][j]);
		}
		printf("\n");
	}
	printf("Mat1 - Mat2 =\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",mat1[i][j]-mat2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
