/*c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome*/

#include <stdio.h>
int main()
{
    int num1,d,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num1);
    int n = num1;
    while(num1!=0)
    {
        d = num1%10;
        sum = sum*10 + d;
        num1 =num1/10;
    }
    if(n==sum)
    printf("Palindrome..");
    else
    printf("not Palindrome..");
}