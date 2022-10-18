#include <iostream>

using namespace std;

class setter
{
private:
    int number;
public:
    setter() :number(0)
    {

    }
    void setNumber(int n)   //set / setter function
    {
        if(n>=0)
        number=n;
        else
        cout<<"Negative number can't be stored in the object's data member\n";
    }
    int getNumber()     //get / getter function
    {
        return number;
    }
};
int main()
{
    setter obj1,obj2;
    int m;
    cout<<"Enter the positive number to assign in the object's data member\n";
    cin>>m;
    obj1.setNumber(m);
    obj2.setNumber(13);
    cout<<"The value stored in the data member of object obj1 = "<<obj1.getNumber()<<endl;
    cout<<"The value stored in the data member of object obj2 = "<<obj2.getNumber()<<endl;


    return 0;
}
