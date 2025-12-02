#include<stdio.h>

int main()
{
    bool num1=false;

    if(num1)//true
    {
        //true part
        printf("\n Inside true part...!");
    }
    else
    {

        //false part
        printf("\n Inside the false part...!");
    }

    printf("\n num1=false bool num=%d", num1);//0
    num1=true;
     printf("\n num1=true bool num=%d", num1);//1
    
     char ch='A'; // 1 byte //'A' => 65 ASCII of 'A'

     wchar_t wch='@';

     printf("\n size of char ch =%d",sizeof(ch)); // 1
     printf("\n size of wchar_t wch =%d",sizeof(wch)); // 2 or 4

     
     

}