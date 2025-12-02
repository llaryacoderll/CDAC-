#include<stdio.h>
//namespace
namespace ns1
{
    // private://not ok=> we can not use acceess specifier in name space 
    //we can not create the variable of name
    //element of namespace
    int num1=30;//element of namespace
    int num2=40;//element of namespace
    //element of namespace
    void hi()
    {
        printf("Hi Students...!");
    }

    //nested namespace
    namespace nesNs
    {
        int num1=50; //element of nested namespace  
    }
}

namespace ns2
{
    int num1=60;//element of namespace ns2
}
int num1=20;//global var
//name collision
int main()
{
    int num1=10;
   printf("num1=%d",num1);//10
    //how to access the element of global namespace?
    printf("\n global num1=%d", ::num1); //accessing the elemnt of global namespace num1 
   //Q. How to access the element of namespace ?
//    ans:- nameOfNamespace::elementName;
    printf("\n ns1 num1=%d",ns1::num1);//30
    printf("\n ns1 num2=%d",ns1::num2); //40

    ns1::hi();//calling the function defined in namespace

    //Q. How to access the element of nested namespace ?
    // ans: outerNamespaceName::nestedNamespaceName::elmentName;
    printf("\n Nested name space ele num1=%d",ns1::nesNs::num1); //accessing an element of nessted name space

    printf("\n num1 of ns2=%d", ns2::num1);//60
}