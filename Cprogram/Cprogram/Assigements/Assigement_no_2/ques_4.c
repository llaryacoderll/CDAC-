/*Write a program to find maximum of two numbers using
a. If- else
b. conditional operator.*/

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);

    //a. IF-esle 
    if(num1>num2)
        printf("Maximum number is %d\n",num1);
    else
        printf("Maximum number is %d\n",num2);

    //b.conditional operator
    int z = num1 > num2 ? num1 : num2 ;
    printf("Maximum number is %d\n",z);

}