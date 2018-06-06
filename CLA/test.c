#include<stdio.h>
#include "mystricmp.c"
int main(void)
{
	char a[]="abc",b[]="ABC";
	printf("%d\n",stricmp(a,b));
	printf("%s\n",__DATE__);
	printf("%s\n",__TIME__);
	printf("%s\n",__FILE__);
	printf("%d\n",__STDC__);
	printf("%d\n",__LINE__);
	return 34;

}
