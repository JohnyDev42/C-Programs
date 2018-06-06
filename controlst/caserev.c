#include<stdio.h>
int main()
{
	char c;
	printf("Enter the Alphabet : ");
	scanf("%c",&c);
	if(c>64&&c<91)
		printf("Case Reverse: %c\n",c+32);
	else
		printf("Case Reverse: %c\n",c-32);
}
