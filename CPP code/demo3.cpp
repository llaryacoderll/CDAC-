#include<iostream>  
#include<iomanip>
using namespace std;
//Manipulators
int main()
{
    cout<<"Hello Students...!"<<endl;
    cout<<"Hello Sunbeam...!"<<endl;

    int num1 = 14;
    cout<<setbase(8)<<num1<<endl;
    cout<<setbase(2)<<num1<<endl;
    cout<<setbase(16)<<num1<<endl;

    cout<<setbase(10)<<setw(5)<<num1<<endl;

    double dvar = 123.45;
    cout<<setw(8)<<setprecision(5)<<dvar<<endl;

}