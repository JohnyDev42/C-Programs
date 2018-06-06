#include<stdio.h>
#include<string.h>
#include "mystricmp.c"
#define SWAP {temp=argv[i];argv[i]=argv[j];argv[j]=temp;}
void iswap(int argc,char *argv[]);
void swap(int argc,char *argv[]);
void reverse(int argc,char *argv[]);
int main(int argc,char * argv[])
{
	int i;
/*	if(argv[2][0]=='-')
		if(((argv[1][1]!='r')&&(argv[2][1]!='i'))||((argv[1][1]!='i')&&(argv[2][1]!='r')))
			printf("Enter valid options...\n-i :Insensitive -r :Reverse\n");
	else
		if(argv[1][0]=='-')
			if((argv[1][1]!='i')||(argv[1][1]!='r'))
				printf("Enter valid options...\n-i or -r\n");*/
				if((argv[1][0]!='-')&&(argv[2][0]!='-'))
	{
		swap(argc,argv);
		for(i=1;i<argc;i++)
			printf("%s ",argv[i]);
	}
	
	else
		if((argv[1][0]=='-')&&(argv[2][0]=='-'))
//		if((argv[1]=="-i")&&(argv[2]=="-r"))
		{
			iswap(argc,argv);
			reverse(argc,argv);
			for(i=3;i<argc;i++)
				printf("%s ",argv[i]);
		}
		else
	if(argv[1][1]=='i')
	{
		iswap(argc,argv);
		for(i=2;i<argc;i++)
		printf("%s ",argv[i]);
	}
	else
		if(argv[1][1]=='r')
		{
			swap(argc,argv);
			reverse(argc,argv);
			for(i=2;i<argc;i++)
				printf("%s ",argv[i]);
		}

	printf("\n");
}
void swap(int argc,char *argv[])
{

	int i,j;
	char *temp;
	if(argv[1][0]=='-')
		i=2;
	if(argv[2][0]=='-')
		i=3;
	for(i;i<argc-1;i++)
	{
		for(j=i+1;j<argc;j++)
			if(strcmp(argv[i],argv[j])>0)
			SWAP
	}
}
void iswap(int argc,char *argv[])
{
	int i,j;
	char *temp;
	if((argv[1][0]=='-')&&(argv[2][0]=='-'))
		i=3;
	else
		if(argv[1][1]=='i')
			i=2;
	for(i;i<argc-1;i++)
	{
		for(j=i+1;j<argc;j++)
			if(stricmp(argv[i],argv[j])>0)
			SWAP
	}
}
void reverse(int argc,char *argv[])
{
	int i,j;
	char *temp;
	if((argv[1][0]=='-')&&(argv[2][0]=='-'))
		i=3;
	else
		if(argv[1][1]=='r')
			i=2;
	for(i,j=argc-1;i<j;i++,j--)
	SWAP
}
