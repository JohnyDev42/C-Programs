#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two Numbers: ");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("Bigger is %d\n",a);
	else
		printf("Bigger is %d\n",b);
}
