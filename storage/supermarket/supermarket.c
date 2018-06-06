#include<stdio.h>
#include "super.c"
#include "stock.c"
#include "pur.c"
#include "sell.c"
int st=100,pr,se;
int main()
{
	int n,ts,tp;
		printf("Available Stock: %d\n",stock(st));
		printf("Total Purchase: %d\n",pr);
		printf("Total Sell: %d\n",se);
		printf("**************\n");
		do
		{
		printf("Enter the choice\n1.Check Available stock\n2.Purchase Items\n3.Sell Items\n4.Close Supermarket\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("Available stock: %d\n",stock(st));
			       printf("****************\n\n");
			       break;
			case 2:printf("Max Items can be Purchased: %d\n",100-st);
			       printf("Enter the no. of Items: \n");
			       scanf("%d",&pr);
			       tp=pur(pr);
			       printf("Stock left: %d\n",st);
			       printf("*********************\n\n");
			       break;
			case 3:printf("Max Items can be Sold: %d\n",st);

			       printf("Enter the No. of Items to sell: \n");
			       scanf("%d",&se);
			       ts=sell(se);
			       printf("Stock left: %d\n\n",st);
			       printf("*******************\n\n");
			       break;
			case 4:
			       break;
			default:printf("Enter a valid Choice...\n");
		}
		}while(n<4&&n>0);
		printf("SuperMarket Closed\nTodays Details:\n");
		printf("Available stock: %d\n",stock(st));
		printf("Total Purchased: %d\n",tp);
		printf("Total Sold: %d\n",ts);
		return 0;
}
