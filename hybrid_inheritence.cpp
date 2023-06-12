#include<iostream>
using namespace std;
// A
class A
{
    public:
        void funcN()
        {
            cout<<"North Inherited"<<endl;
        }
};

// B
class B : public A
{
    public:
        void funcW()
        {
            cout<<"West Inherited"<<endl;
        }
};

// C
class C
{
    public:
        void funcE()
        {
            cout<<"East Inherited"<<endl;
        }
};

// D
class D : public C, public B
{
    public:    
};

// main
int main()
{
    D d;
    d.funcN();
    d.funcE();
    d.funcW();
    cout<<"South Inherited"<<endl;
    return 0;
}