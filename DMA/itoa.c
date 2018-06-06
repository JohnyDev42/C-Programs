#include<stdio.h>
#include<stdlib.h>
char * itoa(int *);
int main()
{
	int a,*ptr=(int *)malloc(sizeof(int));
	printf("Enter the integer:");
	scanf("%d",ptr);
	printf("%s\n",itoa(ptr));
	free(ptr);
	ptr='\0';
}
char * itoa(int *p)
{
	int rem,k,i=0,j,n=0,tc;
	 char *as=(char *)malloc(10*sizeof(char));//arr[10],*as=arr;
//	*as=1;	
	if(*p<0)
	{
		*p=-*p;
		n=1;
	}
	while(*p)
	{
	rem=*p%10;
	*(as+i)=rem+'0';

	i++;
	*p=*p/10;
	}
	if(n==1)
	{
		as[i++]='-';
		as[i++]='\0';
	}
	else

	as[i++]='\0';
	for(j=0,k=i-2;j<k;j++,k--)
	{
		tc=as[j];
		as[j]=as[k];
		as[k]=tc;
	}
	return as;
}
