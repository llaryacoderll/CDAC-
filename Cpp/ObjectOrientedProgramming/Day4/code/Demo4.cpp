#include<iostream>
using namespace std;
//mutable

class Point
{
    private:
        const int x;//constant data member
        mutable int y; //non constant data member
    public:
        //Parameterless constructor
        Point():x(10)//To initialize the const data member of a class we need to use the member initializer list
        { 
           // x=10;//not ok // you can not init the constant data member in constructors body
            y=20; //ok as y is non constant
        }
        // parameterized constructo
        
        Point(int x, int y): x(x)
        {
            this->y=y;
        }
        
        //non constant member function
        void display()
        {
            // x++;//not ok as x is constant
            y++;//ok as y is non const
            cout<<"x="<<this->x<<endl;
            cout<<"y="<<this->y<<endl;
            print();//we can call the constant member function in non constant member function
        }
        // const void print(){};// not a constant member function
        
        //constant member function
        void print() const
        {
            // ++x;
            y++;//y=20+1=21//ok as we have declared the y as mutable 
            cout<<"x="<<this->x<<endl;
            cout<<"y="<<this->y<<endl;

            //display();//not ok//calling non constant member function within constan member function
            // is not allowed
            hi();// within constant member function we can call other constant member function

        }
        //constatnt member function
        void hi() const
        {
            cout<<"Hi students...!"<<endl;
        }

};

int main()
{
    Point p1; //non const object 
   // p1.display();//non constant member function
  //  p1.print();//constant member function

    const Point p2; //p2 is constant object (read only)
   //p2.display();//not ok as we can not call the non constant member function with constant object of
    //class
    p2.print(); //ok we can call the constant member function with constant object
}