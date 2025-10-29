//print the ASCII value of user entered character in decimal ,hex,octal format also print the chracter for user entered ASCII value

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    printf("ASCII value of \' %c \' are : \n",ch);
    printf("Decimal value : %d\n",ch);
    printf("Octal value : %o\n",ch);
    printf("Hexdecimal value : %x\n",ch);
}