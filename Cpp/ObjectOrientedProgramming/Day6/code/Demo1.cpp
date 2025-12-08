#include<iostream>
using namespace std;
//base / Parent class
class Person
{
    //by default access specifier of class is private
        //base class properties
    protected:
        string name;
        int age;
        string add;
    public:
        Person()
        {
            name="Om";
            age=23;
            add="Pune";
            cout<<"Inside the Person class constructor...!"<<endl;
        }
        Person(string nm, int a, string ad)
        {
            name=nm;
            age=a;
            add=ad;
            cout<<"Inside the Person class constructor...!"<<endl;
        }

        void display()
        {
    
            cout<<"name="<<name<<endl;
            cout<<"age="<<age<<endl;
            cout<<"add="<<add<<endl;
            
        }

        ~Person()
        {
            cout<<"Inside the Person class destructor...!"<<endl;
        }

};

//derived or child class of Person class
class Employee: private Person
{   
    //specific properties of derived class Employee
    int id;
    double sal;
    string dept;
    public:
        Employee()
        {
            id=101;
            sal=5000;
            dept="PGCP-AC";
            cout<<"Inside the derived class constructor"<<endl;
        }

        Employee(int i, double s, string d)
        {
            id=i;
            sal=s;
            dept=d;
            cout<<"Inside the derived class constructor"<<endl;
        }
        
        void print()
        {
            //Note:-//we can access the base class properties in derived class as they 
            //are declared as protected in parent class
            cout<<"name="<<name<<endl;//accessing the base class property in derived class
            cout<<"age="<<age<<endl; //accessing the base class property in derived class
            cout<<"add="<<add<<endl; //accessing the base class property in derived class
          
            cout<<"id="<<id<<endl;
            cout<<"sal="<<sal<<endl;
            cout<<"dept="<<dept<<endl;
        }

        ~Employee()
        {
            cout<<"Inside the Employee class destructor...!"<<endl;
        }
};

int main()
{

    Employee e1;//obj of derived class
    //Note:- Incase of inheritance when we create an object of derived class
    //1st parent class or base class constructor will be called and at last derined class
    //or child class cconstructor will be called.
    //Destructor calling sequence is exactly opposit of constructor calling sequence
    //1st derived class or child class destructor will be called 1st and then at last 
    //base class or parent class destructor will be called.  
    e1.print();
}