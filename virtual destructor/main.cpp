#include <iostream>
#include "Example.h"
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"I am constructor of Base class\n";
    }
    virtual ~Base()
    {
        cout<<"I am destructor of Base Class\n";
    }
};
class Derived:public Base
{
public:
    Derived()
    {
        cout<<"I am constructor of Derived class\n";
    }
    ~Derived()
    {
        cout<<"I am destructor of Derived Class\n";
    }

};
int main()
{
    Derived *d=new Derived();
    Base *b=d;
    delete b;
    cout<<"\n\n\n\n";
    /////////////////////////
    A *ptr = new B();
    delete ptr;
    return 0;
}
