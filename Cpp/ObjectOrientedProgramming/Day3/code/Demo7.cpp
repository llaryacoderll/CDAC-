#include<iostream>
using namespace std;
//constructor members initializers list
class Point
{
    private:
        int x;
        int y;
    public:
        //Parameterless constructor
        Point():x(10),y(20)  // constructor members initializers list
        { 
            //Note:here using constructor members initializers list we have initialized
            //the data member of class within signature of constructor
            //body of constructor
            // x=10;
            // y=20;
            cout<<"Inside the parameterless constructor of class...!"<<endl;
        }
        // parameterized constructo
        
        Point(int x, int y)//paramterless constructor
        {
            this->x=x;
            this->y=y;
            cout<<"Inside the parameterized constructor of class...!"<<endl;
        }
        
        //Inspector fucntion
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }

        //mutator
        void setX(int x)
        {
            this->x=x;
        }
        void setY(int y)
        {
            this->y=y;
        }

        //facilitator fun
        void display()
        {
            cout<<"x="<<this->x<<endl;
            cout<<"y="<<this->y<<endl;
        }

        ~Point()
        {
            cout<<"Inside the destructor of Point class...!"<<endl;
        }
};

int main()
{
    Point p1; //
    p1.display();
}