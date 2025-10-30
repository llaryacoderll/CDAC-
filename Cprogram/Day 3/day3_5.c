#include <stdio.h>
int main()
{
    int num1=10;
    printf("num1=%d\n",num1);

    num1;
    num1=20,30,40;
    printf("num1=%d\n",num1);

    num1=(20,30,40);
    printf("num1=%d\n",num1);
}