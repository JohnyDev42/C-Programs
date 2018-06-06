#include<stdio.h>
int main()
{
	int n;
	char d;
	char month[13][50]={"No Month","January","February","March","April","May","June","July","August","September","October","November","December"};
MONTH:
	printf("Enter the Month Number:");
	scanf("%d",&n);
	printf("%s\n",month[n]);
	printf("Do you want to check again ?");
	getchar();
	scanf("%c",&d);

	if(d=='y')
	{
		goto MONTH;
	}
	else
	return 0;
}
