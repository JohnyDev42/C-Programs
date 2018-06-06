#include<stdio.h>
int main()
{
	int i,m,n,k=0;
	printf("Enter two numbers to multiply\n");
	scanf("%d%d",&m,&n);
	for(i=1;i<=n;i++)
		k+=m;
	printf("Multiplied value= %d\n",k);
	return 0;
}


