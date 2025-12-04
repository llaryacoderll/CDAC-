#include<iostream>

using namespace std;
//types of Constructor
class Person
{
    private:
        string name; //property => data member of class person
        int age;//property => data member of class person
        string add;//property => data member of class person
    public:
        //Parameterless Constructor
        Person()
        {
            //In cotructor init the data memebr of class
            name="Om";
            age=23;
            add="Pune";
            cout<<"Inside the Parameterless constructor of Person class...!"<<endl;
        }

        //Parameterized constructor 
        Person(string nm, int a, string ad)
        {
            name=nm;//"Ramesh"
            age=a;//25
            add=ad;//"Mumbai"
            cout<<"Inside the parameterized constructor of Person class...!"<<endl;

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
    Person p1;//parameterless constructor will be calleds//p1 is an obj of class Perosn    //instantiation=> creating an onj of class
    p1.display();
  

    Person p3("Ramesh",25, "Mumbai");//parameterized constructor will be called
    p3.display();

}