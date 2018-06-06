#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include "mystricmp.c"
//#define SWAP {temp=argv[c];argv[c]=argv[j];argv[j]=temp;}
void swap(int,char *argv[]);
void iswap(int,char *argv[]);
void reverse(int,char *argv[]);
void SWAP(char **,char **);
int i=1,j,c;
char *temp;
int main(int argc,char *argv[])
{int in=0,re=0;
	while(argv[i][0]=='-')
		i++;
	while((c=getopt(argc,argv,"ir"))!=-1)
			{
				switch(c)
				{
					case 'i':in=1;
						break;
					case 'r':re=1;
						break;
					default:return 0;
					}
			}
	if(in&&re)
	{
		iswap(argc,argv);
		reverse(argc,argv);
		for(i;i<argc;i++)
			printf("%s ",argv[i]);
	}
	else
		if(!in&&re)
	{
		swap(argc,argv);
		reverse(argc,argv);
		for(i;i<argc;i++)
			printf("%s ",argv[i]);
	}
	else
		if(!re&&in)
	{
		iswap(argc,argv);
		for(i;i<argc;i++)
		printf("%s ",argv[i]);	
	}
	else
	{
		swap(argc,argv);
		for(i;i<argc;i++)
			printf("%s ",argv[i]);
	}printf("\n");
}		
void swap(int argc,char *argv[])
{
	for(c=i;c<argc-1;c++)
		for(j=c+1;j<argc;j++)
			if(strcmp(argv[c],argv[j])>0)
				SWAP(&argv[c],&argv[j]);
}
void iswap(int argc,char *argv[])
{
	for(c=i;c<argc-1;c++)
		{	
			for(j=c+1;j<argc;j++)
				if(stricmp(argv[c],argv[j])>0)
				SWAP(&argv[c],&argv[j]);
		}
}
void reverse(int argc,char *argv[])
{
	for(c=i,j=argc-1;c<j;c++,j--)
		SWAP(&argv[c],&argv[j]);
}
void SWAP(char **ptr1,char **ptr2)
{
	char *temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
