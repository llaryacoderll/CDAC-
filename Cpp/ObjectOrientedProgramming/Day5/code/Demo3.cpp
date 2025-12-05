#include<iostream>
using namespace std;

//can we allocate the dynamic memroy for an object of class or variable of struct
//ans:- Yes
//dynamic memory allocation for dynamic block or array 


class Point
{
    private:
        int x;// data member
        int y; //non constant data member
    public:
        //Parameterless constructor
        Point()
        { 
            x=10;
            y=20; //ok as y is non constant
            cout<<"Inside the constructor of Point class"<<endl;
        }
        // parameterized constructo
        
        Point(int x, int y)
        {
            this->x=x;
            this->y=y;
            cout<<"Inside the constructor of Point class"<<endl;
        }
        
        //non constant member function
        void display()
        {
           
            cout<<"x="<<this->x<<endl;
            cout<<"y="<<this->y<<endl;
        }
    ~Point()
    {
        cout<<"Inside the Destructor of Point class...!"<<endl;
    }
};



int main()
{
    //Point p1; //obj strored in stack section
   Point * ptr= new Point;
   delete ptr;//deallocate the memory
   //calling the destructor of point class using delete operator
}