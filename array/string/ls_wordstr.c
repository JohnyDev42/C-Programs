/*Largest and smallest word in a String */

#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],big[15],small[15],tstr[100],*ptr=tstr;
	int i,j,l,l1,old=0;
	printf("Enter the String:");
	scanf("%[^\n]s",str);
	strcpy(tstr,str);
	l=strlen(tstr);
	for(j=l-1;str[j]!=' ';j--);
	old=strlen(&str[j+1]);
	strcpy(big,&str[j+1]);
	strcpy(small,&str[j+1]);
	printf("%s\n",big);
	printf("%d\n",old);
	for(i=l-1;i>=0;i--)
	{
		if(i==0)
		{
			ptr=&tstr[i];
		}
		if(tstr[i]==' ')
		{
			tstr[i]='\0';
			ptr=&tstr[i+1];
		}
	
			l1=strlen(ptr);
			printf("%d\n",l1);
			if(old<l1)
			{
				strcpy(big,ptr);
			}
			else
				strcpy(small,ptr);
			old=l1;
		
	}
	printf("Small=%s\n",small);
	printf("Big=%s\n",big);
}
