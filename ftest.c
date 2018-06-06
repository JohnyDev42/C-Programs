#include<stdio.h>
small(int,int);
main()
{
	int a,b;
	printf("Enter value of a & b:\n");
	scanf("%d%d",&a,&b);
	small(&a,&b);
}
small(int p,int r)
{
	if(p==r)
		printf("Equal\n");
	else
		if(p<r)
			printf("Smaller %d\n",p);
		else
			printf("smaller %d\n",r);
}
