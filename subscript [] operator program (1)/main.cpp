#include <iostream>

using namespace std;
const int Limit = 10;
class safeArray
{
    private:
        int arr[Limit];
    public:
        void putele(int i,int v)  // i argument for index v for value
        {
            if(i<0 || i>=Limit)
            {
                cout<<"Index out of limit "<<endl;
                exit(1);
            }
            arr[i] = v;
        }
        int getele(int i)
        {
            if(i<0 || i>=10)
            {
                cout<<"Index out of limit "<<endl;
                exit(1);
            }
            return arr[i];
        }

};
int main()
{
    int temp;
    safeArray sa1;
    for(int m=0;m<Limit;m++)
    {
        sa1.putele(m,m*10);
    }
    for(int m=0;m<Limit;m++)
    {
        //cout<<sa1.getele(m)<<" ";
        temp = sa1.getele(m);
        cout<<"Element at index "<<m<<" = "<<temp<<"\n";
    }
    return 0;
}
