/*Accept any 5digit number and print remainder after dividing by 3 */
#include<stdio.h>
int main()
{
int a,r;
printf("Enter a 5 digit Integer Number: ");
scanf("%d",&a);
r=a%3;
printf("The remainder after divided by 3 is %d\n",r);
}

