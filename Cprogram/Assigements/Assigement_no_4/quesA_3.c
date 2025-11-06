
/*Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.*/

#include <stdio.h>
#include <stdlib.h>
float add(int,int);
float sub(int,int);
float mul(int,int);
float divi(int,int);
int main()
{
    char choice;
    int num1,num2;
    float res;
    do{
        printf("1. + \n2. - \n3. * \n4. / \nEnter your choice: ");
        scanf(" %c",&choice);
        printf("Enter 2 number: ");
        scanf("%d %d",&num1,&num2);
        switch(choice)
        {
            case '+':res = add(num1,num2);
                    printf("Addition : %f\n",res);
                    break;
            case '-':res = sub(num1,num2);
                    printf("Subtraction : %f\n",res);
                    break;
            case '*':res = mul(num1,num2);
                    printf("Multiplication : %f\n",res);
                    break;
            case '/':res = divi(num1,num2);
                    printf("Division : %f\n",res);
                    break;
            case 0:printf("Exit..\n");
                    exit(0);
            default:printf("Invaild input..\n");
        }
        printf("***********************************\n");
    }while(choice!=0);
}
float add(int a,int b){
    return a+b;
}
float sub(int a,int b){
    return a-b;
}
float mul(int a,int b){
    return a*b;
}
float divi(int a,int b){
    return a/b;
}