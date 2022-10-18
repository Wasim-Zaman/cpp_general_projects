#include <iostream>

using namespace std;

template<class type>
class Stack
{
    type arr[5];
    int top;

    public:
    Stack()
    {
        top=-1;
    }
    void push(type var)
    {
        arr[++top]=var;
    }
    type pop()
    {
        return arr[top--];
    }
};

int main()
{
    Stack<int>s1;   //Object
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout<<"First pop value = "<<s1.pop()<<endl;
    cout<<"Second pop value = "<<s1.pop()<<endl;
    cout<<"Third pop value = "<<s1.pop()<<endl;
    cout<<"Forth pop value = "<<s1.pop()<<endl;
    cout<<"Fifth pop value = "<<s1.pop()<<endl;

    Stack<char>s2;  //Object
    s1.push('W');
    s1.push('A');
    s1.push('S');
    s1.push('I');
    s1.push('M');

    cout<<"First pop char = "<<s1.pop()<<endl;
    cout<<"Second pop char = "<<s1.pop()<<endl;
    cout<<"Third pop char = "<<s1.pop()<<endl;
    cout<<"Forth pop char = "<<s1.pop()<<endl;
    cout<<"Fifth pop char = "<<s1.pop()<<endl;

    return 0;
}
