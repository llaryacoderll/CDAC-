//3. Write a function to calculate GCD of given numbers using recursion.
#include <stdio.h>
int GCD(int,int);
int main()
{
    int a,b;
    printf("Enter 2 number: ");
    scanf("%d %d",&a,&b);
    printf("GCD of (%d,%d) = %d",a,b,GCD(a,b));
}
int GCD(int a,int b){
    if (b==0)
        return a;
    return GCD(b,a%b);
}