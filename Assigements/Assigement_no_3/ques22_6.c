/*
A 
B C
D E F
G H I J
*/

#include <stdio.h>
int main()
{
    char i,j,ch;
    ch='A';
    for(j='A';j<='D';j++)
    {
        for(i='A';i<=j;i++)
        {
            printf("%c ",ch);
            ch++;
        }
    printf("\n");
    }

}