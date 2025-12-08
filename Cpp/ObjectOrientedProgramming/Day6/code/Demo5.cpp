#include<iostream>
using namespace std;
//early binding
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
        // display in base class
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
class Employee: public Person
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
        //display function in derived class
        void display()
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

    Employee e1;
    Person * ptr= &e1;

    ptr->display(); //base class display
}