//function with arguement and return value
#include <stdio.h>
int addition(int,int);
int main()
{
    int sum = addition(100,200);
    printf("sum = %d\n",sum);
    sum = addition(700,100);
    printf("sum = %d\n",sum);
}
int addition(int num1,int num2)
{
    int result = num1+num2;
    return result;
}