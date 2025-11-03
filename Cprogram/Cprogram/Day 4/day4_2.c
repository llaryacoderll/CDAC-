//Unary operator(++ , --) with logical operator(&& , || , !)
#include <stdio.h>
int main()
{
    int num1=0,num2=25;
    int res = num1++ && num2++ ;// 0++ 
    printf("num1 = %d num2 = %d res = %d \n",num1,num2,res);
    
    res = num1++ || num2++;
    printf("num1 = %d num2 = %d res = %d \n",num1,num2,res);

    int num3=0;
    res = num1++ && num2++ && num3++; 
    printf("num1 = %d num2 = %d num3 = %d res = %d \n",num1,num2,num3,res);


}