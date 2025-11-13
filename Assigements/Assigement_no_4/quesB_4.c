/*4. Write a function to calculate nth term of the Fibonacci series using recursion.
 Write another function to print given number of terms of Fibonacci series.*/

/*
f(0)=0
f(1)=1
f(2)=0+1
f(3)=f(1)+f(2)
f(4)=f(2)+f(4)
*/

#include <stdio.h>
int fibonacci(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Fibonacci series term %d is %d",n,fibonacci(n));
}
int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
