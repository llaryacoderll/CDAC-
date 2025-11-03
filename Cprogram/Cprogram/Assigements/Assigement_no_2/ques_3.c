//Write a program to accept number and check whether the number is +ve, -ve and zero.

/*Input a number and display whether number is Even or Odd.*/

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);

    if(num1>0)
        printf("%d is Positive number",num1); 
    else
        if(num1<0)
            printf("%d is negative number",num1); 
        else
            printf("%d is Zero number",num1); 

        
}