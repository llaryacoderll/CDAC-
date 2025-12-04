#include"MyMath.h"

//Source file => definition
//definition of constructor
MyMath::MyMath()
{
    num1=10;
    num2=20;
}
//definition of constructor
MyMath::MyMath(int n1, int n2)
{
    num1=n1;
    num2=n2;
}

int MyMath::add()
{
    return num1+num2;
}

int MyMath::sub()
{
    return num1-num2;
}
// //global function
// int add()
// {

// }