#include<stdio.h>
int main()
{
	int d,m,y,i=1,leap=0;
	printf("Enter the date(dd/mm/yyyy): ");
	scanf("%d:%d:%d",&d,&m,&y);
	if(y%100!=0&&y%4==0||y%400==0)
		leap=1;
	if(d<=0||d>31||m>12||m<1||y<1000||y>3000)
		i=0;
	else
		if(m==4||m==6||m==9||m==11)
	{
		if(d==31)
		i=0;
	}
		else
			if(m==2&&(d==30||d==31))
					i=0;
					else

	if(m==2&&leap==0)
	{
		if(d==29)
		i=0;
	}
	if(i==1)
		printf("Valid\n");
		else
		printf("Invalid\n");
}

