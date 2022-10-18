#include <iostream>

using namespace std;

class complex
{
private:
    static int a;
    static int b;
public:
    int static add()
    {
        return a+b;
    }
};
int complex::a=13;
int complex::b=23;
int main()
{
    cout << "The sum of the static data members of class complex = " <<complex::add()<< endl;
    return 0;
}
