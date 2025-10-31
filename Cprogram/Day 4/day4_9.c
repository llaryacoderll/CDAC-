// Switch Case
#include <stdio.h>
int main()
{
    int num1,num2,choic;
    printf("1.Addition\n2.Subtraction\n3.Multipication\nDivision\n");
    printf("Enter choice: ");
    scanf("%d",&choic);
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);

    switch (choic)
    {
    case 1:
        printf("Addtion = %d",num1+num2);
        break;
    case 2:
        printf("Subtraction = %d",num1-num2);
        break;
    case 3:
        printf("Multipcation = %d",num1*num2);
        break;
    case 4:
        printf("Division = %d",num1/num2);
        break;
    default:
        printf("Invaild input");
        break;
    }
}