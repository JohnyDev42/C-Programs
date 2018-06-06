#include<stdio.h>
#include<math.h>
float circle(float r)
{
	float area;
	area=3.14*r*r;
	return area;
}
float triangle(float a)
{
	float area;
	area=sqrt(3)*a*a/4;
	return area;
}
float square(float a)
{
	float area;
	area=a*a;
	return area;
}
int main()
{
	int a;
	float b;
choice:{
	printf("Enter your Choice:\n1.Area of Circle\n2.Area of Equilateral Triangle\n3.Area of Square\n");
	scanf("%d",&a);
       }
	if(a<=0||a>3)
	{
		printf("Enter Valid Choice!!!\n");
		goto choice;
	}
	switch(a)
	{
		case 1:printf("Enter the radius of Circle: ");
		       scanf("%f",&b);
		       printf("Area of Circle= %f\n",circle(b));
		       break;
		case 2:printf("Enter the side of Equilateral Triangle: ");
		       scanf("%f",&b);
		       printf("Area of Equilateral Triangle= %f\n",triangle(b));
		       break;
		case 3:printf("Enter the side of Square: ");
		       scanf("%f",&b);
		       printf("Area of Square=%f\n",square(b));
		       break;
		default:printf("Enter a valid Choice\n");
	}
}
