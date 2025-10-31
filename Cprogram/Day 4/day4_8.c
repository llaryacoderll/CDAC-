// Nested Ternery operator
// condition? exp1 1(true): exp2(false)
#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 number: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    int max = num1>num2 ? num1>num3 ? num1 : num3 : num2>num3 ? num2 : num3 ;
    printf("greater number is %d",max);
}