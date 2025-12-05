#include<iostream>
using namespace std;

//dynamic memory allocation for dynamic block or array 
int main()
{
    
    //dataType * pointerName=new dataType[size];
    int * ptr=new int[5];//dynamic block of 5 element will get
    // allocated in heap section and will be init with garbage value
    //and base address(address of 1st ele) of dynamic block will 
    //be return.

    // for(int i=0;i<5;i++)
    // {
    //     cout<<" "<<ptr[i];
    // }

        ptr[0]=10;
        ptr[1]=20;
        ptr[2]=30;
        ptr[3]=40;
        ptr[4]=50;

     for(int i=0;i<5;i++)
    {
        cout<<" "<<ptr[i];
    }
    //Q. how to deallocate the dynamic array or dynamic block ?
    // ans. delete [] baseAddress or pointer;
    delete [] ptr;//deallocating the dynamic array.
}