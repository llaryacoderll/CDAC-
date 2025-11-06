//function without argument and no return value
#include <stdio.h>
int main()
{
    addition();
}
void addition()
{
    int num1,num2;
    printf("Enter 2 number : ");
    scanf("%d %d",&num1,&num2);
    printf("Sum is %d",num1+num2);
}