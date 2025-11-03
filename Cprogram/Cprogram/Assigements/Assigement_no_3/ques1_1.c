/*Write a program to accept a character and a number, and print the character number times
Input:
Character:
Number: 6
Output:*****
*/

#include <stdio.h>
int main()
{
    char ch;
    int num;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
        printf("%c",ch);
}