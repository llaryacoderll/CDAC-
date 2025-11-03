/*d. Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 *1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number 
*/


#include <stdio.h>
int main()
{
    int num1,d,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num1);
    int n=num1;
    while(num1!=0)
    {
        d = num1%10;
        sum = sum + d*d*d;
        num1 =num1/10;
    }
    if(sum==n)
    printf("Armstrong number");
    else
    printf("Not Armstrong number");
}