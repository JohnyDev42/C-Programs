#include<stdio.h>
#include<string.h>
int mystrstr(char *,char *);
int main()
{
	char str[50],sub[10];
	printf("Enter main string:\n");
	scanf("%[^\n]s",str);
//	fgets(str,50,stdin);
//	fflush(stdin);
	printf("Enter sub-string:\n");
	scanf("\n%[^\n]s",sub);
//	fgets(sub,10,stdin);
//	mystrstr(str,sub);
printf("Total Sub-string Found:%d\n",mystrstr(str,sub));

}
int mystrstr(char *str,char *sub)
{
	int l1,l2,count=0,i,j,k,count1=0;
	l1=strlen(str);

	l2=strlen(sub);
//	printf("\n%d\t%d\n",l1,l2);
	for(i=0;i<l1;)
	{
		j=0;
		k=i;
		while((str[k]==sub[j])&&(sub[j]))
		{
			
			k++;
			j++;
			count++;
//			printf("count=%d\n",count);
		}
		if(count==l2)
		{
			count1++;
			count=0;
			printf("Found at index %d\n",i);
//			printf("count1=%d\n",count1);
		}
		i++;
	}
	return count1;
}
