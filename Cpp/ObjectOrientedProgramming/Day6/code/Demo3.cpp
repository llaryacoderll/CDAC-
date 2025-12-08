#include<iostream>
using namespace std;
//solution to the Diamond problem
//indirect base class
class A
{

    public:

    A()
    {
        cout<<"Inside the class A constructor"<<endl;
    }

    
    ~A()
    {
        cout<<"Inside the class A Destructor"<<endl;
    }
};

class B:virtual public A //virtual base class
{

    public:

    B()
    {
        cout<<"Inside the class B constructor"<<endl;
    }

    
    ~B()
    {
        cout<<"Inside the class B Destructor"<<endl;
    }
};

class C: virtual public A //virtual base class
{

    public:

    C()
    {
        cout<<"Inside the class C constructor"<<endl;
    }

    
    ~C()
    {
        cout<<"Inside the class C Destructor"<<endl;
    }
};

class D:public B, public C
{

    public:

    D()
    {
        cout<<"Inside the class D constructor"<<endl;
    }

    
    ~D()
    {
        cout<<"Inside the class D Destructor"<<endl;
    }
};

int main()
{
    D d1; // d1 is obj of indirect derived class


}