// Bitwise Operator:  &  | ^  ~(binary op)
#include <stdio.h>
int main()
{
    int num1=10;
    int num2=20;
    printf("& : num1 & num2 = %d\n",num1&num2); //0
    printf("| : num1 | num2 = %d\n",num1|num2); //30
    printf("^ : num1 ^ num2 = %d\n",num1^num2); //30
    printf("~ : ~num1  = %d\n",~num1); //-11

}