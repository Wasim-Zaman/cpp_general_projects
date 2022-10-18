#include<iostream>
using namespace std;

template <class M>
class comp
{
private:
    M a,b;
public:
    void setData(M a,M b)
    {
        this->a=a;
        this->b=b;
    }
    void showData()
    {
        cout<<"a = "<<a<<" b = "<<b;
    }
};
int main()
{
    comp <float> c1;
    c1.setData(13.1,23.2);
    c1.showData();
}
