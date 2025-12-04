#include<iostream>
using namespace std;
//Exception handling
//Ecepetion is nothing but runtime error arises during program is running.
int main()
{
   try
   {
         cout<<"Hello Sunbeam Pune...!"<<endl;
        cout<<"Hello Students...!"<<endl;
        //throw 10; //throwing an exception of type int
        //throw 11.11;// //throwing an exception of type double
        throw 'A';//throwing an exception of type char
        cout<<"Hello Sunbeam Karad...!"<<endl;//this code never be executed
        cout<<"Code to release the resources"<<endl;//this code never be executed

   }
   catch(int ex)
   {
        // exception handling logic
        cout<<"catch(int ex) error code="<<ex<<endl;
        cout<<"Code to release the resources"<<endl;
   }
   catch(double ex )
   {
         // exception handling logic
        cout<<"  catch(double ex ) error code="<<ex<<endl;
        cout<<"Code to release the resources"<<endl;
   }
   catch(...) //default / generic catch block => to handle the unknown exception we will use default catch block
   {
     cout<<"Inside the default catch block"<<endl;
     cout<<"Code to release the resources"<<endl;
   }
}