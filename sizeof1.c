#include<stdio.h>
int main()
{
int i;
float f;
long l;
char c;
unsigned u;
printf("%lu\n",sizeof(f+3.5));
printf("%lu\n",sizeof(c+'a'));
printf("%lu\n",sizeof(l+i));
printf("%lu\n",sizeof(i+u));
}
