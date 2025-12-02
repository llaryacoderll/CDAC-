#include<iostream>  
using namespace std;
//function overloading=> function with same name but different signature(different parameterlist)
void sum(int n1, int n2) // 2 args int int
{
    cout<<"sum(int n1, int n2) sum="<<n1+n2<<endl;
}
// Case1: Differ in number of input arguments.
void sum(int n1 ,int n2, int n3)// 3 args int int int
{
    cout<<"sum(int n1 ,int n2, int n3) sum="<<n1+n2+n3<<endl;
}

//Case2: Differ in data type of input arguments
void sum(double n1,double n2)
{
    cout<<"sum(double n1,double n2) sum="<<n1+n2<<endl;
}
// Case3: Differ at least in the sequence of the input arguments.
void sum(int n1, double n2) // 2 agrs int , double
{
    cout<<"sum(int n1, double n2) sum="<<n1+n2<<endl;
}

void sum(double n1 ,int n2) // 2 agrs double , int
{
    cout<<"sum(double n1 ,int n2) sum="<<n1+n2<<endl;
}

int main()
{   
   // sum(10,20);
   // sum(10,20,30);//3 agrs
   // sum(10.23, 20.40);//2 arg
    //double , double

   // sum(11.34, 20); // 2 agrs 
     // double, int 
     sum(10,23.45); // 2 agrs 
       //int,double 
}