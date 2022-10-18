#include <iostream>

using namespace std;

class distance
{
private :
    int  feet;
    float inches;
public :
    distance()
    {
        feet=0;
        inches=0;
    }

    void initialize()
    {
        feet=0;
        inches=0;
    }
    void setDist(int x,float y)
    {
        feet=x;
        inches=y;
    }
    void getDist()
    {
        cout<<"Enter the value of feet :  ";
        cin>>feet;
        cout<<"Enter the value of inches :  ";
        cin>>inches;
    }
    void show()
    {
        cout<<"The value of feet = "<<feet<<endl;
        cout<<"The value of inches = "<<inches<<endl;;
    }
};
int main()
{
    class distance dist1,dist2;

    cout<<"Details of the object dist1 :"<<endl;
    dist1.initialize();
    dist1.getDist();
    dist1.show();
    cout<<"\n\nDetails of the object dist2 :"<<endl;
    dist2.initialize();
    dist2.setDist(13,23.13);
    dist2.show();
    return 0;
}
