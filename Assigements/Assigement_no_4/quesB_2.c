//2. Write a function to calculate power using recursion.
#include <stdio.h>
int power(int,int);
int main()
{
    int n,p;
    printf("Enter 2 number: ");
    scanf("%d %d",&n,&p);
    printf("%d^%d = %d",n,p,power(n,p));
}
int power(int n,int p)
{
    if(p==0)
        return 1;
    return n*power(n,p-1);
}