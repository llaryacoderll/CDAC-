/*9. Write a function to indicate whether given number is prime or not. Write another function to
print prime numbers in the given range.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    checkPrimeOrNot(n);
}
void checkPrimeOrNot(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)  
            c++;
    }
    if(c==2)
        printf("Prime..");
    else    
        printf("Not..");
}