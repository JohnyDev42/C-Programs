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
};
void consumer( struct PROD c)
{
	printf("Call By Value\n\n");
	printf("Retailor:%s\n***PRICE BILL***\nOIL  :%5d\nDAL  :%5d\nRICE :%5d\nWHEAT:%5d\nSPICE:%5d\n\nTOTAL:%5d\n",c.name,c.oil,c.dal,c.rice,c.wheat,c.spice,c.total);
}
void consumer1(struct PROD *c)
{
	printf("Call By Reference\n\n");
	printf("Retailor:%s\n***PRICE BILL***\nOIL  :%5d\nDAL  :%5d\nRICE :%5d\nWHEAT:%5d\nSPICE:%5d\n\nTOTAL:%5d\n",c->name,c->oil,c->dal,c->rice,c->wheat,c->spice,c->total);
}
