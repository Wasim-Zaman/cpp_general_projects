#include <iostream>

using namespace std;

int variable=0;   //Globally declared

int main()
{
    int variable=0;   //Locally declared
    variable=23;
    ::variable=13;
    cout<<::variable<<endl;
    cout<<variable;

    return 0;
}
