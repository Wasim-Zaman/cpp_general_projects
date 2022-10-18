#include <iostream>

using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;
public:
    Time(int h=0 , int m=0 , int s=0)
    {
        setTime(h,m,s);
    }
    void setTime(int h,int m,int s)
    {
        setHours(h);
        setMinutes(m);
        setSeconds(s);
    }
    void setHours(int h)
    {
        if(h>=0 && h<24)
        hours=h;
        else
        hours=0;
    }
    void setMinutes(int m)
    {
        if(m>=0 && m<60)
            minutes=m;
        else
            minutes=0;
    }
    setSeconds(int s)
    {
        if(s>=0 && s<60)
        seconds=s;
        else
            seconds=0;
    }
    int getHours()const
    {
        return hours;
    }
    int getMinutes()const
    {
        return minutes;
    }
    int getseconds()const
    {
        return seconds;
    }
    void printTime()const
    {
        cout<<getHours()<<":"<<getMinutes()<<":"<<getseconds();
    }
};
int main()
{
    Time *ptr;
    int h,m,s;
    cout<<"Enter the value of hours\n";
    cin>>h;
    cout<<"Enter the value of minutes\n";
    cin>>m;
    cout<<"Enter the value of seconds\n";
    cin>>s;
    ptr=new Time(h,m,s);
    ptr->printTime();
    delete ptr;
    return 0;
}
