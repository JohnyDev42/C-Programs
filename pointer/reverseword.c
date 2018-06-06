#include<stdio.h>
#include<string.h>
void reverseword(char *);
void reverse(char *,char *);
int main()
{
	char str[200];
	int i,l,c=0;
	printf("Enter the string:\n");
	fgets(str,200,stdin);
	reverseword(str);
	printf("%s\n",str);	
}
void reverseword(char *str)
{
	char *wbegin=str,*temp=str;
	while(*temp)
	{
		temp++;
		if((*temp=='\0'))
		{
			reverse(wbegin,temp-1);
		}
		else
			if(*temp==' ')
			{
				reverse(wbegin,temp-1);
				wbegin=temp+1;
			}
	}
	reverse(str,temp-1);
}
void reverse(char *begin,char *end)
{
	char temp;
	while(begin<end)
	{
		temp=*begin;
		*begin++=*end;
		*end--=temp;
	}
}
