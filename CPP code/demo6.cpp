#include <iostream>
using namespace std;

void sum(int a,int b)
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}

void sum(int a,int b,int c)
{
    cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<endl;
}

void sum(double a,double b)
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}

void sum(double a,int b)
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}

void sum(int a,double b)
{
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
}

int main()
{
    sum(10,20);
    sum(10,20,30);
    sum(5.3,6.8);
    sum(6.3,5);
    sum(9,5.6);
}