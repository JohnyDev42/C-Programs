#include<stdio.h>
#include<string.h>
#include "mystricmp.c"
#define SWAP {temp=argv[i];argv[i]=argv[j];argv[j]=temp;}
void swap(int,char *argv[]);
void iswap(int,char *argv[]);
void reverse(int,char *argv[]);
int i=1,j;
char *temp;
int main(int argc,char *argv[])
{int c=1;
	if(((argv[1][0]=='-')&&!strcmp(argv[1],"-ri")||!strcmp(argv[1],"-ir")||!strcmp(argv[1],"-r")||!strcmp(argv[1],"-i")))
	{
		printf("Invalid\n");
		return 0;
	}
	if(!(argv[1][0]=='-'&&(argv[2][0]=='-')&&(((argv[1][1]!='r')||(argv[2][1]!='r'))&&(argv[1][1]!='i'||(argv[2][1]!='i')))))
	{
		printf("Invalid Option\n");
		return 0;
	}else
		if(!strcmp(argv[1],"-ri")||!strcmp(argv[1],"-ir"))
		{
			i=2;c=2;
			iswap(argc,argv);
			reverse(argc,argv);
		}else

	if(argv[2][0]=='-'&&(argv[1][1]=='r'||argv[2][1]=='r')&&(argv[1][1]=='i'||argv[2][1]=='i'))
	{
		i=3;
		c=3;
		iswap(argc,argv);
		reverse(argc,argv);	
	}
	else
		if(!strcmp(argv[1],"-i"))
		{
			i=2;
			c=2;
			iswap(argc,argv);
		}
		else
			if(!strcmp(argv[1],"-r"))
			{
				i=2;
				c=2;
				swap(argc,argv);
				reverse(argc,argv);
			}
			else
					swap(argc,argv);
	for(c;c<argc;c++)
	{
		printf("%s ",argv[c]);
	}
	printf("\n");
}
void swap(int argc,char *argv[])
{
	for(i;i<argc-1;i++)
		for(j=i+1;j<argc;j++)
			if(strcmp(argv[i],argv[j])>0)
				SWAP
}
void iswap(int argc,char *argv[])
{
	for(i;i<argc-1;i++)
		{	
			for(j=i+1;j<argc;j++)
				if(stricmp(argv[i],argv[j])>0)
				SWAP
		}
}
void reverse(int argc,char *argv[])
{
	for(i,j=argc-1;i<j;i++,j--)
		SWAP
}
