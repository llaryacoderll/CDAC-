#include<iostream>
using namespace std;

//Copy constructor
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

        //Copy constructor
        // Point(Reference of Same class Object)
        Point(Point & p1)//p1 is reference => nick name of obj of Point class
        {
            //in parameter list of copy constructor we get p1 ref
            //this pointer will contain address of p2 obj
            //copying logi
            //p2.x=p1.x;
            this->x=p1.x;//10
            //p2.y=p1.y;
            this->y=p1.y;//20
            cout<<"Inside the copy constructor...!"<<endl;
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



Point print(Point p1)
{
   return p1;// copy con will be called
}

int main()
{
    Point p1; // existing obj 
    Point p2=p1;// when we are ahing existing obj of  point class and 
    // we are init the new p2 with existing obj p1 here copy constructor will
    //be called.
    //Note:- to copy constructor address of p2 will be passed in the form of this pointer
    //and reference of p1 will be passed in parametlist.
    cout<<"p1"<<endl;
    p1.display();
    cout<<"p2="<<endl;
    p2.display();
    print(p1); // copy con will be called
}