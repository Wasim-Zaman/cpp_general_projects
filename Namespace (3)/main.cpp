#include <iostream>

using namespace std;

namespace newSpace
{
    char name[20];
    int RollNo;
    void fact(int);
    class ABC
    {
        int a,b;
    public:
        int greaterNo();
        void setData();
    };
}
void newSpace::fact(int n)
{
    int res=1;
    while(n!=0)
    {
        res *= n;
        n--;
    }
    cout<<"factorial = "<<res<<endl;
}

void newSpace::ABC::setData()
{
    cout<<"\nenter the value of a   :";  cin>>a;
    cout<<"\nenter the value of b   :";  cin>>b;
}
int newSpace::ABC::greaterNo()
{
    return ((a>b)?a:b);
}

using namespace newSpace;
int main()
{
    name[20] = 'Muhsim';
    RollNo   = 1323;
    cout<<"..........Information.........."<<endl;
    cout<<"Name = "<<name<<"  Roll number = "<<RollNo<<endl<<endl;
    fact(5);
    ABC o1;
    o1.setData();
    cout<<"The greater value is  "<<o1.greaterNo();
    return 0;
}
