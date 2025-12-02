#include<iostream>  
using namespace std;

void sum(int n1, int n2 , int n3=0,int n4=0)
{
    cout<<"sum="<<n1 + n2 + n3 + n4<<endl;
}


int main()
{
    sum(10,20,30,40);
    sum(10,20,30);//1 input is less
    sum(11,22);

}