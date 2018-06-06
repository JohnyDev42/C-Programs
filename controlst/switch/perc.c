#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,m6,n;
	float per;
	printf("Enter the Marks: ");
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
	per=(float)(m1+m2+m3+m4+m5+m6)*100/600;
	printf("Percentage is %.2f\n",per);
	if(per>100){n=11;}
	else
		n=n/10;
	switch(n)
	{
		case 10:
		case 9:
		case 8:printf("Honors\n");
		       break;
		case 7:
		case 6:printf("Grade:'A'\n");
		       break;
		case 5:printf("Grade:'B'\n");
		       break;
		case 4:printf("Grade:'C'\n");
		       break;
		case 3:
		case 2:
		case 1:
		case 0:printf("Fail.....!!!!! Call Your Parents\n");
		       break;
	        default:printf("Dont be Over Smart \nEnter correct Marks");
	}
}

		       


