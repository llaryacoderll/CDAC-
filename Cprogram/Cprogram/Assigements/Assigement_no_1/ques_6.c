//write a program to accept an integer value and print its table

#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a  number: ");
    scanf("%d",&n);
    printf("Table of %d is :\n",n);
    for(i=1;i<=10;i++)
        printf("%d X %d = %d\n ",n,i,n*i);
}
