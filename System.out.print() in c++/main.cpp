#include <iostream>
#include <string>
using namespace std;

class System
{
public:
    class Stream
    {
    public:
        void print(string s)
        {
            cout<<s;
        }
    };
    Stream object;
    static Stream *out = &object;
};
int main()
{
    System::out->print("hello");
    return 0;
}
