#include<stdio.h>
int main()
{
	char name[]={'a','r','u','n',' ','k','u','m','a','r',' ','s','a','h','u','\n'};
	for(int i=0;;i++)
	{
		printf("%c",name[i]);
		if(name[i]=='\n')
			break;
	}
}
