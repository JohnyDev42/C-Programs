#include<stdio.h>
#include<string.h>
void palistr(char *);
int main()
{
	char str[500];
	int l;
	printf("Enter the string:");
	fgets(str,100,stdin);
	palistr(str);

}
void palistr(char *str)
{
	int i,j,p=0,k;
	for(i=0;str[i]&&(str[i]!='\n');i++)
	{
		if((str[i]>='A')&&(str[i]<='Z'))
			str[i]=str[i]+32;
	}
	printf("%d\n",i);

	for(k=0,j=i-1;;k++,j--)
	{
		if(str[k]==str[j])
		{
			p=1;
		}
		else
			break;
	}
//	printf("%s\n",str);
	if(p==1)
		printf("Palindrom\n");
	else
		printf("Not a Palindrom\n");
}
