// 14. Write a program to accept a number and check whether it is Prime no.

#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        printf("Prime number..");
    else
        printf("Not prime number..");
}