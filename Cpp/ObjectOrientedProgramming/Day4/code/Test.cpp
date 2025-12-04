#include<iostream>
#include"MyMath.h"
using namespace std;

// 1. create the .o or .obj file of Source file
// g++ -c MyMath.cpp Test.cpp
// MyMath.o Test.o 
//2. Link the .o or .obj file
// g++ MyMath.o Test.o

//a.exe

int main()
{
    MyMath m1;
    int res;
    res=m1.add();
    cout<<"add res="<<res<<endl;

     res=m1.sub();
    cout<<"sub res="<<res<<endl;
}