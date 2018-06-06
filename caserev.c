#include<stdio.h>
int main()
{
char a;
printf("Enter an Alphabet:");
scanf("%c",&a);
int b=a;
((b>64)&&(b<92))?printf("%c\n",(b+32)):((b<123)&&(b>96))?printf("%c\n",(a-32)):printf("Special Character");
return 0;
}

