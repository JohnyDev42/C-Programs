nclude<stdio.h>
int main()
{
int x,y,z,tmp;
printf("Enter the values for x,y,z:");
scanf("%d %d %d",&x,&y,&z);
tmp=x;
x=y;
y=z;
z=tmp;
printf("After swapping:x=%d,y=%d,z=%d\n",x,y,z);
return 0;
}

