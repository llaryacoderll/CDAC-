#include<iostream>
using namespace std;
//Static member function
class test
{
    private:
        static int count;//static data member
        int temp; //non static data member
    public:
        test()
        {
            temp=10;
        }
        //non static member function
        void print()
        {
            cout<<"count="<<++count<<endl;
            cout<<"temp="<<++temp<<endl;
            //display();//ok => we can call the static member function within non static member funtion
        }

        //static member function
        static void display()
        {
            cout<<"count="<<count<<endl;
            //cout<<"temp="<<temp<<endl; //not ok => within static member function
            //we can not access non static data members
            // print();//not ok =not  we can not call non static member function inside
             //static memmer function 
        }

};
int test::count=10;//initialized or deifined the static data member
//dataType ClassName::StaticDataMemberName=value;

int main()
{

    test::display();// recommended to invoke   //calling static member function
    // nameOfCLass::staticMemberFunction();
    test t1; //obj 
    t1.print(); // calling the non static member function
    t1.display();   //ok //we can call static member function with object of class
    //but it is not recommended.


}