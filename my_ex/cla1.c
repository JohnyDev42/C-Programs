#include<stdio.h>
int main(int argc,char* argv[],char* env[])
{
	int i;
	for(i=0;i<argc;i++)
		printf("%s",env[i]);
}
