#include<stdio.h>
#include<string.h>
int main(int argc,char* argv[])
{
	strcpy(argv[0],"hello");
	strcpy(argv[1],"good morning");
	printf("%s %s\n",argv[0],argv[1]);
}
