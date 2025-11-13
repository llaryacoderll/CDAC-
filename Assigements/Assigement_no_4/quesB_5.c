//Write a function to print a given number in binary format.
#include <stdio.h>
void binary_conversion(int);
int main()
{
    int num1;
    printf("Enter a number: " );
    scanf("%d",&num1);
    binary_conversion(num1);
}
void binary_conversion(int n)
{
    if(n==0)
        return;
    binary_conversion(n/2);
    printf("%d",n%2);
}