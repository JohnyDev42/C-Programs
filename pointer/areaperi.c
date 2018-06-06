#include<stdio.h>
void circle(int,float *,float *);
int main()
{
	int r;
	float area,per;
	printf("Enter radius:");
	scanf("%d",&r);
	circle(r,&area,&per);
	printf("Area=%f\nPerimeter=%f\n",area,per);
}
void circle(int r,float *pta,float *ptp)
{
	*pta=3.14*r*r;
	*ptp=2*3.14*r;

}


