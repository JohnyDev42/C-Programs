/*Program for set,clear & toggle a bit */
#include<stdio.h>
#define SET_BIT(x,p) (x|(0x01<<p))
#define CLEAR_BIT(x,p) (x&~(0x01<<p))
#define TOGGLE_BIT(x,p) (x^(0x01<<p))
int main()
{
	int x,p;
	printf("Enter the Number:");
	scanf("%d",&x);
	printf("Enter the Position:");
	scanf("%d",&p);
	printf("After SET:%d\n",SET_BIT(x,p));
	printf("After CLEAR:%d\n",CLEAR_BIT(x,p));
	printf("After TOGGLE:%d\n",TOGGLE_BIT(x,p));
}
