// Conditional statements: if else

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
        printf("num1 is greater");
    else
        printf("num2 is greater");
}