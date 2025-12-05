#include<iostream>
using namespace std;
//dynamic memory allocation
int main()
{
    int * ptr=new int;// It will allocate the 4 byte dynamic memory
    //in heap section and init with garbage value at last
    // return its address
    cout<<"value at ptr="<<*ptr<<endl;
    *ptr=10;
    cout<<"after manipulation value at ptr="<<*ptr<<endl;

    int * ptr1=new int(10);// It will allocate the 4 byte dynamic memory
    //in heap section and init the dynamic memory withdesired value
    //at last return its address

    delete ptr; // delete is the operator which will deallocate the dynamic memory
    delete ptr1; // delete is the operator which will deallocate the dynamic memory
}