#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * strcatalt(char *,char *);
int main()
{
	char str1[100],str2[100];
printf("Enter the string1:");
scanf("%[^\n]s",str1);
printf("Enter the string2:");
scanf("\n%[^\n]s",str2);
printf("Result:%s\n",strcatalt(str1,str2));
}
char * strcatalt(char *str1,char *str2)
{
	char *str3;
	int l1,l2,i,j=0,k=0;
	l1=strlen(str1);
	l2=strlen(str2);
	str3=(char*)calloc(l1+l2+1,sizeof(char));
	for(i=0;i<=l1+l2;i++)
	{
		if((i%2==0)&&str1[j])
			str3[i]=str1[j++];
		else
			if((i%2==1)&&str2[k])
				str3[i]=str2[k++];
			else
				if(str1[j]=='\0')
					str3[i]=str2[k++];
				else
					if(str2[k]=='\0')
						str3[i]=str1[j++];

	}
	str3[i]='\0';
	return str3;
}
