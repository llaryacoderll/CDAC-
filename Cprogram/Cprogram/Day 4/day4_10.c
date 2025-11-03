// Switch Case
#include <stdio.h>
int main()
{
    int num1,num2;
    char choic;
    
    printf("Enter a expresion: ");
    scanf("%d %c %d",&num1,&choic,&num2);

    switch (choic)
    {
    case '+':
        printf("Addtion = %d",num1+num2);
        break;
    case '-':
        printf("Subtraction = %d",num1-num2);
        break;
    case '*':
        printf("Multipcation = %d",num1*num2);
        break;
    case '/':
        printf("Division = %d",num1/num2);
        break;
    default:
        printf("Invaild input");
        break;
    }
}