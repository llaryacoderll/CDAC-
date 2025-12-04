#include<iostream>

using namespace std;
//Constructor
class Person
{
    private:
        string name; //property => data member of class person
        int age;//property => data member of class person
        string add;//property => data member of class person
    public:
        //Constructor
        Person()
        {
            //In cotructor init the data memebr of class
            name="Om";
            age=23;
            add="Pune";
            cout<<"Inside the constructor of Person class...!"<<endl;
        }

        //member functionof class Person
        void talk()
        {
            cout<<"Person is talking"<<endl;
        }
        //member functionof class Person
         void walk()
        {
            cout<<"Person is walking"<<endl;
        }
        //member functionof class Person
        void accept()
        {
            cout<<" Enter the name="<<endl;
            cin>>name;

            cout<<" Enter the age="<<endl;
            cin>>age;

            cout<<" Enter the address="<<endl;
            cin>>add;    
        }
        //member functionof class Person
        void display()
        {
            cout<<endl<<"==========="<<endl;
            cout<<" the name="<<name<<endl;

            cout<<"  the age="<<age<<endl;

            cout<<" the address="<<add<<endl;
        }

};//end of class


int main()
{
    Person p1;//p1 is an obj of class Perosn    //instantiation=> creating an onj of class
    p1.display();
    // p1.accept();
    // cout<<"======After assignment=========="<<endl;
    // p1.display();
    Person p2;

    // Note:- Constructor of class will be called at inception when object of class gets
    //created to initialize the data emembrs of class, only once in lifespan of per object
    //at the inception.

}