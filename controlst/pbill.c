#include<stdio.h>
int main()
{
	int u;
	printf("Enter the Unit of Power: ");
	scanf("%d",&u);
	if(u<=200)
		printf("Price :%.2f\n",u*0.5);
	else
		if(u<=400)
			printf("Price :%.2f\n",100+ 0.65*(float)(u-200));
		else
			if(u<=600)
				printf("Price :%.2f\n",230+0.8*(u-400));
			else
				printf("Price :%.2f\n",390+1.0*(u-600));
}
