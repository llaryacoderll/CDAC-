#include<iostream>  
#include<iomanip>
using namespace std;
// #define sum(a,b) (a+b)
inline void sum(int n1, int n2)
{
    cout<<"sum="<<n1+n2<<endl;
}
int main()
{
    sum(10,20); //calling the inline function
}