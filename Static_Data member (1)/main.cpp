#include <iostream>

using namespace std;
class Race
{
private:
    static int count;
    int carNo;
public:
    Race()
    {
        count++;
        carNo=0;
    }
    void setCarNo(int CN)
    {
        carNo=CN;
    }
    void printData()
    {
        cout<<"Total Cars = "<<count<<", Car No = "<<carNo<<endl;
    }
};
int Race::count=0;
int main()
{
    Race c1,c2,c3;
    c1.setCarNo(13); c2.setCarNo(23); c3.setCarNo(10);

    c1.printData(); c2.printData(); c3.printData();

     Race c4;
     c4.setCarNo(19);
     c4.printData();

    return 0;
}
