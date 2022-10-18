#include <iostream>
#include <string>
using namespace std;

int main()
{
    string *ptr;
    ptr=new string;
    cout<<"Enter the name to store it in the dynamically allocated variable\n";
    getline(cin,*ptr);
    cout<<"The name stored in the dynamically created variable is:  "<<*ptr;
    delete ptr;
    return 0;
}
