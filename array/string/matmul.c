#include<stdio.h>
int main()
{
	int mul,k,l,sum,m1,n1,m2,n2,i,j;
AGAIN:
	printf("*For Matrix Multiplication Columns of Matrix-1 must EQUALS to Rows of Matrix-2*\n");
	printf("Enter the rows & columns of matrix-1:\n");
	scanf("%d%d",&m1,&n1);
	printf("Enter the Rows & Columns of Matrix-2:\n");
	scanf("%d%d",&m2,&n2);
	if(n1!=m2)
		goto AGAIN;
	int mat1[m1][n1],mat2[m2][n2],mat3[m1][n2];
	printf("Matrix-1:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("Value for mat1[%d][%d]:",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Matrix-2:\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("Values for mat2[%d][%d]:",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}

	printf("Matrix-1\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%5d",mat1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix-2\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%5d",mat2[i][j]);
		}
		printf("\n");
	}
//	mat3[][0]=0;
	
	printf("Mat1 * Mat2 =\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<n1;k++)
				mat3[i][j]=mat3[i][j]+(mat1[i][k]*mat2[k][j]);
		}
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
			printf("%5d",mat3[i][j]);
	
	printf("\n");
	}

	return 0;
}
