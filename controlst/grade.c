#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,m6;
	float per;
	printf("Enter the marks: ");
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
	per=(float)(m1+m2+m3+m4+m5+m6)*100/600;
	printf("Percentage is %.2f\n",per);
	if(per>=30&&per<40)
		printf("'C'Grade ");
	else
		if(per>=40&&per<50)
			printf("'B' Grade");
		else
			if(per>=50&&per<60)
				printf("'A' Grade");
			else
				if(per>60)
					printf("Honors");
				else
					printf("Fail");
}
