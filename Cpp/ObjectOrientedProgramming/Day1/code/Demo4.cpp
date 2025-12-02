#include<stdio.h>
//reference => It is used to give nick name to the variable
//typedef => It is used to give nick name to the data type
int main()
{
    int num1=10;
    //Q. Give nick name or some other name to the num1 var ?
    int &  refNum1=num1; //refNum1 is reference var(nick name) for var num1. 
    //it is mandatory to init the reference var, other wise it will end up
    //into compile time error
    printf("\n refNum1=%d", refNum1); //10

    refNum1=20;
    printf("\n num1=%d", num1);//20
    //Note:- Internally reference is constant pointer.
}