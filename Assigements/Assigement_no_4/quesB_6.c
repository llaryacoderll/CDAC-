//Write a function to print a given number in hexadecimal format.
#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);
    hexdecimal_conversion(num1);
}
void hexdecimal_conversion(int n)
{
    if(n==0)
        return;
    hexdecimal_conversion(n/16);
    printf("%d",n%16);
}