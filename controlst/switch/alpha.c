#include<stdio.h>
int main()
{
	char a;
	printf("Enter a Character: ");
	scanf("%c",&a);
	switch((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	{
		case 1:printf("Character is Alphabet\n");
		       break;
		default:printf("Its a Special Character\n");
	}
}
