#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n;
	char name[100],s1[100],s2[100],s[100],d[100];
	printf("Enter the String:");
	fgets(name,100,stdin);
	printf("String Length is %lu\n",strlen(name));

/*	printf("String in Lower:");
	strlwr(name);

	printf("String  in Upper:");
	strupr(name);*/

	printf("For string Concatenation:\n");

	printf("Enter the String1:");
	fgets(s1,100,stdin);
	printf("Enter the String2:");
	fgets(s2,100,stdin);

	printf("\nResult of Concatenation:\n");
	strcat(s1,s2);

	printf("Enter the number of letters to Concatenate:");
	scanf("%d",&n);

	printf("Result: ");
	strncat(s1,s2,n);

	printf("\n***Copy String***");
	printf("Enter the Source string:");
	fgets(s,100,stdin);
	printf("Enter the Destination string:");
	fgets(d,100,stdin);
	printf("After Copy:\nDestination:");
	strcpy(d,s);

	printf("Enter the no of Letters You want to copy:");
	scanf("%d",&n);

	printf("After Coping %d no:\nDestination:",n);
	strncpy(d,s,n);

/*	printf("Enter the String for Reverse:");
	fgets(name,100,stdin);
	printf("Reverse is:");
	strrev(name);*/
}

