#include <iostream>
#include <string>
using namespace std;

template <class X>
class List
{
    X arr[5];
public:
    void setList()
    {
        cout << "Enter the selected type of value\n";
        for(int w=0;w<5;w++)
        {
            cin>>arr[w];
        }
    }
    void showList()
    {
        for(int m=0;m<5;m++)
        {
            cout<<arr[m]<<"  ";
        }
        cout<<endl<<endl;
    }
};
int main()
{
    List<char>l1;
    l1.setList();
    l1.showList();
    return 0;
}
