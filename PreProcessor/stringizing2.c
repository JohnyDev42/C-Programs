#include<stdio.h>
#define MAC(s) printf(#s"=%d",s)
int main()
{
	int marks=80;
	MAC(marks);
}
