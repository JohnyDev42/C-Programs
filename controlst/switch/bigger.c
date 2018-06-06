#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two Numbers: ");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 0:printf("Bigger is %d\n",b);
		       break;
		case 1:printf("Bigger is %d\n",a);
	}
}





