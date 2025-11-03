/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.*/

#include <stdio.h>
int main()
{
    int qty,d;
    printf("Enter a quantity: ");
    scanf("%d",&qty);

    d=qty%10;
    if(d==5)
    {
        if(qty>=50)
            printf("15%% discount..");
        else if(qty>=30)
            printf("10%% discount..");
    }
}