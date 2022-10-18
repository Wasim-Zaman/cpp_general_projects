#include <iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

class LogIN
{
private:
    static int count;
    char Email[50];
    char Pass[30];

    LogIN()
    {
        strcpy(Email,"wasim.zaman23@gmail.com");
        strcpy(Pass,"wasim23699");
    }
public:
    void print()
    {
        cout<<"Email     : "<<Email<<endl;
        cout<<"Password  : "<<Pass<<endl;
    }
    static LogIN* access()  //static method for the sack of accessness without object
    {
        if(count==0)
        {
        LogIN *ptr=new LogIN;   // for the allocation of dynamic memory,so that the object can't destroy when the scope of function finish
        count++;
        return (ptr);
        }
        else
        {
            return (NULL);
        }
    }

};
int LogIN::count=0;     //definition of static variable
int main()
{
    LogIN *userPointer;
    userPointer=LogIN::access();
    if(userPointer!=NULL)
    {
        userPointer->print();
    }
    else
        cout<<"No more user can be created";
    LogIN *p;
    p=LogIN::access();
    if(p!=NULL)
    {
        p->print();
    }
    else
        cout<<"\n\nNo more user can be created\n\n\n";

    return 0;
}
