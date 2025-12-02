#include<iostream>        //#include<stdio.h>

//I want to include the element of std namespace in to my program
using namespace std;
//cin cout
int main()
{
    int num1;
    // std::cout<<"\n Enter the value for num1=";  //  printf("\n Enter the value for num1=");
    // std::cin>>num1; //scanf("%d", &num1);
    // std::cout<<"\n num1= "<<num1;//printf("\n Num1=%d",num1);

    cout<<"\n Enter the value for num1=";  //  printf("\n Enter the value for num1=");
    cin>>num1; //scanf("%d", &num1);
    cout<<"\n num1= "<<num1;//printf("\n Num1=%d",num1);

    
}