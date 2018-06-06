#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j=0;
	char name[100],abr[10];
	printf("Enter the Name: ");
	fgets(name,100,stdin);
	abr[0]=name[0];
	for(i=1;name[i]!='\0';i++)
	{
		if((name[i]==' ')&&(name[i+1]!=' '))
		{
			j++;
			abr[j]=name[i+1];
		}
	}
	
//	while((name[i]==' ')&&(name[i+1]!=' '))
	abr[++j]='\0';
	printf("Abbreviation :%s\n",abr);
}
