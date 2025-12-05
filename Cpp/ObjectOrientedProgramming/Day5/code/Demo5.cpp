#include<iostream>
using namespace std;

//Copy constructor
//shallow copy
class Point
{
    private:
        int x;// data member
        int * y; //pointer to int data member
    public:
        //Parameterless constructor
        Point()
        { 
            x=10;
            y=new int(20);//in heap section dynamic memroy of 4 byte will be allocated
            //and init with value 20 and address will be return and init within
            //pointer y  
            cout<<"Inside the constructor of Point class"<<endl;
        }
        // parameterized constructo
        
        Point(int x, int y)
        {
            this->x=x;
            this->y=new int(y);//in heap section dynamic memroy of 4 byte will be allocated
            //and init with value 20 and address will be return and init within
            //pointer y  
            cout<<"Inside the constructor of Point class"<<endl;
        }

        //non constant member function
        void display()
        {
           
            cout<<"x="<<this->x<<endl;
            cout<<"y="<<*this->y<<endl;
        }

        void setY(int y1)
        {
            *this->y=y1; // modifying the data member y. 
        }
    ~Point()
    {
        cout<<"Inside the Destructor of Point class...!"<<endl;
    }
};

int main()
{
    Point p1; // existing obj 
    Point p2=p1; //copy con called and deep copy will be created
   
    p1.display();
    cout<<"After modification"<<endl;
    p2.setY(10);
  
    p1.display();

}