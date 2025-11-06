/*
A B C D 
B C D
C D
D
*/
#include <stdio.h>
int main()
{
    char i,j;
    for(j='A';j<='D';j++)
    {
    for(i=j;i<='D';i++)
        printf("%c ",i);
    printf("\n");
    }
}