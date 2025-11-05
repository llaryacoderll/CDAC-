/*b. Reverse the number
Input: 9362
Output: 2639*/

#include <stdio.h>
int main()
{
    int num1,d,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num1);

    while(num1!=0)
    {
        d = num1%10;
        sum = sum*10 + d;
        num1 =num1/10;
    }

    printf("Reverse = %d",sum);
}