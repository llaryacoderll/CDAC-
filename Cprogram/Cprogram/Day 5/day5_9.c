// Switch Case using do while loop
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,choic;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);
    do{

    printf("1.Addition\n2.Subtraction\n3.Multipication\nDivision\n");
    printf("Enter choice: ");
    scanf("%d",&choic);

    switch (choic)
    {
    case 1:
        printf("Addtion = %d\n\n",num1+num2);
        break;
    case 2:
        printf("Subtraction = %d\n\n",num1-num2);
        break;
    case 3:
        printf("Multipcation = %d\n\n",num1*num2);
        break;
    case 4:
        printf("Division = %d\n\n",num1/num2);
        break;
    case 0:
        printf("Exit....");
        exit(0);
    default:
        printf("Invaild input\n\n");
        break;
    }
}while(choic!=0);
}