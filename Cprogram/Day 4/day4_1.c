//Unary oprator with comma operator
#include <stdio.h>
int main(){
    int num1=20;
    int num2=50;
    int res;
    res = num1++ , ++num1 , num1++ ;
    printf("num1 = %d res = %d",num1,res);

    
    res = (num2++ , ++num2 , num2++ );
    printf("num2 = %d res = %d",num2,res);
}