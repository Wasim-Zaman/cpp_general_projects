#include <iostream>
using namespace std;

class A
{
    int *a;
    public:
    A()
    {
        a = new int;
        cout<<"New external memory is consumed by A class :"<<endl;
    }
    virtual ~A()
    {
        delete a;
        cout<<"New external memory is released by A class :"<<endl;
    }
};

class B : public A
{
    int *b;
    public:
    B()
    {
        b = new int;
        cout<<"New external memory is consumed by B class :"<<endl;
    }
    ~B()
    {
        delete b;
        cout<<"New external memory is released by B class :"<<endl;
    }
};
