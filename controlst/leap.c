#include<stdio.h>
int main()
{
	int yr;
	printf("Enter the Year: ");
	scanf("%d",&yr);
	if(yr%100)
	{
		if(yr%4)
			printf("Not LeapYear\n");
		else
			printf("LeapYear\n");
	}
	else
		if(yr%400)
			printf("Not LeapYear\n");
		else
			printf("LeapYear\n");
}

