nclude <time.h>
#include <stdio.h>
int main()
{
 int day = 1;
 int month = 2; // February
 int year = 2010; // year can not be before 1900
 int days_to_add = 123;
 struct tm tm;
 
 
   memset(&tm,0,sizeof(struct tm));
 
    tm.tm_year = year-1900; 
     tm.tm_mon = month-1; // 0 = Jan, 1 = Feb etc
      tm.tm_mday = day;
       tm.tm_hour = 12; // fictious
        tm.tm_mday += days_to_add;
         mktime(&tm);
         }}
