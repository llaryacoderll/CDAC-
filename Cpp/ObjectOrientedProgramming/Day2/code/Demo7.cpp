#include<iostream>

using namespace std;
//class=> blue print for an object
//Object => instance of a class
class Person
{
    private:
        string name; //property => data member of class person
        int age;//property => data member of class person
        string add;//property => data member of class person
    public:
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
    p1.accept();
    cout<<"======After assignment=========="<<endl;
    p1.display();
}