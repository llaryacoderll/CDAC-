#include<iostream>
using namespace std;
//Static data member
class test
{
    private:
        static int count;//static data member
        int temp; //non static data member
    public:
        test()
        {
            temp=10;
        }

        void print()
        {
            cout<<"count="<<++count<<endl;
            cout<<"temp="<<++temp<<endl;
        }

};
int test::count=10;//initialized or deifined the static data member
//dataType ClassName::StaticDataMemberName=value;

int main()
{
    test t1,t2,t3;
    t1.print();
    t2.print();
    t3.print();


}