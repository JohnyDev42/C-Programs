#include<stdio.h>
int main()
{
	char c;
	printf("Enter the Character: ");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'U':
		case 'I':
		case 'O':printf("Its a Vowel\n");
			 break;
		default:printf("Its not Vowel\n");
	}
}

	
