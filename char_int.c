#include<stdio.h>
int main()
{
char a,b,c;
printf("Enter three Numbers as Character:");
scanf("%c\n%c\n%c",&a,&b,&c);
printf("integer is:%d\n",(a-48)*100+(b-48)*10+(c-48));
}


