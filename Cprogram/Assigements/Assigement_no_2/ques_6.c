/*Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/

#include <stdio.h>
int main()
{
    int num1,sum=0,d,n;
    printf("Enter a number: ");
    scanf("%d",&num1);

    n=num1;
    if(num1>=10000 && num1<=99999)
    {
        printf("It is 5 digit number..\n");
        while(num1!=0)
        {
            d = num1%10;
            sum=sum*10+d;
            num1=num1/10;
        }
        if(sum==n)
            printf("It is Palindrome..\n");
        else
            printf("It is not Palindrome..\n");
    }
    else
        printf("It is not 5 digit number..\n");

}

