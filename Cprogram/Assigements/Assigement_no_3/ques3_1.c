/*Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20*/

#include <stdio.h>
int main()
{
    int num1,d,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num1);

    while(num1!=0)
    {
        d = num1%10;
        sum += d;
        num1 =num1/10;
    }

    printf("Sum = %d",sum);
}