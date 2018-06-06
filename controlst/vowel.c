#include<stdio.h>
int main()
{
	char c;
	printf("Enter the Character :");
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
			printf("Its a Vowel\n");
		else
			printf("Not a Vowel\n");
	}
	else
		printf("Its a Special Character\n");
}
