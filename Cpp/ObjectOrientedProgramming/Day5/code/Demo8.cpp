#include<iostream>
using namespace std;

//operator overloading => extending the meaning of oeperator is called as operator
//overlading
//that is providing some other meaning to the operator
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

        //operator over loading using member function
        Point operator+(Point & p2)
        {
            //this pointer holdin an address of p1.
              /*
                some other meaning
                r=  p1   +    p2
                r.x=p1.x + p2.x
                r.y=p1.y + p2.y
            */  
            Point r ;
            //r.x=    10   +  10 =>20
            // r=  p1   +    p2
            r.x= this->x+ p2.x;
            //  r.y=p1.y + p2.y
            //r.y=20 + 20 =>40
            r.y=this->y+p2.y; 
            return r;  // returning the result          
        }

        void display()
        {
           
            cout<<"x="<<this->x<<endl;
            cout<<"y="<<this->y<<endl;
        }
        friend Point operator-(Point & p1, Point & p2);// declaring the friend function
};

//operator overloading with non member function
Point operator-(Point & p1, Point & p2)
{
    
         /*
        some other meaning

        r=  p1   +    p2
        r.x=p1.x + p2.x
        r.y=p1.y + p2.y
     */
    Point r;
      // 10  -  10 =>0
    r.x=p1.x-p2.x;
    //r.y=20 - 20 =>0  
    r.y=p1.y-p2.y;
    return r;
}


int main()
{

   // int num1=10, num2=20;
        ///   10   +20   =>30
  //  int res= num1  +  num2;
          // int   +  int => basic data type  
    Point p1, p2;
    Point r;
    //obj Point + obj Point  => user defined data type
    r=  p1   +    p2;//p1.oeprator+(p2); //here address of p1 will be be passed to the operator+()
    //in this pointer and reference of p2 will be passed
    
    // here + operator dose not have any idea what operation to be performed 
    //when its operands are Point class object(user defined data type)
    //to resolve above the problem we should oberlod + operator.
   
    /*
        some other meaning

        r=  p1   +    p2
        r.x=p1.x + p2.x
        r.y=p1.y + p2.y
     */
      cout<<"Add of p1+p2"<<endl;
    r.display();//x=20  // y=40
    //obj Point - obj Point  => user defined data type
   r= p1   -    p2;// operator-(p1, p2);

   // here - operator dose not have any idea what operation to be performed 
    //when its operands are Point class object(user defined data type)
    //to resolve above the problem we should oberlod - operator.
  /*
        some other meaning
        r=  p1   -    p2
        r.x=p1.x - p2.x
        r.y=p1.y - p2.y
     */
    cout<<"Sub of p1-p2"<<endl;
    r.display();//x=0 //y =0
}