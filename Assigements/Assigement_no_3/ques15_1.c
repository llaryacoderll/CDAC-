/*15. Modify the menu driven program for four function calculator. Add a menu item to choose
option exit. The program continues till user chooses option exit.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,choice;
    printf("Enter 2 number: ");
    scanf("%d %d",&num1,&num2);

    do{
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Addition : %d\n",num1+num2);
            break;
            case 2:
            printf("Substraction: %d\n",num1-num2);
            break;
            case 3:printf("Multipction : %d\n",num1*num2);
            break;
            case 4:
            printf("Division : %d\n",num1/num2);
            break;
            case 0: 
                printf("Exit...");
                exit(0);
                break;
            default: printf("Invaild input...\n");

        }
    }while(choice!=0);
}
