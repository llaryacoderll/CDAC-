#include<iostream>
using namespace std;
//dependency
class date
{
    int dd;
    int mm;
    int yy;
    public:
        date()
        {
            dd=4;
            mm=12;
            yy=2000;
            cout<<"Inside the body of date class...!"<<endl;
        }

        void print()
        {
            cout<<"date="<<dd<<"/"<<mm<<"/"<<yy<<endl;
        }
        
        ~date()
        {
            cout<<"Inside the date class destructor"<<endl;
        }
};

//dependent
class Person
{
    string name;
    string add;
    date dob;//here dob is an obejct of date class which will be treated as data member of Person class
    public:
        Person()
        {
            name="OM";
            add="Pune";
            cout<<"Inside the Person class constructor"<<endl;

        }

        void display()
        {
            cout<<"name="<<name<<endl;
            cout<<"add="<<add<<endl;
            cout<<"Birth";
            dob.print();
        }

        ~Person()
        {
            cout<<"Inside the Person class destructor"<<endl;
        }

};


int main()
{
    Person p1; // obj of dependent class
    //Q. which class constructor and destructor will be called 1st?
    p1.display();
}