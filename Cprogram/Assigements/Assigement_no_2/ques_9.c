/*Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.*/

/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.*/

#include <stdio.h>
int main()
{
    int m;

    printf("Enter a months: ");
    scanf("%d",&m);

    //a. Using If else ladder.
    if(m==1)
        printf("31 days in months..\n");
    else if(m==2)
        printf("28 or 29 dyas in month..\n");
    else if(m==3)
        printf("31 days in months..\n");
    else if(m==4)
        printf("30 days in months..\n");
    else if(m==5)
        printf("31 days in months..\n");
    else if(m==6)
        printf("30 days in months..\n");
    else if(m==7)
        printf("31 days in months..\n");
    else if(m==8)
        printf("31 days in months..\n");
    else if(m==9)
        printf("30 days in months..\n");
    else if(m==10)
        printf("31 days in months..\n");
    else if(m==11)
        printf("30 days in months..\n");
    else if(m==12)
        printf("31 days in months..\n");


    //b. Using logical operators.
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        printf("31 days in months..\n");
    else if(m==4 || m==6 || m==9 || m==11 )
        printf("30 dyas in months..");
    else if(m==2)
        printf("28 or 29 dyas in month..\n");
    else    
        printf("Not vaild month..");
   
}