/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);

    if(num1!=0 && num2!=0)
    {
        float res = (float)num1/num2;
        printf("%d / %d = %f \n",num1,num2,res);
    } 
    else
        printf("Number canot be divied by zero..");
}