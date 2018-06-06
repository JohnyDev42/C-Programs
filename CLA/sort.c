#include<stdio.h>
#include<string.h>
#include "mystricmp.c"
void sort(int,char *argv[]);
void swap(int argc,char *argv[]);
void iswap(int argc,char *argv[]);
void reverse(int argc,char *argv[]);
int main(int argc,char *argv[])
{
	int i;
//	sort(argc,argv);
	printf("%s\n",argv[1]);
/*	if((argv[1]!="-i")&&(argv[1]!="-r"))
	{
		swap(argc,argv);
		for(i=1;i<argc;i++)
		printf("%s ",argv[i]);
	}*/
	if(argv[1]=="-i")
	{
		reverse(argc,argv);
		iswap(argc,argv);
		for(i=2;i<argc;i++)
			printf("%s ",argv[i]);
	}
//	swap(argc,argv+1);
//	for(i=1;i<argc;i++)
//	printf("%s ",argv[i]);


}
void sort(int argc,char *argv[])
{
	int i,j;
	if(argv[1]=="-i")
		iswap(argc,argv);
	

//	if((argv[1]!="-r")&&(argv[1]!="-i"))
//	swap(argc,argv);
	else
		if(argv[1]=="-r")
		{
			swap(argc,argv);
			reverse(argc,argv);
		}
		else
			if((argv[1]=="-i")&&(argv[2]=="-r"))
			{
				swap(argc,argv);
				reverse(argc,argv);
			}
	
/*	char *temp;
	for(i=1;i<argc-1;i++)
	{
		for(j=i+1;j<argc;j++)
		if(strcmp(argv[i],argv[j])>0)
			{
				
			}		
	}*/
}
void swap(int argc,char *argv[])
{
	printf("Swap");
	int i,j;
	char *temp;
	for(i=0;i<argc-1;i++)
	{
		for(j=i+1;j<argc;j++)
			if(strcmp(argv[i],argv[j])>0)
			{
				temp=argv[i];
				argv[i]=argv[j];
				argv[j]=temp;
			}
	}
}
void iswap(int argc,char *argv[])
{
	printf("iswap");
	int i,j;
	char *temp;
	for(i=2;i<argc-1;i++)
	{
		for(j=i+1;j<argc;j++)
			if(stricmp(argv[i],argv[j])>0)
			{
				temp=argv[i];
				argv[i]=argv[j];
				argv[j]=temp;
			}
	}
}
void reverse(int argc,char *argv[])
{
	printf("Reverse");
	int i,j;
	char *temp;
	for(i=0,j=argc-1;i<j;i++,j--)
	{
		temp=argv[i];
		argv[i]=argv[j];
		argv[j]=temp;
	}
}
	
