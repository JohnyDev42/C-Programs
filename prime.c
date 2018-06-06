#include<stdio.h>
#include<math.h>
int main()

{
int i,j,n,fl;
printf("Enter the value of n:");
scanf("%d",&n);
printf("Prime numbers are:");
for(i=1;i<n;i++)
{
	fl=0;
	for(j=2;j<=i/2;j++){
	if(i%j==0){
		fl=1;
		}
	}
		if(fl==0)
		printf("%d,",i);
		}
		
return 0;
}

