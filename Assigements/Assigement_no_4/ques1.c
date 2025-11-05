/*1. Write a function to calculate factorial of a given number.*/
#include <stdio.h>
void fact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact(n);
}
void fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    printf("Factorial of %d is %d",n,f);
}