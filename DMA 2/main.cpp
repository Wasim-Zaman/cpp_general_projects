#include <iostream>

using namespace std;

struct student
{
    int ID;
    float cgpa;
    char *name;
    name=new char[];
};
int main()
{
    student *s1=new student;
    cout<<"Enter the name of a student\n";
    getline(cin,s->*char);
    return 0;
}
