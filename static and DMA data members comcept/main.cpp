#include <iostream>

using namespace std;

class test
{
    public:
    static int a;
    int *ptr=new int(22);

    void fun()
    {
        cout<<*ptr<<endl;
    }
};
int test::a=13;
int main()
{

    cout<<a;
    return 0;
}
