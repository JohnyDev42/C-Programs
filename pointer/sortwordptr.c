#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l;
//	char tmp[15];
	char *wordptr[]={"arun","america","kernel","master","global","edge","megatrend"},*temp=0;
	l=sizeof(wordptr)/sizeof(wordptr[0]);
	printf("Before Sorting:\n");
	for(i=0;i<l;i++)
		printf("%s\n",wordptr[i]);
	printf("**%s\n",wordptr[0]);
	for(i=0;i<l-1;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(strcmp(wordptr[i],wordptr[j])>0)
			{
				temp=wordptr[i];
				wordptr[i]=wordptr[j];
				wordptr[j]=temp;
			}
		}
	}
	printf("After Sorting:\n");
	for(i=0;i<l;i++)
		printf("%s\n",wordptr[i]);
}
