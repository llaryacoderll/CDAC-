/*Write a program to find maximum of three numbers using
a. If- else
b. conditional operator.*/

/*Write a program to find maximum of two numbers using
a. If- else
b. conditional operator.*/

#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 number: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    //a. IF-esle 
    if(num1>num2 && num1>num3)
        printf("Maximum number is %d\n",num1);
    else if(num2>num3)
        printf("Maximum number is %d\n",num2);
    else
        printf("Maximum number is %d\n",num3);


    //b.conditional operator
    int z = num1 > num2 ? num1 : num2 ;
    int x = num3 > z ? num3 : z ;
    printf("Maximum number is %d\n",x);

}