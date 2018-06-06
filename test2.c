#include<stdio.h>
#include<string.h>
int main(int argc,char* argv[])
{
	if(argv[2]==" pest")
	printf("%s\n",argv[1]);
	printf("%s\n",argv[2]);
	printf("%d",strcmp(argv[2],"pest"));
	//	printf("%d\n",sizeof(&argv[1]+1));
}
