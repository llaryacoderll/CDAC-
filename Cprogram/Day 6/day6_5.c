//static decarlation
#include <stdio.h>
int main()
{
    fun();
    fun();
    fun();
    fun2();
    fun2();
    fun2();
}
void fun()
{
    int num1=10;
    printf("num1 = %d\n",num1);
    num1++;
}
void fun2()
{
    static num1;
    num1=10;
    printf("num1 = %d\n",num1);
    num1++;
}