#include <iostream>
using namespace std;

class Person{
    private:
        string name;
        int age;
        string address;
    public:
        void walk()
        {
            cout<<"Person is walking"<<endl;
        }
        void talk()
        {
            cout<<"Person is talking"<<endl;
        }
        void accept()
        {
            cout<<"-------------------------------------"<<endl;
            cout<<"Enter name : ";
            cin>>name; 
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter address : ";
            cin>>address;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Address : "<<address<<endl;
        }
};

int main()
{
    Person p1;
    p1.walk();
    p1.talk();
    p1.accept();
    p1.display();
}