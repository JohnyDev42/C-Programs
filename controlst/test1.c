#include<stdio.h>
int main()
{
	char *ptr="Science";
	int num=5,i=1,y=17;
	printf(num>10?"%s\n":"Computer %s\n",ptr);
	switch(i)
	{
		printf("Hello\n");
		case 1:printf("first\n");
		       break;
		case 2:printf("Second\n");
	}
/*	float a=0.7;
	if(a<0.6999999)
		printf("First\n");
	else

		printf("Second\n");
	if(a<0.699998)
		printf("Third\n");
	else
		printf("Fourth\n");*/
	if(!y)
		printf("y=%d\n",!y);
	else
		printf("y=%d\n",y);
}
