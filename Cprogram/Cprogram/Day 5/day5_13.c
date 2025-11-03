//function with arguement and no return value
#include <stdio.h>
void addition(int,int);
int main()
{
    addition(100,200);
    addition(700,100);
}
void addition(int num1,int num2)
{
    int sum = num1+num2;
    printf("sum = %d\n",sum);
}