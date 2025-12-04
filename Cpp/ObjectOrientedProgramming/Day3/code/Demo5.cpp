#include<iostream>

using namespace std;
//this pointer
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
            this->name="Om";
            this->age=23;
            this->add="Pune";
            cout<<"Inside the Parameterless constructor of Person class...!"<<endl;
            cout<<"this=>"<<this<<endl; //100
        }

        //Parameterized constructor 
        Person(string name, int age, string add)
        {
            //here name of private data member and name of parameters are same
            this->name =  name;
            //dataMember= parameter;
            this->age=age;
            this->add=add;
            cout<<"Inside the parameterized constructor of Person class...!"<<endl;
            // Person p3;
            // this=&p3; //Not ok as this is constant pointer
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
    Person p1;// here constructor of Person class will be called and an address if
    //p1 obj will be passed to the constructor of class automatically(implicitly)//p1 is an obj of class Perosn   
    cout<<"address of p1="<<&p1<<endl;//100 // address of p1 obj
    p1.display();//here address of obj p1 will be passed to the display() in the 
    //form of this pointer automatically
    //
    Person p2("Ramesh", 26, "Mumbai");
    p2.display();
}