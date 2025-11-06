/*4. Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120*/

#include<stdio.h>
int main()
{
    int n,f=1;
    printf("enter a number: ");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        f *= i;
        i++;
    }
    printf("Factorial of %d is %d",n,f);
}