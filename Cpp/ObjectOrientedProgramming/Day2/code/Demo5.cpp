#include<iostream>  
using namespace std;
//default argument
//Note:- you must start giving default argument from right to left
//Note:- when default value is given and argumrnt is also gine then
//priority will be given to the argument passed by the user
//default value will be assigned when argument is not passed 
// void sum(int n1=0, int n2=0 , int n3,int n4)// not ok 
// void sum(int n1, int n2=0 , int n3=0,int n4) //not ok
     //      10      20      30   
      //     11      22        0        0    
void sum(int n1, int n2 , int n3=0,int n4=0)
{
            //    10 + 20 +30  +40 =>100
               // 10 + 20+ 30+0 =>60
               //11  + 22 +0 +0 =>33
    cout<<"sum="<<n1 + n2 + n3 + n4;
}


int main()
{
    sum(10,20,30,40);
    sum(10,20,30);//1 input is less
    sum(11,22);

}