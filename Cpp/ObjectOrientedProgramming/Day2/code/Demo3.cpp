#include<iostream>  
#include<iomanip>
using namespace std;
//Manipulators
int main()
{
    cout<<"Hello Students...!"<<endl;
    cout<<"Hello Sunbeam...!"<<endl;

    int num1=14; //dec
    //dec = > oct
    cout<<setbase(8)<<num1<<endl;//16
    //dec => hex
    cout<<setbase(16)<<num1<<endl;//e

    cout<<setbase(10)<<setw(5)<<num1<<endl;//___14 //5-2=>3 space
    cout<<setw(7)<<num1<<endl; //_____14 //5+2=>7
    
    double dvar=123.453;

    
    // cout<<setprecision(5)<<dvar<<endl;//123.45 // Note:In setprecision it will exclude the . operator while counting the char

    cout<<setw(8)<<setprecision(5)<<dvar;//__123.45// Note:- setw includes . operator which counting the number of char


}