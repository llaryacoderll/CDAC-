//Write a program to display day of week from given date (day, month and year).

#include <stdio.h>
int main()
{
    int day,month,year;
    printf("Enter day,month,year: ");
    scanf("%d %d %d",&day,&month,&year); //8 3 2003

    if(month<3){
        month+=12;  //15
        year-=1;    //2002
    }
    int k = year%100;
    int j = year/100;
    int X = (day+13*(month+1)/5 + k + k/4 + j/4 + 5*j)%7 ;

    switch(X){
        case 0:
            printf("Saturday");
            break;
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tueday");
            break;
        case 4:
            printf("Wenesday");
            break;
        case 5:
            printf("Thrusday");
            break;
        case 6:
            printf("Friday");
            break;
        

    }

}