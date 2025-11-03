/*Write a program to accept a character c and display category of the input character.
ALPHABET  : c is a letter (65 to 90 or 97 to 122)
UPPERCASE : c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT : c is a digit (48 to 57)
SPACE : c is a space(32), tab(9), carriage return(13), new line(10)
OTHER : Not listed above */ 

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character value: ");
    scanf("%c",&ch);

    int value = (int)ch;
    if((value>=65 && value<=90) || (value>=97 && value<=122))
        printf("ALPHABET..\n");

    if(value>=65 && value<=90)
        printf("UPPERCASE ALPHABET..\n");
    else if(value>=97 && value<=122)
        printf("LOWERCASE ALPHABET..\n");
    else if(value>=48 && value<=57)
        printf("DIGIT..\n");
    else if(value==32 || value==9 || value==13 || value==10)
        printf("SPACE..\n");
    else
        printf("OTHER..\n");
}


