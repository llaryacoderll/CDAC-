#include<iostream>

using namespace std;
//Inspector and mutator and destructor
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
        //Inspector/getter function
        string getName()
        {
            return name;// returning the value of private data membr  out side the class
        }
        //Inspector/getter function
        int getAge()
        {
            return age;// returning the value of private data membr  out side the class
        }

         //Inspector/getter function
         string getAdd()
         {
            return add; //returning the value of private data membr  out side the class
         }

         //mutator or setter function
         void setName(string nm)//"Ramesh"
         {
            name=nm;//"Ramesh" //modifying or changing the value of private data member of class from out side the class
         }
         //mutator or setter function
         void setAge(int ag)//26
         {
            age=ag;//26  //modifying or changing the value of private data member of class from out side the class
         }

          //mutator or setter function
         void setAdd(string ad)//"Mumbai"
         {
            add=ad;//"Mumbai"  //modifying or changing the value of private data member of class from out side the class
         }
         //Note:- Destructor of class will be called only once in a lifespane  of an per object at the end when
         //object of class goes out of scope (automatically) and when we call delete operator(manually)
         //destructor
        ~Person()
        {
            cout<<"Inside the destructor of Person class"<<endl;
        }

};//end of class


int main()
{
    Person p1;//parameterless constructor will be calleds//p1 is an obj of class Perosn    //instantiation=> creating an onj of class
    
    cout<<"name="<<p1.getName()<<endl; //p1.name;//accessing the private data membr of class out side the class
    cout<<"age="<<p1.getAge()<<endl;//p1.age;//accessing the private data membr of class out side the class
    cout<<"address="<<p1.getAdd()<<endl; // p1.add;//accessing the private data membr of class out side the class
    cout<<"====After modification===="<<endl;
     p1.setName("Ramesh");//p1.name="Ramesh";//change the private data member of class out side the class
     cout<<"name="<<p1.getName()<<endl; //p1.name;//accessing the private data membr of class out side the class
     p1.setAge(26); // p1.age=26;
    p1.setAdd("Mumbai"); // p1.add="Mumbai"
     cout<<"age="<<p1.getAge()<<endl;//p1.age;//accessing the private data membr of class out side the class
    cout<<"address="<<p1.getAdd()<<endl; // p1.add;//accessing the private data membr of class out side the class
    
  
}