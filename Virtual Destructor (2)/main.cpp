#include <iostream>

using namespace std;

int fun();
class A
{
    int *a;
public:
    A()
    {
         a = new int;
    }
    void f1(){ cout << "Hello f1() "<<endl; }
    virtual ~A()
    {
        delete a;
        cout << "Memory for pointer a released "<<endl;
    }
};
class B:public A
{
    int *b;
public:
    B()
    {
        b = new int;
    }
    void f2(){ cout << "Hello f2() "<<endl; }
    ~B()
    {
        delete b;
        cout << "Memory for pointer b released "<<endl;
    }
};

int fun()
{
    A *p = new B;   //Base pointer can point to the object of derived class

    p->f1(); //early binding

    delete p; //deleting memory block not a pointer
}
int main()
{
    fun();
    return 0;
}
