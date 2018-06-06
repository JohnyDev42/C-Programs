#include<stdio.h>
#include<math.h>
int main()
{
	double n,f;
	printf("Enter the Number: ");
	scanf("%lf",&n);
	f=fmod(n,10);
	printf("Rem=%lf",f);
	printf("\n%lf\n",n/10);
}
