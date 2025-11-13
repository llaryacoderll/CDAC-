// 7. Write a function to print given number of terms of Fibonacci series.
#include <stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibo(n);
    
}
void fibo(int n){
    int x=0,y=1,z;
    printf("Fibonices series: 0 1 ");
    for(int i=3;i<=n;i++)
    {
        z=x+y;
        printf(" %d",z);
        x=y;
        y=z;
    }
}