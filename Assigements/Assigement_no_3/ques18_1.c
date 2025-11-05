//write a program to print the table of the number from 1 to 10.

#include <stdio.h>
int main()
{
    int n;
    for(n=1;n<=10;n++)
    {
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
    printf("...................\n");
    }
}