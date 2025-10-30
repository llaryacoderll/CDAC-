/*Input a number and display whether number is Even or Odd.*/

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter a number: ");
    scanf("%d",&num1);

    if(num1%2==0)
        printf("%d is even number",num1); 
    else
        printf("%d is odd number",num1); 
        
}