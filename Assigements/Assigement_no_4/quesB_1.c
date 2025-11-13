// 1.Write a function to calculate factorial of a given number using recursion.
/*
fact = 5*4*3*2*1;
fact = n*fact(n-1)

*/

#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
}
int factorial(int n)
{
    if (n==0)
        return 1;
    return n*factorial(n-1);
}