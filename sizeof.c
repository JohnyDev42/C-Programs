#include<stdio.h>
int main()
{
int a=-5;
unsigned b=78;
long c=-79879;
unsigned long d=774654;
long long e=876;
unsigned long long f=6876575;
float g=126.5683;
double h=45235.78978;
long double i=645.8767675;
char j='v';
short k=89;
printf("%lu\n",sizeof(short));
printf("int const. %lu var %lu dtype %lu\n",sizeof(-50),sizeof(a),sizeof(int));
printf("unsigned const. %lu var %lu dtype %lu\n",sizeof(5432),sizeof(b),sizeof(unsigned));
printf("long %lu %lu %lu\n",sizeof(32432),sizeof(c),sizeof(long));
printf("unsigned long%lu %lu %lu\n",sizeof(23684),sizeof(d),sizeof(unsigned long));
printf("long long %lu %lu %lu\n",sizeof(42367),sizeof(e),sizeof(long long));
printf("unsigned long long%lu %lu %lu\n",sizeof(53264836),sizeof(f),sizeof(unsigned long long));
printf("float %lu %lu %lu\n",sizeof(3123.312312),sizeof(g),sizeof(float));
printf("double %lu %lu %lu\n",sizeof(344444.37847466),sizeof(h),sizeof(double));
printf("long double %lu %lu %lu\n",sizeof(1237.797),sizeof(i),sizeof(long double));
printf("char %lu %lu %lu\n",sizeof('w'),sizeof(j),sizeof(char));
printf("short %lu %lu %lu\n",sizeof(3),sizeof(k),sizeof(short));
}
