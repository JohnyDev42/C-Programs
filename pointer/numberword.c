#include<stdio.h>
void numword(int *,int);
int main()
{ 

	int n,r,i,arr[50],c=0,rem;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		rem=n%10;
		arr[i]=rem;
		c++;
		n=n/10;
	}
	numword(arr,c);

}
void numword(int *n,int r)
{
	int i;
	for(i=r;i--;)
	{
		if(n[i]==0)
			printf("Zero ");
		else
			if(n[i]==1)
				printf("One ");
			else
				if(n[i]==2)
					printf("Two ");
				else
					if(n[i]==3)
						printf("Three ");
					else
						if(n[i]==4)
							printf("Four ");
						else
							if(n[i]==5)
								printf("Five ");
							else
								if(n[i]==6)
									printf("Six ");
								else
									if(n[i]==7)
										printf("Seven ");
									else
										if(n[i]==8)
											printf("Eight ");
										else
											if(n[i]==9)
												printf("Nine ");
	}
	printf("\n");
}
