#include <stdio.h>
int main()
{
    int num1=25;
    float fvar=5.3;
    printf("res = %d\n",num1);
    printf("res = %5d\n",num1);
    printf("res = %-6d\n",num1);
    printf("res = %f\n",fvar);
    printf("res = %6.2f\n",fvar);
    printf("res = %-6.2f\n",fvar);
}