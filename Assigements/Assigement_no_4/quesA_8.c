//8. Write a function to return next term of Fibonacci series with each call to the function.
#include <stdio.h>
int fibo(int);
int main()
{
    int n,res;
    printf("Enter a number: ");
    scanf("%d",&n);
    res = fibo(n);
    printf("%d terms in fibonices series is %d",n,res);
    
}
int fibo(int n){
    int x=0,y=1,z;
    for(int i=3;i<=n;i++)
    {
        z=x+y;
        x=y;
        y=z;
    }
    return z;
}