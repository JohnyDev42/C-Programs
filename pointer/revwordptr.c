#include<stdio.h>
int main()
{
	int i,j,l;
	char tmp[15];
	char *strptr[]={"american","kernel","megatrend","global","edge","master"},*temp=tmp;
	printf("Before reversing:\n");
	l=sizeof(strptr)/sizeof(strptr[i]);
	for(i=0;i<l;i++)
		printf("%s ",strptr[i]);
	printf("\nAfter reversing:\n");
	for(i=0,j=l-1;i<j;i++,j--)
	{
		temp=strptr[i];
		strptr[i]=strptr[j];
		strptr[j]=temp;
	}
	for(i=0;i<l;i++)
		printf("%s ",strptr[i]);
}
