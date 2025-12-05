#include<iostream>
using namespace std;

//friend function
//friend function dose not get this pointer
class Point
{
    private:
        int x;// data member
        int y; // int data member
    public:
        //Parameterless constructor
        Point()
        { 
            this->x=10;
            this->y=20;
            cout<<"Inside the constructor of Point class"<<endl;
        }
        // parameterized constructo
        
        Point(int x, int y)
        {
            this->x=x;
            this->y=y; 
            cout<<"Inside the constructor of Point class"<<endl;
        }
        //friend signature of function(return_type functionName(arguments withdata type));
        friend void display(Point p1); //declaring friend function

};


//non memeber function (global function)
void display(Point p1)
{
    cout<<"x="<<p1.x<<endl;//accessing the private data members of point class outy side the class
    cout<<"y="<<p1.y<<endl;//accessing the private data members of point class outy side the class
}

int main()
{
    Point p1;
    display(p1);
}