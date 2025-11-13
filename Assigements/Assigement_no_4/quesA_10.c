/*10. Write function to check whether given year is leap or not. Write another function to print
number of days in given month.*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(isLeapYear(year))
        printf("Leap year");
    else
        printf("Not Leap year..");
}
int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}
