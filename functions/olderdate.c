#include<stdio.h>
int olderdate(int,int,int,int,int,int);
int main()
{
	int d1,d2,m1,m2,y1,y2,i;
	printf("Enter the 1st date: ");
	scanf("%d/%d/%d",&d1,&m1,&y1);
	printf("Enter the 2nd date: ");
	scanf("%d/%d/%d",&d2,&m2,&y2);
	i=olderdate(d1,m1,y1,d2,m2,y2);
	if(i==1)
		printf("%d/%d/%d is Older date\n",d2,m2,y2);
	if(i==2)
		printf("%d/%d/%d is Older Date\n",d1,m1,y1);
	return 0;
}
int olderdate(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int i;
	if(y1>y2)
		i=1;
		else
			i=2;
		if(y1==y2)
		{
			if(m1>m2)
				i=1;
			else
				i=2;
		}
		if(y1==y2&&m1==m2)
		{
				if(d1>d2)
					i=1;
					else
						i=2;
		}
		return i;
}

