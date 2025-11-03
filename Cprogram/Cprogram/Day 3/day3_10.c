#include <stdio.h>
int main()
{
    int num1=25;
    int num2=50;

    int res = ++num1;
    printf("num1 = %d res = %d\n",num1,res);

    res = num2++;
    printf("num2 = %d res = %d\n",num2,res);

    res = --num1;
    printf("num1 = %d res = %d\n",num1,res);

    res = num2--;
    printf("num2 = %d res = %d\n",num2,res);
}