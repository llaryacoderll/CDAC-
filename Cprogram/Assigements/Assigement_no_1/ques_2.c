//write a program to accept a number and print the number in character ,decimal,octal and hex format.

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);

    printf("number in Character: %c\n",num1);
    printf("number is decimal : %d\n",num1);
    printf("number in octal : %o\n",num1);
    printf("number in hexdecimal: %x\n",num1);
}

