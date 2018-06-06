#include<stdio.h>
int main()
{
char a;
printf("Enter the Character:");
scanf("%c",&a);
((a>64)&&(a<92))||((a>96)&&(a<123))?printf("It's a Alphabet\n"):printf("Not a Alphabet\n");
return 0;
}

