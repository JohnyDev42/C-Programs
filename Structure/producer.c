#include<stdio.h>
struct PROD
{
	char *name;
	int oil;
	int dal;
	int rice;
	int wheat;
	int spice;
	int total;
}p;
void consumer(struct PROD p);
void consumer1(struct PROD *p);
int main()
{

	p.name="Shree General Shop";
	printf("Enter the price of oil,dal rice,wheat,spice:\n");
	scanf("%d%d%d%d%d",&p.oil,&p.dal,&p.rice,&p.wheat,&p.spice);
	p.total=p.oil+p.dal+p.rice+p.wheat+p.spice;
	consumer(p);
	consumer1(&p);	
}
