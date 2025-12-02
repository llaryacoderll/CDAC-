#include <iostream>
using namespace std;

namespace ns1{
    int num1 = 10;
    int num2 = 40;

    void hi()
    {
        cout<<"Helllo.."<<endl;
    }

    namespace nsese{
        int num1 = 20;
    }
}
namespace ns2{
    int num1 = 30;
}
int num1 = 50;
int main()
{
    int num1 = 60;
    cout<<"num1 = "<<num1<<endl;
    cout<<"::num1 = "<<::num1<<endl;
    cout<<"ns1::num1 = "<<ns1::num1<<endl;
    cout<<"ns1::nsese::num1 = "<<ns1::nsese::num1<<endl;
    cout<<"ns2::num1 ="<<ns2::num1<<endl;
    ns1::hi();

}
