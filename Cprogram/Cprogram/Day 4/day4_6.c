// Terneary operator/ conditional operator
// condition ? exp1 true: exp2 false

#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);
    int max = num1>num2 ? num1 : num2;
    printf("Greater number is %d",max);
}