/*1. Write a function to calculate power.*/
#include <stdio.h>
void power(int,int);
int main()
{
    int b,n;
    printf("Enter a number: ");
    scanf("%d %d",&b,&n);
    power(b,n);
}
void power(int b,int n)
{
    int f=b;
    for(int i=2;i<=n;i++)
        f=b*f;
    printf("Power of %d^%d is %d",b,n,f);
}