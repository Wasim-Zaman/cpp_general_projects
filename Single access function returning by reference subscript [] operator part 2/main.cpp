#include <iostream>

using namespace std;


const int Limit = 10;
class safeArray
{
    int arr[Limit];
public:
    int& access(int n)
    {
        if(n<0 || n>=10)
        {
            cout<<"Index out of limit ";
            exit(1);
        }
        return arr[n];
    }
};
int main()
{
    int temp;
    safeArray sa1;
    for(int m=0;m<Limit;m++)
    {
        sa1.access(m) = m*10;   //Actually means // sa1.arr[m] = m*10;
    }
    for(int m=0;m<Limit;m++)
    {
        temp = sa1.access(m);   //Actually means  //  temp = sa1.arr[m];
        cout<<"Value at index "<<m<<" = "<<temp<<endl;
    }
    return 0;
}
