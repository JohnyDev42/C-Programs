/*Inch to cm and cm to Inch */
#include<stdio.h>
float convert(int,char);
int main()
{
	int m;
	char ch;
	printf("Enter the value you want to convert: ");
	scanf("%d%c",&m,&ch);
	if(ch=='i')
	printf("The converted value is:%f cm\n",convert(m,ch));
	else
		printf("The converted value is:%f inch\n",convert(m,ch));
	return 0;
}
float convert(int m,char ch)
{
	if(ch=='i')
		m=m*2.5;
	if(ch=='c')
		m=m/2.5;
	return m;
}
